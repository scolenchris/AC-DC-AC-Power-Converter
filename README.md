# AC-DC-AC-Power-Converter

![image](https://github.com/user-attachments/assets/0ab154b9-bc6f-4de4-bd2d-82d34a2d9def)

- [中文版](./README_CN.md)

A multi-stage power conversion system designed to convert single-phase AC input to regulated AC output. It includes a rectifier, Buck chopper, and inverter, with PWM control and soft-start functionality for efficient power management.

## Project Overview

This project utilizes MATLAB and the Simscape/Electrical/Power System library to design and implement a power electronics system that includes a rectifier circuit, a Buck step-down circuit, and an inverter circuit. The system is divided into open-loop and closed-loop control sections, enabling soft-start, voltage regulation, and inverter output functionalities.

## Project Detailed Design and Effect

- [中文版](./Design_CN.md)
- [English Version](./Design_EN.md)

## Design Requirements

1. **Rectifier Circuit**:

   - Input: 50Hz, 220V RMS AC.
   - Output: 150V~190V DC.
   - Soft-start time: 2.0~3.8 seconds, achieved by adjusting the rectification angle α using a variable resistor.

2. **Buck Step-down Circuit (Open-loop Control)**:

   - Input: DC voltage from the rectifier circuit.
   - Output: 70V~100V DC.
   - Switching frequency: 13kHz~20kHz.

3. **Inverter Circuit**:

   - Input: DC voltage from the Buck circuit.
   - Output: 150Hz~190Hz, 32V~50V AC.
   - Modulation: PWM modulation.

4. **Buck Step-down Circuit (Closed-loop Control)**:
   - Input: DC voltage from the rectifier circuit.
   - Output: 40V DC, with ripple voltage less than 5%.
   - Control method: Voltage-current dual-loop control, using a PI controller, with average current modulation for the current loop.

## Design Specifications

- **Rectifier Circuit**:

  - Output voltage: 175V
  - Soft-start time: 3.6 seconds

- **Buck Step-down Circuit (Open-loop Control)**:

  - Output voltage: 70V
  - Switching frequency: 13kHz

- **Inverter Circuit**:

  - Output frequency: 175Hz
  - Output amplitude: 48V
  - Switching frequency: 28kHz

- **Buck Step-down Circuit (Closed-loop Control)**:
  - Output voltage: 40V
  - Ripple voltage: Less than 5%

## File Structure

- `main_open_loop.slx`: Main file for the open-loop control system.
- `main_closed_loop.slx`: Main file for the closed-loop control system.
- Other files: Reference and test files.

## Usage Instructions

1. Open MATLAB.
2. Run `main_open_loop.slx` to start the open-loop control system.
3. Run `main_closed_loop.slx` to start the closed-loop control system.

## Notes

- When designing the closed-loop control, ensure appropriate selection of PI controller parameters to avoid excessive overshoot.
- Control the output voltage ripple carefully, as excessive ripple can lead to significant ripple in the inverter output voltage.
