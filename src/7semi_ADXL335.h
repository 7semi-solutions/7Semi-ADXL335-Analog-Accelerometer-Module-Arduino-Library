/*!
 * @file 7semi_ADXL335.h
 * @brief Arduino library for the ADXL335 3-axis analog accelerometer
 * @details Reads analog signals from the sensor and provides raw, voltage, and g-force outputs.
 * @author 7semi
 * @copyright (c) 2025
 */

#ifndef _7SEMI_ADXL335_H_
#define _7SEMI_ADXL335_H_

#include "Arduino.h"

// Constants for ADC conversion
#define REF_VOLTAGE    5       // Reference voltage in volts
#define ZERO_VOLTAGE   1.75     // Voltage at 0g (typically 1.6V for ADXL335)
#define SENSITIVITY    0.33    // Sensitivity in V/g (typically 330mV/g)

/*!
 * @class ADXL335_7semi
 * @brief Class to interface with the ADXL335 sensor
 */
class ADXL335_7semi {
public:
  ADXL335_7semi(uint8_t x_pin = A0, uint8_t y_pin = A1, uint8_t z_pin = A2);
  void begin();
  void readRaw(int &x, int &y, int &z);
  void readVoltage(float &x, float &y, float &z);
  void readG(float &x, float &y, float &z);

private:
  uint8_t x_pin, y_pin, z_pin;
};

#endif  // _7SEMI_ADXL335_H_
