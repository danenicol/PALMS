
<img width="1058" height="418" alt="5e3fbf1b-5832-4e8d-8d21-c7ad76bd68b0 (2)" src="https://github.com/user-attachments/assets/de425f0f-0d49-4d75-9cf7-d6a56d3f109b" />

# PALMS
Passive Analog Localization via Multilateration System 被动式模拟多点定位系统

Designed by: Dane Nicol @SDSUMechatronics

## General Summary (English)
PALMS is a fully analog system that detects underwater acoustic pingers at five specific frequencies (20–40 kHz) and provides directional guidance for autonomous underwater vehicles (AUVs). At its core is a state variable filter (SVF) that enables precise, independent control of frequency and selectivity without any digital signal processing. The system prioritizes low latency, deterministic timing, and minimal digital control, making it ideal for real-time navigation in high-noise aquatic environments.

## 总结（简体中文）
PALMS是一个全模拟系统，用于检测五个特定频率（20–40 kHz）的水下声学脉冲信号，并为自主水下航行器（AUV）提供方向引导。其核心是状态变量滤波器（SVF），无需任何数字信号处理即可独立控制频率和选择性。该系统以低延迟、确定性定时和最少的数字控制为优势，非常适合高噪声水下环境中的实时导航。

## Abstract
The following document presents a comprehensive technical analysis of the design and implementation of an analog front-end detection system for underwater acoustic pingers. The system isolates pinger frequencies at design-specific 20 kHz, 25 kHz, 30 kHz, 35 kHz, and 40 kHz, with automatic adjustment for range and pulse frequency (with best performance ranging from 0.5 s to 2 s). PALMS allows for instantaneous directional guidance for autonomous underwater vehicles (AUVs) completely void of all digital filtering or processing, being a fully analog system, with minimal digital control needed. The most technical emphasis will be for the second-order state variable filter (SVF), with a primary focus on its bandpass behavior. Starting from the canonical transfer function, this analysis will derive the relevant characteristics to fully understand the behavior of the SVF. The analysis highlights the decoupled control of center frequency and quality factor inherent to the state variable topology, demonstrating its suitability for high-selectivity narrowband filtering applications. Theoretical results provide a complete framework for predicting steady-state frequency response, transient behavior, and practical implementation performance. Underwater acoustic localization relies on detecting narrowband pulsed signals emitted by pingers at known frequencies. In high-noise aquatic environments, robust detection requires selective filtering, stable gain control, and reliable pulse discrimination. While digital signal processing is common in such applications, this project explores a predominantly analog approach to minimize latency, reduce computational burden, and maintain deterministic timing behavior. The objective of this system is to convert weak hydrophone transducer outputs into clean digital pulses corresponding only to valid pinger signals within a controlled frequency band. By implementing frequency selection, envelope detection, and timing comparison entirely in analog hardware, the system provides immediate directional logic signals to an embedded controller. The design emphasizes precision, tunability, and temporal discrimination, ensuring that the strongest signal within the selected frequency band is preferentially detected and used for navigation decisions.

## System Design && Theory && Simulation Results Documentation
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
