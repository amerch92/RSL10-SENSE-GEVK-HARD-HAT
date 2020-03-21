
#ifndef ATMO_CALLBACKS_H
#define ATMO_CALLBACKS_H

#include "atmosphere_platform.h"
#include "atmosphere_properties.h"
#include "atmosphere_variables.h"
#include "atmosphere_triggerHandler.h"
#include "atmosphere_interruptsHandler.h"
#include "atmosphere_embedded_libraries.h"
#include "atmosphere_abilityHandler.h"

#include "atmosphere_driverinstance.h"

#include "atmosphere_cloudcommands.h"

#include "atmosphere_elementnames.h"

#define ATMO_CALLBACK(ELEMENT, NAME) ELEMENT ## _ ## NAME

void ATMO_Setup();

ATMO_Status_t Interval_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Interval_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Interval_interval(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BME680_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BME680_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BME680_readTemperature(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BME680_readHumidity(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BME680_readPressure(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BME680_readGasResistance(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedBHI160_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedBHI160_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedBHI160_xAcceleration(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedBHI160_yAcceleration(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedBHI160_zAcceleration(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedBHI160_acceleration(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedBHI160_angularRate(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedBHI160_xAngularRate(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedBHI160_yAngularRate(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedBHI160_zAngularRate(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedBHI160_orientation(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedBHI160_xOrientation(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedBHI160_yOrientation(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedBHI160_zOrientation(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t NOA1305AmbientLight_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t NOA1305AmbientLight_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t NOA1305AmbientLight_readAmbientLight(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLETemp_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLETemp_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLETemp_setValue(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLETemp_written(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLETemp_subscibed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLETemp_unsubscribed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLEPres_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLEPres_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLEPres_setValue(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLEPres_written(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLEPres_subscibed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLEPres_unsubscribed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLEHumid_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLEHumid_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLEHumid_setValue(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLEHumid_written(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLEHumid_subscibed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLEHumid_unsubscribed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLEAccX_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLEAccX_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLEAccX_setValue(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLEAccX_written(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLEAccX_subscibed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLEAccX_unsubscribed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLEAccY_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLEAccY_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLEAccY_setValue(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLEAccY_written(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLEAccY_subscibed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLEAccY_unsubscribed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLEAccZ_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLEAccZ_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLEAccZ_setValue(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLEAccZ_written(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLEAccZ_subscibed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLEAccZ_unsubscribed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLELight_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLELight_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLELight_setValue(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLELight_written(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLELight_subscibed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t BLELight_unsubscribed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t LessLightLevel_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t LessLightLevel_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t LessLightLevel_evaluate(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t GreatLightLevel_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t GreatLightLevel_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t GreatLightLevel_evaluate(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Red1_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Red1_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Red1_setState(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Red1_setPinHigh(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Red1_setPinLow(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Red1_read(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Red1_toggle(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Red1_interrupt(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Green1_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Green1_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Green1_setState(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Green1_setPinHigh(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Green1_setPinLow(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Green1_read(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Green1_toggle(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Green1_interrupt(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Red2_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Red2_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Red2_setState(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Red2_setPinHigh(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Red2_setPinLow(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Red2_read(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Red2_toggle(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Red2_interrupt(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Green2_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Green2_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Green2_setState(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Green2_setPinHigh(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Green2_setPinLow(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Green2_read(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Green2_toggle(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Green2_interrupt(ATMO_Value_t *in, ATMO_Value_t *out);
#endif
