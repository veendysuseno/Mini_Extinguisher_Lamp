# Mini_Extinguisher_Lamp

This Arduino project controls three LEDs with varying brightness to simulate a flickering light effect. The brightness of each LED is randomized to create a dynamic visual effect.

## Components

- **LEDs**: Three LEDs connected to different pins.
- **Resistors**: Appropriate resistors for each LED.
- **Arduino Board**: For controlling the LEDs.

## Code Overview

1. **Setup**:

   - Initializes three LED pins as outputs.

2. **Loop**:
   - Randomly adjusts the brightness of each LED.
   - Introduces a random delay between brightness changes.

## Code

```cpp
// Lampu Pemadam Mini

int ledPin1 = 9;    // Inisialisasi pin 9
int ledPin2 = 10;   // Inisialisasi pin 10
int ledPin3 = 11;   // Inisialisasi pin 11

void setup(){
    pinMode(ledPin1, OUTPUT); // Set pin 9 sebagai output
    pinMode(ledPin2, OUTPUT); // Set pin 10 sebagai output
    pinMode(ledPin3, OUTPUT); // Set pin 11 sebagai output
}

void loop(){
    analogWrite(ledPin1, random(120) + 135);
    analogWrite(ledPin2, random(120) + 1
```

## Usage

- Setup: Connect the LEDs to pins 9, 10, and 11 on the Arduino.
- Run: Upload the code to the Arduino and observe the flickering light effect.
