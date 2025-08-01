/*!
 * @file 7semi_ADXL335.cpp
 * @brief Arduino library for the ADXL335 3-axis analog accelerometer
 * @details This library reads analog voltage from the X, Y, Z outputs of the ADXL335 sensor
 *          and converts it into raw ADC values, voltage (V), or acceleration (g-force).
 * @author 7semi
 * @copyright (c) 2025
 */

#include "7semi_ADXL335.h"

ADXL335_7semi::ADXL335_7semi(uint8_t xPin, uint8_t yPin, uint8_t zPin)
    : x_pin(xPin), y_pin(yPin), z_pin(zPin) {
}

void ADXL335_7semi::begin() {
  pinMode(x_pin, INPUT);
  pinMode(y_pin, INPUT);
  pinMode(z_pin, INPUT);
}

void ADXL335_7semi::readRaw(int &x, int &y, int &z) {
  x = analogRead(x_pin);
  y = analogRead(y_pin);
  z = analogRead(z_pin);
}

void ADXL335_7semi::readVoltage(float &x, float &y, float &z) {
  int rawX, rawY, rawZ;
  readRaw(rawX, rawY, rawZ);

  x = (rawX / 1023.0) * REF_VOLTAGE;
  y = (rawY / 1023.0) * REF_VOLTAGE;
  z = (rawZ / 1023.0) * REF_VOLTAGE;
}

void ADXL335_7semi::readG(float &x, float &y, float &z) {
  float voltX, voltY, voltZ;
  readVoltage(voltX, voltY, voltZ);

  x = (voltX - ZERO_VOLTAGE) / SENSITIVITY;
  y = (voltY - ZERO_VOLTAGE) / SENSITIVITY;
  z = (voltZ - ZERO_VOLTAGE) / SENSITIVITY;
}
