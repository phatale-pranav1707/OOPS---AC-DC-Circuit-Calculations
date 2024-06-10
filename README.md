# AC-DC Circuit Assistant

## Overview

The AC-DC Circuit Assistant is a C++ program designed to assist users in understanding and calculating various parameters of AC and DC circuits. It offers functionalities to calculate instantaneous voltage, time constant, initial maximum current, and instantaneous current for DC circuits, as well as average and RMS values, instantaneous values, and type selections for AC circuits.

## Features

- **DC Circuit Calculations:**
  - Instantaneous Voltage
  - Time Constant
  - Initial Maximum Current
  - Instantaneous Current

- **AC Circuit Calculations:**
  - Average and RMS Current
  - Average and RMS Voltage
  - Instantaneous Current
  - Instantaneous Voltage
  - Polar to Rectangular Conversion
  - Rectangular to Polar Conversion
  - Various Types of Circuits (Purely Resistive, Purely Inductive, Purely Capacitive, RL, RC, RLC)

## Usage

### Compile the Program

To compile the program, use a C++ compiler like `g++`:

```sh
g++ -o acdc_circuit_assistant main.cpp
```

### Run the Program

Execute the compiled program:

```sh
./acdc_circuit_assistant
```

### Interacting with the Program

1. The program will prompt you to choose between AC and DC circuits.
2. Based on your selection, you will be given further options to calculate different parameters.
3. Follow the prompts to enter the required values for calculations.
4. The program will display the results based on your inputs.

### Example

Upon running the program, you will see a prompt like this:

```sh
<<< Welcome to AC-DC Circuit Assistant >>>

Which circuit do you want to explore?

Enter your choice (AC or DC): 
```

If you enter `DC`, you will be prompted to choose a specific calculation:

```sh
Choose your subtopic (Charging or Discharging): 
```

Follow the prompts to complete your calculations.

## Code Structure

- **DC Class:** Handles calculations for DC circuits.
- **Types Class:** Contains methods for different types of circuits.
- **AC Class:** Inherits from Types classes and handles AC circuit calculations.
- **Main Function:** Handles user interaction and calls appropriate functions based on user input.

