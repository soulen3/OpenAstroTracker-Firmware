/**
 * @brief a pins configuration file for an MKS Gen L V2.1 OAT.
 * https://github.com/makerbase-mks/MKS-GEN_L/blob/master/hardware/MKS%20Gen_L%20V2.1_001/MKS%20GEN_L%20V2.1_001%20PIN.pdf
 */

#pragma once

// RP2040 don't have real EEPROM memeory.
#define USE_DUMMY_EEPROM true

// DRIVER_TYPE_TMC2209_UART requires 4 digital pins in Arduino pin numbering
#ifndef RA_STEP_PIN
    #define RA_STEP_PIN 54  // STEP
#endif
#ifndef RA_DIR_PIN
    #define RA_DIR_PIN 55  // DIR
#endif
#ifndef RA_EN_PIN
    #define RA_EN_PIN 38  // Enable
#endif
#ifndef RA_DIAG_PIN
    #define RA_DIAG_PIN 3  // only needed for autohome function
#endif
#ifndef RA_MS0_PIN
    #define RA_MS0_PIN 51
#endif
#ifndef RA_MS1_PIN
    #define RA_MS1_PIN 52
#endif
#ifndef RA_MS2_PIN
    #define RA_MS2_PIN 63
#endif
// DRIVER_TYPE_TMC2209_UART requires 2 additional digital pins for SoftwareSerial, can be shared across all drivers
#ifndef RA_SERIAL_PORT_TX
    #define RA_SERIAL_PORT_TX 40  // SoftwareSerial TX port
#endif
#ifndef RA_SERIAL_PORT_RX
    #define RA_SERIAL_PORT_RX 63  // SoftwareSerial RX port
#endif
#ifndef RA_DRIVER_ADDRESS
    #define RA_DRIVER_ADDRESS 0b00
#endif
// DRIVER_TYPE_TMC2209_UART requires 4 digital pins in Arduino pin numbering
#ifndef DEC_STEP_PIN
    #define DEC_STEP_PIN 60  // STEP
#endif
#ifndef DEC_DIR_PIN
    #define DEC_DIR_PIN 61  // DIR
#endif
#ifndef DEC_EN_PIN
    #define DEC_EN_PIN 56  // Enable
#endif
#ifndef DEC_DIAG_PIN
    #define DEC_DIAG_PIN 14  // only needed for autohome function
#endif
#ifndef DEC_MS0_PIN
    #define DEC_MS0_PIN 51
#endif
#ifndef DEC_MS1_PIN
    #define DEC_MS1_PIN 52
#endif
#ifndef DEC_MS2_PIN
    #define DEC_MS2_PIN 64
#endif


#define SW_SERIAL_UART 0
// DRIVER_TYPE_TMC2209_UART HardwareSerial port, can be shared across all drivers
#ifndef DEC_DRIVER_ADDRESS
    #define DEC_DRIVER_ADDRESS 0b01  // Set by MS1/MS2 (MS1 HIGH, MS2 LOW)
#endif
#ifndef RA_SERIAL_PORT
    #define RA_SERIAL_PORT Serial1
#endif
#ifndef DEC_SERIAL_PORT
    #define DEC_SERIAL_PORT Serial1
#endif


