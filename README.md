
<img width="1058" height="418" alt="5e3fbf1b-5832-4e8d-8d21-c7ad76bd68b0 (2)" src="https://github.com/user-attachments/assets/de425f0f-0d49-4d75-9cf7-d6a56d3f109b" />

# PALMS
Passive Analog Localization via Multilateration System

Designed by: Dane Nicol @SDSUMechatronics

August 14th, 2025

## Abstract
The following document presents a comprehensive technical analysis of the design and implementation of an analog front-end detection system for underwater acoustic pingers. The system isolates pinger frequencies at design-specific 20 kHz, 25 kHz, 30 kHz, 35 kHz, and 40 kHz, with automatic adjustment for range and pulse frequency (with best performance ranging from 0.5 s to 2 s). PALMS allows for instantaneous directional guidance for autonomous underwater vehicles (AUVs) completely void of all digital filtering or processing, being a fully analog system, with minimal digital control needed. The most technical emphasis will be for the second-order state variable filter (SVF), with a primary focus on its bandpass behavior. Starting from the canonical transfer function, this analysis will derive the relevant characteristics to fully understand the behavior of the SVF. The analysis highlights the decoupled control of center frequency and quality factor inherent to the state variable topology, demonstrating its suitability for high-selectivity narrowband filtering applications. Theoretical results provide a complete framework for predicting steady-state frequency response, transient behavior, and practical implementation performance.

## Introduction
Underwater acoustic localization relies on detecting narrowband pulsed signals emitted by pingers at known frequencies. In high-noise aquatic environments, robust detection requires selective filtering, stable gain control, and reliable pulse discrimination. While digital signal processing is common in such applications, this project explores a predominantly analog approach to minimize latency, reduce computational burden, and maintain deterministic timing behavior. The objective of this system is to convert weak hydrophone transducer outputs into clean digital pulses corresponding only to valid pinger signals within a controlled frequency band. By implementing frequency selection, envelope detection, and timing comparison entirely in analog hardware, the system provides immediate directional logic signals to an embedded controller. The design emphasizes precision, tunability, and temporal discrimination, ensuring that the strongest signal within the selected frequency band is preferentially detected and used for navigation decisions.

## System Design && Simulation Results
[Click here!](<Documentation/PALMS System Design.pdf>)

## PCB Design
COMINNG

## Application in AUV Results
COMING SOON

## Applications
- Autonomous Underwater Vehicle Navigation — fast reaction without microcontroller latency
- Acoustic Beacon Tracking — recover lost gear or tagged marine life
- Diver Position Monitoring — safety and guidance
- Shallow and Deep-water Robotics — robust against EMI and digital processing bottlenecks
- Low-power, Mission-critical Operations — extended deployment with minimal computational load

## Datasheets
LINK
