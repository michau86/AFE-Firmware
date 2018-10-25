/* AFE Firmware for smart home devices
  LICENSE: https://github.com/tschaban/AFE-Firmware/blob/master/LICENSE
  DOC: https://www.smartnydom.pl/afe-firmware-pl/ */

#ifndef _AFE_Configuration_h
#define _AFE_Configuration_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#else
#include "WProgram.h"
#endif

#if defined(T0_CONFIG)
#define FIRMWARE_VERSION "1.2.4"
#define FIRMWARE_TYPE 0
#elif defined(T0_SHELLY_1_CONFIG)
#define FIRMWARE_VERSION "S1.0.1"
#define FIRMWARE_TYPE 0
#elif defined(T4_CONFIG)
#define FIRMWARE_VERSION "1.2.1"
#define FIRMWARE_TYPE 4
#endif

#endif