
<img width="1058" height="418" alt="5e3fbf1b-5832-4e8d-8d21-c7ad76bd68b0 (2)" src="https://github.com/user-attachments/assets/de425f0f-0d49-4d75-9cf7-d6a56d3f109b" />

# PALMS
Passive Analog Localization via Multilateration System

Designed by: Dane Nicol @SDSUMechatronics Electrical Team

August 14th, 2025

## Abstract
PALMS is a fully analog hardware platform designed to locate an underwater acoustic pingers by measuring the time difference of arrival (TDOA) of its signal at three spatially separated hydrophones. The system isolates pinger frequencies at design-specific 20 kHz, 25 kHz, 30 kHz, 35 kHz, and 40 kHz, with automatic adjustment for range and pulse frequency (with best performance ranging from 0.5 s to 2 s). PALMS allows for instantaneous directional guidance for autonomous underwater vehicles (AUVs) completely void of all digital filtering or processing, being a fully analog system, with minimal digital control needed. 

## Features
- **3 Hydrophone Inputs** for 3D spatial detection
- **Analog Bandpass Filtering** using a custom second-order State Variable Filter with multi-frequency bandpass selection via CMOS-switched resistor banks
- **High-Q Design** for precise frequency isolation, giving sufficient room for analog differentiation between various signals
- **Multilateralization** to compute position from TDOA data
- **Dual-axis Arming/Disarming Logic** with Horizontal control (compares hydrophone A vs B) and vertical control (compares hydrophone B vs C)
- **Analog SR Latch Control** for basic AUV movement commands (right/left, ascend/descend)
- **Minimal Digital Overhead** only basic state reading and control; all signal analysis is analog

## Applications
- Autonomous Underwater Vehicle Navigation — fast reaction without microcontroller latency
- Acoustic Beacon Tracking — recover lost gear or tagged marine life
- Diver Position Monitoring — safety and guidance
- Shallow and Deep-water Robotics — robust against EMI and digital processing bottlenecks
- Low-power, Mission-critical Operations — extended deployment with minimal computational load

## Repository Structure
[Documentation](../Documentation)

BLANK/

BLANK/

BLANK/
