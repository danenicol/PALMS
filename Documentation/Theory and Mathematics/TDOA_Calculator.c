// Dane Nicol; Aug 15th, 2025

#include <stdio.h>
#include <math.h>

#define SPEED_SOUND 1482.0       // m/s in freshwater (since UAV will more likely be in pool envrionment)
#define SPACING_FT 1.0           // hydrophone spacing in feet
#define FT_TO_M 0.3048           // ft to m conversion
#define PI 3.14159265358979323846

int main() {
    double az_deg;
    double el_deg;
    
    double az_rad;
    double el_rad;
    
    double dx;
    double dy;
    double dz;
    
    double d;

    d = SPACING_FT * FT_TO_M;

    // User input
    printf("Welcome to simple PALMS TDOA Calculator, have a comfortable time.\n");
    
    printf("Enter azimuth angle (degrees, 0° = +x): ");
    scanf("%lf", &az_deg);

    printf("Enter elevation angle (degrees, 0° = horizontal, +90° = up): ");
    scanf("%lf", &el_deg);

    // Convert to radians
    az_rad = az_deg * PI / 180.0;
    el_rad = el_deg * PI / 180.0;

    // Direction vector of incoming wave
    dx = cos(el_rad) * cos(az_rad);
    dy = cos(el_rad) * sin(az_rad);
    dz = sin(el_rad);

    // Hydrophone positions
    double Ax=0, Ay=0, Az=0;
    double Bx=d*2, By=0, Bz=0;
    double Cx=d*2, Cy=0, Cz=d;

    // Dot products (relative projection of arrival direction onto baselines)
    double dAB = (Bx - Ax)*dx + (By - Ay)*dy + (Bz - Az)*dz;
    double dBC = (Cx - Bx)*dx + (Cy - By)*dy + (Cz - Bz)*dz;

    // Time differences
    double tAB = dAB / SPEED_SOUND;
    double tBC = dBC / SPEED_SOUND;

    // Results
    printf("\n");
    printf("\n");
    printf("Using the specified degrees:\n");
    printf("Azimuth: %.2f deg, Elevation: %.2f deg\n", az_deg, el_deg);
    printf("\n");
    printf("TDOA Resulting in:\n");
    printf("TDOA (A->B): %.6f ms\n", tAB * 1000.0);
    printf("TDOA (B->C): %.6f ms\n", tBC * 1000.0);
    printf("\n");
    printf("Thank you >:~)");

    return 0;
}
