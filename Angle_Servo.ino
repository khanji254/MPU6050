
/* Get tilt angles on X and Y, and rotation angle on Z
 * Angles are given in degrees
 * 
 * License: MIT
 */

#include "Wire.h"
#include <MPU6050_light.h>
#include <Servo.h>

MPU6050 mpu(Wire);
Servo myservo;

const int servoPin = 9;
unsigned long timer = 0;
int a = 0;

void setup() {
  Serial.begin(9600);
  initializeServo();
  initializeMPU();
}

void loop() {
  mpu.update();

  if (shouldPrintData()) {
    printAngles();
    timer = millis();
  }

  controlServo();
}

void initializeServo() {
  myservo.attach(servoPin);
}

void initializeMPU() {
  Wire.begin();
  byte status = mpu.begin();
  Serial.print(F("MPU6050 status: "));
  Serial.println(status);

  while (status != 0) { } // Stop if could not connect to MPU6050
  
  Serial.println(F("Calculating offsets, do not move MPU6050"));
  delay(1000);
  // mpu.upsideDownMounting = true; // Uncomment this line if the MPU6050 is mounted upside-down
  mpu.calcOffsets(); // Gyro and accelerometer
  Serial.println("Done!\n");
}

bool shouldPrintData() {
  return (millis() - timer) > 10; // Print data every 10ms
}

void printAngles() {
  Serial.print("X : ");
  Serial.print(mpu.getAngleX());
  Serial.print("\tY : ");
  Serial.print(mpu.getAngleY());
  Serial.print("\tZ : ");
  Serial.println(mpu.getAngleZ());
}

void controlServo() {
  a = mpu.getAngleZ();
  a = map(a, 0, 180, 0, 180); // Ensure 'a' is within servo limits
  myservo.write(a);
  delay(15);
}
