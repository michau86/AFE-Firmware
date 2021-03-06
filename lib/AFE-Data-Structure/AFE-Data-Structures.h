/* AFE Firmware for smart home devices
  LICENSE: https://github.com/tschaban/AFE-Firmware/blob/master/LICENSE
  DOC: https://www.smartnydom.pl/afe-firmware-pl/ */

#ifndef _AFE_Data_Structures_h
#define _AFE_Data_Structures_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#else
#include "WProgram.h"
#endif

#include <AFE-DEVICE-Structure.h>
#include <AFE-DOMOTICZ-Structure.h>
#include <AFE-FIRMWARE-Structure.h>
#include <AFE-HTTP-COMMAND-Structure.h>

#include <AFE-MQTT-Structure.h>
#include <AFE-NETWORK-Structure.h>
#include <AFE-RELAY-Structure.h>
#include <AFE-SWITCH-Structure.h>

#ifdef CONFIG_HARDWARE_LED
#include <AFE-LED-Structure.h>
#endif

#ifdef T1_CONFIG
#include <AFE-DS18B20-Sensor-Structure.h>
#endif

#if defined(T2_CONFIG) || defined(T5_CONFIG)
#include <AFE-DHT-Sensor-Structure.h>
#endif

#ifdef T3_CONFIG
#include <AFE-PIR-Sensor-Structure.h>
#endif

#ifdef T5_CONFIG
#include <AFE-CONTACTRON-Structure.h>
#include <AFE-GATE-Structure.h>
#endif

/* @TODO BUG For unknown reason non T5 version can't be compiled if these are
 * excluded */
#include <AFE-BH1750-Sensor-Structure.h>
#include <AFE-BMx80-Sensor-Structure.h>
#include <AFE-HPMA115S0-Sensor-Structure.h>

#ifdef T6_CONFIG
#include <AFE-SERIALPORT-Structure.h>
#endif

#endif
