#include <7semi_ADXL335.h>

// Connect ADXL335 X/Y/Z outputs to A0, A1, A2
ADXL335_7semi accel;

void setup() {
  Serial.begin(115200);
  accel.begin();
  Serial.println(" ADXL335 Accelerometer Reading");
  Serial.println("===========================================");
}

void loop() {
  float x, y, z;
  accel.readG(x, y, z);

  Serial.print("X: "); Serial.print(x, 2);
  Serial.print("g\tY: "); Serial.print(y, 2);
  Serial.print("g\tZ: "); Serial.print(z, 2);
  Serial.println("g");

  delay(500);
}
