
#ifndef ATMO_ABILITY_HANDLER_H
#define ATMO_ABILITY_HANDLER_H

#include "atmosphere_platform.h"
#include "atmosphere_callbacks.h"

#include "../atmo/core.h"

#ifdef __cplusplus
	extern "C"{
#endif

#define ATMO_ABILITY(ELEMENT, NAME) ATMO_ ## ELEMENT ## _ABILITY_  ## NAME

void ATMO_AbilityHandler(unsigned int abilityHandleId, ATMO_Value_t *value);

#define ATMO_Interval_ABILITY_trigger 0x1
#define ATMO_Interval_ABILITY_setup 0x2
#define ATMO_Interval_ABILITY_interval 0x3
#define ATMO_BME680_ABILITY_trigger 0x4
#define ATMO_BME680_ABILITY_setup 0x5
#define ATMO_BME680_ABILITY_readTemperature 0x6
#define ATMO_BME680_ABILITY_readHumidity 0x7
#define ATMO_BME680_ABILITY_readPressure 0x8
#define ATMO_BME680_ABILITY_readGasResistance 0x9
#define ATMO_EmbeddedBHI160_ABILITY_trigger 0xa
#define ATMO_EmbeddedBHI160_ABILITY_setup 0xb
#define ATMO_EmbeddedBHI160_ABILITY_xAcceleration 0xc
#define ATMO_EmbeddedBHI160_ABILITY_yAcceleration 0xd
#define ATMO_EmbeddedBHI160_ABILITY_zAcceleration 0xe
#define ATMO_EmbeddedBHI160_ABILITY_acceleration 0xf
#define ATMO_EmbeddedBHI160_ABILITY_angularRate 0x10
#define ATMO_EmbeddedBHI160_ABILITY_xAngularRate 0x11
#define ATMO_EmbeddedBHI160_ABILITY_yAngularRate 0x12
#define ATMO_EmbeddedBHI160_ABILITY_zAngularRate 0x13
#define ATMO_EmbeddedBHI160_ABILITY_orientation 0x14
#define ATMO_EmbeddedBHI160_ABILITY_xOrientation 0x15
#define ATMO_EmbeddedBHI160_ABILITY_yOrientation 0x16
#define ATMO_EmbeddedBHI160_ABILITY_zOrientation 0x17
#define ATMO_NOA1305AmbientLight_ABILITY_trigger 0x18
#define ATMO_NOA1305AmbientLight_ABILITY_setup 0x19
#define ATMO_NOA1305AmbientLight_ABILITY_readAmbientLight 0x1a
#define ATMO_BLETemp_ABILITY_trigger 0x1b
#define ATMO_BLETemp_ABILITY_setup 0x1c
#define ATMO_BLETemp_ABILITY_setValue 0x1d
#define ATMO_BLETemp_ABILITY_written 0x1e
#define ATMO_BLETemp_ABILITY_subscibed 0x1f
#define ATMO_BLETemp_ABILITY_unsubscribed 0x20
#define ATMO_BLEPres_ABILITY_trigger 0x21
#define ATMO_BLEPres_ABILITY_setup 0x22
#define ATMO_BLEPres_ABILITY_setValue 0x23
#define ATMO_BLEPres_ABILITY_written 0x24
#define ATMO_BLEPres_ABILITY_subscibed 0x25
#define ATMO_BLEPres_ABILITY_unsubscribed 0x26
#define ATMO_BLEHumid_ABILITY_trigger 0x27
#define ATMO_BLEHumid_ABILITY_setup 0x28
#define ATMO_BLEHumid_ABILITY_setValue 0x29
#define ATMO_BLEHumid_ABILITY_written 0x2a
#define ATMO_BLEHumid_ABILITY_subscibed 0x2b
#define ATMO_BLEHumid_ABILITY_unsubscribed 0x2c
#define ATMO_BLEAccX_ABILITY_trigger 0x2d
#define ATMO_BLEAccX_ABILITY_setup 0x2e
#define ATMO_BLEAccX_ABILITY_setValue 0x2f
#define ATMO_BLEAccX_ABILITY_written 0x30
#define ATMO_BLEAccX_ABILITY_subscibed 0x31
#define ATMO_BLEAccX_ABILITY_unsubscribed 0x32
#define ATMO_BLEAccY_ABILITY_trigger 0x33
#define ATMO_BLEAccY_ABILITY_setup 0x34
#define ATMO_BLEAccY_ABILITY_setValue 0x35
#define ATMO_BLEAccY_ABILITY_written 0x36
#define ATMO_BLEAccY_ABILITY_subscibed 0x37
#define ATMO_BLEAccY_ABILITY_unsubscribed 0x38
#define ATMO_BLEAccZ_ABILITY_trigger 0x39
#define ATMO_BLEAccZ_ABILITY_setup 0x3a
#define ATMO_BLEAccZ_ABILITY_setValue 0x3b
#define ATMO_BLEAccZ_ABILITY_written 0x3c
#define ATMO_BLEAccZ_ABILITY_subscibed 0x3d
#define ATMO_BLEAccZ_ABILITY_unsubscribed 0x3e
#define ATMO_BLELight_ABILITY_trigger 0x3f
#define ATMO_BLELight_ABILITY_setup 0x40
#define ATMO_BLELight_ABILITY_setValue 0x41
#define ATMO_BLELight_ABILITY_written 0x42
#define ATMO_BLELight_ABILITY_subscibed 0x43
#define ATMO_BLELight_ABILITY_unsubscribed 0x44
#define ATMO_LessLightLevel_ABILITY_trigger 0x45
#define ATMO_LessLightLevel_ABILITY_setup 0x46
#define ATMO_LessLightLevel_ABILITY_evaluate 0x47
#define ATMO_GreatLightLevel_ABILITY_trigger 0x48
#define ATMO_GreatLightLevel_ABILITY_setup 0x49
#define ATMO_GreatLightLevel_ABILITY_evaluate 0x4a
#define ATMO_Red1_ABILITY_trigger 0x4b
#define ATMO_Red1_ABILITY_setup 0x4c
#define ATMO_Red1_ABILITY_setState 0x4d
#define ATMO_Red1_ABILITY_setPinHigh 0x4e
#define ATMO_Red1_ABILITY_setPinLow 0x4f
#define ATMO_Red1_ABILITY_read 0x50
#define ATMO_Red1_ABILITY_toggle 0x51
#define ATMO_Red1_ABILITY_interrupt 0x52
#define ATMO_Green1_ABILITY_trigger 0x53
#define ATMO_Green1_ABILITY_setup 0x54
#define ATMO_Green1_ABILITY_setState 0x55
#define ATMO_Green1_ABILITY_setPinHigh 0x56
#define ATMO_Green1_ABILITY_setPinLow 0x57
#define ATMO_Green1_ABILITY_read 0x58
#define ATMO_Green1_ABILITY_toggle 0x59
#define ATMO_Green1_ABILITY_interrupt 0x5a
#define ATMO_Red2_ABILITY_trigger 0x5b
#define ATMO_Red2_ABILITY_setup 0x5c
#define ATMO_Red2_ABILITY_setState 0x5d
#define ATMO_Red2_ABILITY_setPinHigh 0x5e
#define ATMO_Red2_ABILITY_setPinLow 0x5f
#define ATMO_Red2_ABILITY_read 0x60
#define ATMO_Red2_ABILITY_toggle 0x61
#define ATMO_Red2_ABILITY_interrupt 0x62
#define ATMO_Green2_ABILITY_trigger 0x63
#define ATMO_Green2_ABILITY_setup 0x64
#define ATMO_Green2_ABILITY_setState 0x65
#define ATMO_Green2_ABILITY_setPinHigh 0x66
#define ATMO_Green2_ABILITY_setPinLow 0x67
#define ATMO_Green2_ABILITY_read 0x68
#define ATMO_Green2_ABILITY_toggle 0x69
#define ATMO_Green2_ABILITY_interrupt 0x6a
#ifdef __cplusplus
}
#endif
#endif
