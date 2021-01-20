#ifndef REG_CONFIG_H
#define REG_CONFIG_H
#include <Arduino.h>
#include <Adafruit_BusIO_Register.h>
#include <Adafruit_SPIDevice.h>
#include "Reg_define.h"



// SPISettings
const static uint32_t SPI_CLOCK = 1000000;

 //Hack to fix compiling error with Adafruit Qt-Py (if Qt-Py, change SPI_BIT_ORDER to BitOrder type, else original  type of uint8_t)
#if !defined(ARDUINO_ARCH_SAM) && !defined(ARDUINO_ARCH_SAMD) && !defined(ESP8266) && !defined(ARDUINO_ARCH_STM32F2)
 const static uint8_t SPI_BIT_ORDER = MSBFIRST;

#else
 const static BitOrder SPI_BIT_ORDER = MSBFIRST;

#endif

const static uint8_t SPI_MODE = SPI_MODE3;



const static uint8_t PACKET_WIDTH = 4;

/** ----------REGISTER ADDRESS-------- **/
// General Configuration Registers
const static uint8_t ADDRESS_GCONF  = 0x00;

// Global Status Flags
const static uint8_t ADDRESS_GSTAT  = 0x01;

// INPUT Register
const static uint8_t ADDRESS_IOIN   = 0x04;

// Velocity Dependent Driver Feature Control Register Set
const static uint8_t ADDRESS_IHOLD_IRUN = 0x10;

//
const static uint8_t ADDRESS_TPOWERDOWN = 0x11;

//
const static uint8_t ADDRESS_TSTEP = 0x12;


const static uint8_t ADDRESS_TPWMTHRS = 0x13;

const static uint8_t ADDRESS_TCOOLTHRS = 0x14;


const static uint8_t ADDRESS_THIGH = 0x15;

// SPI Mode Register
const static uint8_t ADDRESS_XDIRECT = 0x2D;

// dcStep Minimum Velocity Register
const static uint8_t ADDRESS_VDCMIN = 0x33;


// Motor Driver Registers
// Microstepping Control Register Set
const static uint8_t ADDRESS_MSLUT_0 = 0x60;
const static uint8_t ADDRESS_MSLUT_1 = 0x61;
const static uint8_t ADDRESS_MSLUT_2 = 0x62;
const static uint8_t ADDRESS_MSLUT_3 = 0x63;
const static uint8_t ADDRESS_MSLUT_4 = 0x64;
const static uint8_t ADDRESS_MSLUT_5 = 0x65;
const static uint8_t ADDRESS_MSLUT_6 = 0x66;
const static uint8_t ADDRESS_MSLUT_7 = 0x67;
const static uint8_t ADDRESS_MSLUTSEL = 0x68;
const static uint8_t ADDRESS_MSLUTSTART = 0x69;
const static uint8_t ADDRESS_MSCNT = 0x6A;
const static uint8_t ADDRESS_MSCURACT = 0x6B;

// Driver Register Set
//const static uint8_t ADDRESS_CHOPCONF = 0x6C;

const static uint8_t ADDRESS_DCCTRL = 0x6E;

const static uint8_t ADDRESS_DRV_STATUS = 0x6F;

const static uint8_t ADDRESS_PWMCONF = 0x70;

const static uint8_t ADDRESS_PWM_SCALE = 0x71;
const static uint8_t ADDRESS_ENCM_CTRL = 0x72;
const static uint8_t ADDRESS_LOST_STEPS = 0x73;

const static uint8_t ADDRESS_COOLCONF = 0x6D;

#endif
