# DC Motors

This guide explains how to control a DC motor with an Arduino using PWM for speed control and direction. The example code provided controls the motor in clockwise and counter-clockwise directions at both full and half speeds.

## Fundamentals

### Working principles
A DC motor converts electrical current into mechanical energy.
- They rotate continuously as long as voltage is applied, and the speed depends on the applied voltage (higher voltage = higher speed).
- The basic control for a DC motor is speed and direction, typically managed using Pulse Width Modulation (PWM) signals for speed control and an H-bridge circuit to reverse the direction.

### Notes
- Smooth rotation suitable for continuous movement
- Hard to maintain a precise rotation count over time

### Applications
- Fans, coveyor belts, wheels, ...

## Controlling with Arduino

### Parts

1. **Arduino Board** (e.g., Arduino Uno)
2. **DC Motor**
3. **H-Bridge Motor Driver Module** (e.g., L298N or L293D, needed to handle current for the motor)
4. **External Power Supply** (e.g., 9V battery or power adapter, if your motor needs more power than the Arduino’s 5V can supply)
5. **Jumper Wires**
6. **Breadboard** (optional, for cleaner wiring)

### Wiring Instructions

1. **Connect the Motor Driver Module to the Arduino**:
   - **ENA (PWM pin)** on the motor driver ➔ Connect to **pin 5** on Arduino (`motorEnable`).
   - **IN1** on the motor driver ➔ Connect to **pin 6** on Arduino (`motorIn1`).
   - **IN2** on the motor driver ➔ Connect to **pin 7** on Arduino (`motorIn2`).
   
2. **Connect the Motor to the Motor Driver**:
   - Connect the motor's positive and negative terminals to the **motor output terminals** on the motor driver module (often labeled **OUT1** and **OUT2**).

3. **Power the Motor Driver**:
   - **Motor Power Supply (Vcc)** on the motor driver ➔ Connect to an external power source (e.g., 9V battery or adapter).
   - **Ground (GND)** on the motor driver ➔ Connect to **GND** on the Arduino.
   - If using a motor driver module with an onboard voltage regulator (such as the L298N), you may connect **Vcc to the 5V pin on the Arduino** instead of an external source if the motor power requirements are low.

4. **Connect Ground**:
   - Connect the **ground (GND)** pin from the Arduino to **GND** on the motor driver.


## How the Code Works

- **Pin Definitions**: Sets up the `motorEnable`, `motorIn1`, and `motorIn2` pins to control speed and direction.
- **Setup**: Sets these pins as outputs.
- **Loop**:
  - Rotates the motor clockwise at full speed, then stops.
  - Rotates the motor counter-clockwise at full speed, then stops.
  - Repeats the sequence at half speed.
- **Direction Control**:
  - `digitalWrite(motorIn1, HIGH); digitalWrite(motorIn2, LOW);` ➔ Rotates clockwise.
  - `digitalWrite(motorIn1, LOW); digitalWrite(motorIn2, HIGH);` ➔ Rotates counter-clockwise.
- **Speed Control**:
  - `analogWrite(motorEnable, fullSpeed);` ➔ Runs at full speed.
  - `analogWrite(motorEnable, halfSpeed);` ➔ Runs at half speed.
  - `analogWrite(motorEnable, 0);` ➔ Stops the motor.
 
## Resources
