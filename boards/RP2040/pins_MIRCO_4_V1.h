/**
 * @brief a pins configuration file for an MicroFly Mirco 4 v1.0 OAT.
 * https://mellow.klipper.cn/en/docs/ProductDoc/MainBoard/fly-micro/fly-micro4/wiring
 * There's an error on the pin out.  DAIG are gpio12-15 and senors are io12-15.
 * They're listed on the back of the board.
 * Convert gpio pins to output pins here:
 * https://mellow.klipper.cn/en/docs/ProductDoc/MainBoard/fly-micro/fly-micro4/schematic/
 */

#pragma once

// RA Homing pin for Hall sensor 
#ifndef RA_HOMING_SENSOR_PIN
    #define RA_HOMING_SENSOR_PIN 55 //(IO13)
#endif

// DRIVER_TYPE_TMC2209_UART HardwareSerial port, can be shared across all drivers
#define SW_SERIAL_UART 0
#ifndef RA_SERIAL_PORT
    #define RA_SERIAL_PORT 9
#endif
#ifndef DEC_SERIAL_PORT
    #define DEC_SERIAL_PORT 9
#endif
#ifndef RA_DRIVER_ADDRESS
    #define RA_DRIVER_ADDRESS 0b00
#endif
#ifndef DEC_DRIVER_ADDRESS
    #define DEC_DRIVER_ADDRESS 0b01  
#endif

// RA Stepper ('X' stepper/Driver0)
#ifndef RA_STEP_PIN
    #define RA_STEP_PIN 6 //GPIO6
#endif
#ifndef RA_DIR_PIN
    #define RA_DIR_PIN 3 //GPIO3
#endif
#ifndef RA_EN_PIN
    #define RA_EN_PIN 7 //GPIO7
#endif
#ifndef RA_DIAG_PIN
    #define RA_DIAG_PIN 13 //GPIO13
#endif

//DEC Stepper ('Y' stepper/Driver1)
#ifndef DEC_STEP_PIN
    #define DEC_STEP_PIN 1 //GPIO1
#endif
#ifndef DEC_DIR_PIN
    #define DEC_DIR_PIN 0 //GPIO0
#endif
#ifndef DEC_EN_PIN
    #define DEC_EN_PIN 2 //GPIO2
#endif
#ifndef DEC_DIAG_PIN
    #define DEC_DIAG_PIN 14 //GPI14
#endif


