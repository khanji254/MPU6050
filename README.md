# MPU6050 and Servo Motor Control

This repository contains Arduino code for interfacing with the MPU6050 sensor and controlling a servo motor based on the angle data obtained.

## Files

### 1. **Angle_Servo.ino**

This Arduino sketch demonstrates the integration of the MPU6050 sensor and servo motor. The servo is controlled based on the Z-angle data obtained from the MPU6050, showcasing a practical application of motion control.

### 2. **GetAngle.ino**

This code file focuses on the basic functionalities of the MPU6050 sensor. It initializes the sensor, calculates offsets, and continuously prints the X, Y, and Z angles to the Serial Monitor.

### 3. **servo.ino**

The servo.ino file is dedicated to the basic control of a servo motor. It initializes the servo, attaches it to a specified pin, and controls the servo based on a predefined angle. This file serves as a foundation for servo motor control.

## How to Use

1. **Clone the Repository:**
   ```bash
   git clone https://github.com/your-username/MPU6050-Servo-Control.git
   cd MPU6050-Servo-Control
   ```

2. **Upload Code:**
   - Open the Arduino IDE.
   - Open each `.ino` file in the IDE.
   - Connect your Arduino board.
   - Upload the code to your Arduino board.

3. **Serial Monitor:**
   - Open the Serial Monitor in the Arduino IDE (Tools > Serial Monitor).
   - View the angle data from MPU6050 and servo control feedback.

4. **Explore and Customize:**
   - Understand the code structure and explore possibilities for customization.
   - Experiment with different angles, delays, or additional functionalities.

## Dependencies

- [Wire.h](https://www.arduino.cc/en/Reference/Wire)
- [MPU6050_light.h](https://github.com/Chris--A/MPU6050_light)
- [Servo.h](https://www.arduino.cc/en/Reference/Servo)

## Contributions

Contributions are welcome! If you have improvements, bug fixes, or new features, feel free to open an issue or submit a pull request.

## License

This project is licensed under the MIT License - 

