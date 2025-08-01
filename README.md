# 7Semi-ADXL335-Analog-Accelerometer-Module-Arduino-Library

This Arduino library provides an interface for reading 3-axis analog acceleration data from the **7Semi ADXL335 Accelerometer Module**. It allows easy integration and measurement of X, Y, and Z axis acceleration using Arduino analog inputs.

![Arduino](https://img.shields.io/badge/platform-arduino-blue.svg)
![License](https://img.shields.io/badge/license-MIT-green.svg)
![Status](https://img.shields.io/badge/status-active-brightgreen.svg)

---

## Hardware Required

- 7Semi ADXL335 Accelerometer Module  
- Arduino-compatible board  
- 3 analog input pins (for X, Y, Z outputs)  

---

## Getting Started
 
  ### 1. Library Installation
 
      - Download or clone the repository.

      - Copy the files `7semi_ADXL335.cpp` and `7semi_ADXL335.h` into a folder named `7semi_ADXL335` under your Arduino `libraries/` directory.

      - Restart the Arduino IDE.

---

### 2. Wiring

| ADXL335 Pin | Arduino Pin |
|-------------|-------------|
| X-OUT       | A0          |
| Y-OUT       | A1          |
| Z-OUT       | A2          |
| VCC         | 3.3V or 5V  |
| GND         | GND         |

---

## Example Output

ADXL335 Initialized
X: 503 Y: 507 Z: 615
X: 498 Y: 506 Z: 610
X: 502 Y: 508 Z: 612

The output values represent analog readings (0–1023) corresponding to acceleration in X, Y, and Z directions. You can convert these to g-units using calibration.

---

## Notes

- The ADXL335 outputs raw analog voltage proportional to acceleration.
- Sensor range: ±3g
- Calibration recommended for precise g conversion.

---

## License

This library is released under the MIT License.
