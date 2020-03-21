
#ifndef ATMO_INTERRUPTS_HANDLER_H
#define ATMO_INTERRUPTS_HANDLER_H

#ifdef __cplusplus
	extern "C"{
#endif

#include "../atmo/core.h"
#define ATMO_INTERRUPT(ELEMENT, NAME) ATMO_ ## ELEMENT ## _INTERRUPT_  ## NAME

void ATMO_Interval_INTERRUPT_trigger(void *data);
void ATMO_Interval_INTERRUPT_setup(void *data);
void ATMO_Interval_INTERRUPT_interval(void *data);

void ATMO_BME680_INTERRUPT_trigger(void *data);
void ATMO_BME680_INTERRUPT_setup(void *data);
void ATMO_BME680_INTERRUPT_readTemperature(void *data);
void ATMO_BME680_INTERRUPT_readHumidity(void *data);
void ATMO_BME680_INTERRUPT_readPressure(void *data);
void ATMO_BME680_INTERRUPT_readGasResistance(void *data);

void ATMO_EmbeddedBHI160_INTERRUPT_trigger(void *data);
void ATMO_EmbeddedBHI160_INTERRUPT_setup(void *data);
void ATMO_EmbeddedBHI160_INTERRUPT_xAcceleration(void *data);
void ATMO_EmbeddedBHI160_INTERRUPT_yAcceleration(void *data);
void ATMO_EmbeddedBHI160_INTERRUPT_zAcceleration(void *data);
void ATMO_EmbeddedBHI160_INTERRUPT_acceleration(void *data);
void ATMO_EmbeddedBHI160_INTERRUPT_angularRate(void *data);
void ATMO_EmbeddedBHI160_INTERRUPT_xAngularRate(void *data);
void ATMO_EmbeddedBHI160_INTERRUPT_yAngularRate(void *data);
void ATMO_EmbeddedBHI160_INTERRUPT_zAngularRate(void *data);
void ATMO_EmbeddedBHI160_INTERRUPT_orientation(void *data);
void ATMO_EmbeddedBHI160_INTERRUPT_xOrientation(void *data);
void ATMO_EmbeddedBHI160_INTERRUPT_yOrientation(void *data);
void ATMO_EmbeddedBHI160_INTERRUPT_zOrientation(void *data);

void ATMO_NOA1305AmbientLight_INTERRUPT_trigger(void *data);
void ATMO_NOA1305AmbientLight_INTERRUPT_setup(void *data);
void ATMO_NOA1305AmbientLight_INTERRUPT_readAmbientLight(void *data);

void ATMO_BLETemp_INTERRUPT_trigger(void *data);
void ATMO_BLETemp_INTERRUPT_setup(void *data);
void ATMO_BLETemp_INTERRUPT_setValue(void *data);
void ATMO_BLETemp_INTERRUPT_written(void *data);
void ATMO_BLETemp_INTERRUPT_subscibed(void *data);
void ATMO_BLETemp_INTERRUPT_unsubscribed(void *data);

void ATMO_BLEPres_INTERRUPT_trigger(void *data);
void ATMO_BLEPres_INTERRUPT_setup(void *data);
void ATMO_BLEPres_INTERRUPT_setValue(void *data);
void ATMO_BLEPres_INTERRUPT_written(void *data);
void ATMO_BLEPres_INTERRUPT_subscibed(void *data);
void ATMO_BLEPres_INTERRUPT_unsubscribed(void *data);

void ATMO_BLEHumid_INTERRUPT_trigger(void *data);
void ATMO_BLEHumid_INTERRUPT_setup(void *data);
void ATMO_BLEHumid_INTERRUPT_setValue(void *data);
void ATMO_BLEHumid_INTERRUPT_written(void *data);
void ATMO_BLEHumid_INTERRUPT_subscibed(void *data);
void ATMO_BLEHumid_INTERRUPT_unsubscribed(void *data);

void ATMO_BLEAccX_INTERRUPT_trigger(void *data);
void ATMO_BLEAccX_INTERRUPT_setup(void *data);
void ATMO_BLEAccX_INTERRUPT_setValue(void *data);
void ATMO_BLEAccX_INTERRUPT_written(void *data);
void ATMO_BLEAccX_INTERRUPT_subscibed(void *data);
void ATMO_BLEAccX_INTERRUPT_unsubscribed(void *data);

void ATMO_BLEAccY_INTERRUPT_trigger(void *data);
void ATMO_BLEAccY_INTERRUPT_setup(void *data);
void ATMO_BLEAccY_INTERRUPT_setValue(void *data);
void ATMO_BLEAccY_INTERRUPT_written(void *data);
void ATMO_BLEAccY_INTERRUPT_subscibed(void *data);
void ATMO_BLEAccY_INTERRUPT_unsubscribed(void *data);

void ATMO_BLEAccZ_INTERRUPT_trigger(void *data);
void ATMO_BLEAccZ_INTERRUPT_setup(void *data);
void ATMO_BLEAccZ_INTERRUPT_setValue(void *data);
void ATMO_BLEAccZ_INTERRUPT_written(void *data);
void ATMO_BLEAccZ_INTERRUPT_subscibed(void *data);
void ATMO_BLEAccZ_INTERRUPT_unsubscribed(void *data);

void ATMO_BLELight_INTERRUPT_trigger(void *data);
void ATMO_BLELight_INTERRUPT_setup(void *data);
void ATMO_BLELight_INTERRUPT_setValue(void *data);
void ATMO_BLELight_INTERRUPT_written(void *data);
void ATMO_BLELight_INTERRUPT_subscibed(void *data);
void ATMO_BLELight_INTERRUPT_unsubscribed(void *data);

void ATMO_LessLightLevel_INTERRUPT_trigger(void *data);
void ATMO_LessLightLevel_INTERRUPT_setup(void *data);
void ATMO_LessLightLevel_INTERRUPT_evaluate(void *data);

void ATMO_GreatLightLevel_INTERRUPT_trigger(void *data);
void ATMO_GreatLightLevel_INTERRUPT_setup(void *data);
void ATMO_GreatLightLevel_INTERRUPT_evaluate(void *data);

void ATMO_Red1_INTERRUPT_trigger(void *data);
void ATMO_Red1_INTERRUPT_setup(void *data);
void ATMO_Red1_INTERRUPT_setState(void *data);
void ATMO_Red1_INTERRUPT_setPinHigh(void *data);
void ATMO_Red1_INTERRUPT_setPinLow(void *data);
void ATMO_Red1_INTERRUPT_read(void *data);
void ATMO_Red1_INTERRUPT_toggle(void *data);
void ATMO_Red1_INTERRUPT_interrupt(void *data);

void ATMO_Green1_INTERRUPT_trigger(void *data);
void ATMO_Green1_INTERRUPT_setup(void *data);
void ATMO_Green1_INTERRUPT_setState(void *data);
void ATMO_Green1_INTERRUPT_setPinHigh(void *data);
void ATMO_Green1_INTERRUPT_setPinLow(void *data);
void ATMO_Green1_INTERRUPT_read(void *data);
void ATMO_Green1_INTERRUPT_toggle(void *data);
void ATMO_Green1_INTERRUPT_interrupt(void *data);

void ATMO_Red2_INTERRUPT_trigger(void *data);
void ATMO_Red2_INTERRUPT_setup(void *data);
void ATMO_Red2_INTERRUPT_setState(void *data);
void ATMO_Red2_INTERRUPT_setPinHigh(void *data);
void ATMO_Red2_INTERRUPT_setPinLow(void *data);
void ATMO_Red2_INTERRUPT_read(void *data);
void ATMO_Red2_INTERRUPT_toggle(void *data);
void ATMO_Red2_INTERRUPT_interrupt(void *data);

void ATMO_Green2_INTERRUPT_trigger(void *data);
void ATMO_Green2_INTERRUPT_setup(void *data);
void ATMO_Green2_INTERRUPT_setState(void *data);
void ATMO_Green2_INTERRUPT_setPinHigh(void *data);
void ATMO_Green2_INTERRUPT_setPinLow(void *data);
void ATMO_Green2_INTERRUPT_read(void *data);
void ATMO_Green2_INTERRUPT_toggle(void *data);
void ATMO_Green2_INTERRUPT_interrupt(void *data);


#ifdef __cplusplus
}
#endif

#endif
