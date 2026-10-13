
<img width="1058" height="418" alt="5e3fbf1b-5832-4e8d-8d21-c7ad76bd68b0 (2)" src="https://github.com/user-attachments/assets/de425f0f-0d49-4d75-9cf7-d6a56d3f109b" />

# PALMS
Passive Analog Localization via Multilateration System 被动式模拟多点定位系统

Designed by: Dane Nicol @SDSUMechatronics

## General Summary (English)
PALMS is a fully analog system that detects underwater acoustic pingers at five specific frequencies (20–40 kHz) and provides directional guidance for autonomous underwater vehicles (AUVs). At its core is a state variable filter (SVF) that enables precise, independent control of frequency and selectivity without any digital signal processing. The system prioritizes low latency, deterministic timing, and minimal digital control, making it ideal for real-time navigation in high-noise aquatic environments. This project is for SDSU Mechatronics' participation in Robo-Sub, from Robo-Nation: https://robosub.org/

## 总结（简体中文）
PALMS是一个全模拟系统，用于检测五个特定频率（20–40 kHz）的水下声学脉冲信号，并为自主水下航行器（AUV）提供方向引导。其核心是状态变量滤波器（SVF），无需任何数字信号处理即可独立控制频率和选择性。该系统以低延迟、确定性定时和最少的数字控制为优势，非常适合高噪声水下环境中的实时导航。 这项目为了SDSU Mechatronics’ 参加在Robo-Sub，从Robo-Nation: https://robosub.org/

## System Design || Theory || Simulation Results:
[Click here to view the full Documentation](<Documentation/PALMS System Design.pdf>)

## PCB Design
Iteration #2
<img width="1330" height="830" alt="image" src="https://github.com/user-attachments/assets/bded9ef8-4156-430c-9de0-1625a8648533" />
<img width="1488" height="926" alt="image" src="https://github.com/user-attachments/assets/ee512297-fac5-42b8-b482-a6d2f2c35f68" />


Iteration #1
*Due to time constrains, design has been simplified to 2 dimensions, with TDOA signals being sent out to another computer. Analog TDOA computation circuit not included within Iteration #1
<img width="865" height="855" alt="Screenshot_select-area_20260617214514" src="https://github.com/user-attachments/assets/655632af-a68f-4b6b-8826-0a62339a6d83" />
<img width="808" height="795" alt="Screenshot_select-area_20260617214440" src="https://github.com/user-attachments/assets/6bff4bd0-72a9-457a-b9cf-3f34595aad24" />

Older Design (Decommissioned)
<img width="847" height="1652" alt="Screenshot_select-area_20260927210900" src="https://github.com/user-attachments/assets/578c547d-02be-44af-8669-35e6505c3137" />
<img width="920" height="1796" alt="Screenshot_select-area_20260927211105" src="https://github.com/user-attachments/assets/19068c66-2568-429d-ab20-8d447b24424c" />


## Application/Results in AUV
COMING SOON
