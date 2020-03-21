#include "atmosphere_abilityHandler.h"
#include "atmosphere_triggerHandler.h"

#ifdef __cplusplus
	extern "C"{
#endif

void ATMO_AbilityHandler(unsigned int abilityHandleId, ATMO_Value_t *value) {
	switch(abilityHandleId) {
		case ATMO_ABILITY(Interval, trigger):
		{
			ATMO_Value_t Interval_Value;
			ATMO_InitValue(&Interval_Value);
			Interval_trigger(value, &Interval_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Interval, triggered), &Interval_Value);
			ATMO_FreeValue(&Interval_Value);
			break;
		}
		case ATMO_ABILITY(Interval, setup):
		{
			ATMO_Value_t Interval_Value;
			ATMO_InitValue(&Interval_Value);
			Interval_setup(value, &Interval_Value);
			ATMO_FreeValue(&Interval_Value);
			break;
		}
		case ATMO_ABILITY(Interval, interval):
		{
			ATMO_Value_t Interval_Value;
			ATMO_InitValue(&Interval_Value);
			Interval_interval(value, &Interval_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Interval, interval), &Interval_Value);
			ATMO_FreeValue(&Interval_Value);
			break;
		}
		case ATMO_ABILITY(BME680, trigger):
		{
			ATMO_Value_t BME680_Value;
			ATMO_InitValue(&BME680_Value);
			BME680_trigger(value, &BME680_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BME680, triggered), &BME680_Value);
			ATMO_FreeValue(&BME680_Value);
			break;
		}
		case ATMO_ABILITY(BME680, setup):
		{
			ATMO_Value_t BME680_Value;
			ATMO_InitValue(&BME680_Value);
			BME680_setup(value, &BME680_Value);
			ATMO_FreeValue(&BME680_Value);
			break;
		}
		case ATMO_ABILITY(BME680, readTemperature):
		{
			ATMO_Value_t BME680_Value;
			ATMO_InitValue(&BME680_Value);
			BME680_readTemperature(value, &BME680_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BME680, temperatureRead), &BME680_Value);
			ATMO_FreeValue(&BME680_Value);
			break;
		}
		case ATMO_ABILITY(BME680, readHumidity):
		{
			ATMO_Value_t BME680_Value;
			ATMO_InitValue(&BME680_Value);
			BME680_readHumidity(value, &BME680_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BME680, humidityRead), &BME680_Value);
			ATMO_FreeValue(&BME680_Value);
			break;
		}
		case ATMO_ABILITY(BME680, readPressure):
		{
			ATMO_Value_t BME680_Value;
			ATMO_InitValue(&BME680_Value);
			BME680_readPressure(value, &BME680_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BME680, pressureRead), &BME680_Value);
			ATMO_FreeValue(&BME680_Value);
			break;
		}
		case ATMO_ABILITY(BME680, readGasResistance):
		{
			ATMO_Value_t BME680_Value;
			ATMO_InitValue(&BME680_Value);
			BME680_readGasResistance(value, &BME680_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BME680, gasResistanceRead), &BME680_Value);
			ATMO_FreeValue(&BME680_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedBHI160, trigger):
		{
			ATMO_Value_t EmbeddedBHI160_Value;
			ATMO_InitValue(&EmbeddedBHI160_Value);
			EmbeddedBHI160_trigger(value, &EmbeddedBHI160_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedBHI160, triggered), &EmbeddedBHI160_Value);
			ATMO_FreeValue(&EmbeddedBHI160_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedBHI160, setup):
		{
			ATMO_Value_t EmbeddedBHI160_Value;
			ATMO_InitValue(&EmbeddedBHI160_Value);
			EmbeddedBHI160_setup(value, &EmbeddedBHI160_Value);
			ATMO_FreeValue(&EmbeddedBHI160_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedBHI160, xAcceleration):
		{
			ATMO_Value_t EmbeddedBHI160_Value;
			ATMO_InitValue(&EmbeddedBHI160_Value);
			EmbeddedBHI160_xAcceleration(value, &EmbeddedBHI160_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedBHI160, xAccelerationRead), &EmbeddedBHI160_Value);
			ATMO_FreeValue(&EmbeddedBHI160_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedBHI160, yAcceleration):
		{
			ATMO_Value_t EmbeddedBHI160_Value;
			ATMO_InitValue(&EmbeddedBHI160_Value);
			EmbeddedBHI160_yAcceleration(value, &EmbeddedBHI160_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedBHI160, yAccelerationRead), &EmbeddedBHI160_Value);
			ATMO_FreeValue(&EmbeddedBHI160_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedBHI160, zAcceleration):
		{
			ATMO_Value_t EmbeddedBHI160_Value;
			ATMO_InitValue(&EmbeddedBHI160_Value);
			EmbeddedBHI160_zAcceleration(value, &EmbeddedBHI160_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedBHI160, zAccelerationRead), &EmbeddedBHI160_Value);
			ATMO_FreeValue(&EmbeddedBHI160_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedBHI160, acceleration):
		{
			ATMO_Value_t EmbeddedBHI160_Value;
			ATMO_InitValue(&EmbeddedBHI160_Value);
			EmbeddedBHI160_acceleration(value, &EmbeddedBHI160_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedBHI160, accelerationRead), &EmbeddedBHI160_Value);
			ATMO_FreeValue(&EmbeddedBHI160_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedBHI160, angularRate):
		{
			ATMO_Value_t EmbeddedBHI160_Value;
			ATMO_InitValue(&EmbeddedBHI160_Value);
			EmbeddedBHI160_angularRate(value, &EmbeddedBHI160_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedBHI160, angularRateRead), &EmbeddedBHI160_Value);
			ATMO_FreeValue(&EmbeddedBHI160_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedBHI160, xAngularRate):
		{
			ATMO_Value_t EmbeddedBHI160_Value;
			ATMO_InitValue(&EmbeddedBHI160_Value);
			EmbeddedBHI160_xAngularRate(value, &EmbeddedBHI160_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedBHI160, xAngularRateRead), &EmbeddedBHI160_Value);
			ATMO_FreeValue(&EmbeddedBHI160_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedBHI160, yAngularRate):
		{
			ATMO_Value_t EmbeddedBHI160_Value;
			ATMO_InitValue(&EmbeddedBHI160_Value);
			EmbeddedBHI160_yAngularRate(value, &EmbeddedBHI160_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedBHI160, yAngularRateRead), &EmbeddedBHI160_Value);
			ATMO_FreeValue(&EmbeddedBHI160_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedBHI160, zAngularRate):
		{
			ATMO_Value_t EmbeddedBHI160_Value;
			ATMO_InitValue(&EmbeddedBHI160_Value);
			EmbeddedBHI160_zAngularRate(value, &EmbeddedBHI160_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedBHI160, zAngularRateRead), &EmbeddedBHI160_Value);
			ATMO_FreeValue(&EmbeddedBHI160_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedBHI160, orientation):
		{
			ATMO_Value_t EmbeddedBHI160_Value;
			ATMO_InitValue(&EmbeddedBHI160_Value);
			EmbeddedBHI160_orientation(value, &EmbeddedBHI160_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedBHI160, orientationRead), &EmbeddedBHI160_Value);
			ATMO_FreeValue(&EmbeddedBHI160_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedBHI160, xOrientation):
		{
			ATMO_Value_t EmbeddedBHI160_Value;
			ATMO_InitValue(&EmbeddedBHI160_Value);
			EmbeddedBHI160_xOrientation(value, &EmbeddedBHI160_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedBHI160, xOrientationRead), &EmbeddedBHI160_Value);
			ATMO_FreeValue(&EmbeddedBHI160_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedBHI160, yOrientation):
		{
			ATMO_Value_t EmbeddedBHI160_Value;
			ATMO_InitValue(&EmbeddedBHI160_Value);
			EmbeddedBHI160_yOrientation(value, &EmbeddedBHI160_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedBHI160, yOrientationRead), &EmbeddedBHI160_Value);
			ATMO_FreeValue(&EmbeddedBHI160_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedBHI160, zOrientation):
		{
			ATMO_Value_t EmbeddedBHI160_Value;
			ATMO_InitValue(&EmbeddedBHI160_Value);
			EmbeddedBHI160_zOrientation(value, &EmbeddedBHI160_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedBHI160, zOrientationRead), &EmbeddedBHI160_Value);
			ATMO_FreeValue(&EmbeddedBHI160_Value);
			break;
		}
		case ATMO_ABILITY(NOA1305AmbientLight, trigger):
		{
			ATMO_Value_t NOA1305AmbientLight_Value;
			ATMO_InitValue(&NOA1305AmbientLight_Value);
			NOA1305AmbientLight_trigger(value, &NOA1305AmbientLight_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(NOA1305AmbientLight, triggered), &NOA1305AmbientLight_Value);
			ATMO_FreeValue(&NOA1305AmbientLight_Value);
			break;
		}
		case ATMO_ABILITY(NOA1305AmbientLight, setup):
		{
			ATMO_Value_t NOA1305AmbientLight_Value;
			ATMO_InitValue(&NOA1305AmbientLight_Value);
			NOA1305AmbientLight_setup(value, &NOA1305AmbientLight_Value);
			ATMO_FreeValue(&NOA1305AmbientLight_Value);
			break;
		}
		case ATMO_ABILITY(NOA1305AmbientLight, readAmbientLight):
		{
			ATMO_Value_t NOA1305AmbientLight_Value;
			ATMO_InitValue(&NOA1305AmbientLight_Value);
			NOA1305AmbientLight_readAmbientLight(value, &NOA1305AmbientLight_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(NOA1305AmbientLight, ambientLightRead), &NOA1305AmbientLight_Value);
			ATMO_FreeValue(&NOA1305AmbientLight_Value);
			break;
		}
		case ATMO_ABILITY(BLETemp, trigger):
		{
			ATMO_Value_t BLETemp_Value;
			ATMO_InitValue(&BLETemp_Value);
			BLETemp_trigger(value, &BLETemp_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BLETemp, triggered), &BLETemp_Value);
			ATMO_FreeValue(&BLETemp_Value);
			break;
		}
		case ATMO_ABILITY(BLETemp, setup):
		{
			ATMO_Value_t BLETemp_Value;
			ATMO_InitValue(&BLETemp_Value);
			BLETemp_setup(value, &BLETemp_Value);
			ATMO_FreeValue(&BLETemp_Value);
			break;
		}
		case ATMO_ABILITY(BLETemp, setValue):
		{
			ATMO_Value_t BLETemp_Value;
			ATMO_InitValue(&BLETemp_Value);
			BLETemp_setValue(value, &BLETemp_Value);
			ATMO_FreeValue(&BLETemp_Value);
			break;
		}
		case ATMO_ABILITY(BLETemp, written):
		{
			ATMO_Value_t BLETemp_Value;
			ATMO_InitValue(&BLETemp_Value);
			BLETemp_written(value, &BLETemp_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BLETemp, written), &BLETemp_Value);
			ATMO_FreeValue(&BLETemp_Value);
			break;
		}
		case ATMO_ABILITY(BLETemp, subscibed):
		{
			ATMO_Value_t BLETemp_Value;
			ATMO_InitValue(&BLETemp_Value);
			BLETemp_subscibed(value, &BLETemp_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BLETemp, subscibed), &BLETemp_Value);
			ATMO_FreeValue(&BLETemp_Value);
			break;
		}
		case ATMO_ABILITY(BLETemp, unsubscribed):
		{
			ATMO_Value_t BLETemp_Value;
			ATMO_InitValue(&BLETemp_Value);
			BLETemp_unsubscribed(value, &BLETemp_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BLETemp, unsubscribed), &BLETemp_Value);
			ATMO_FreeValue(&BLETemp_Value);
			break;
		}
		case ATMO_ABILITY(BLEPres, trigger):
		{
			ATMO_Value_t BLEPres_Value;
			ATMO_InitValue(&BLEPres_Value);
			BLEPres_trigger(value, &BLEPres_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BLEPres, triggered), &BLEPres_Value);
			ATMO_FreeValue(&BLEPres_Value);
			break;
		}
		case ATMO_ABILITY(BLEPres, setup):
		{
			ATMO_Value_t BLEPres_Value;
			ATMO_InitValue(&BLEPres_Value);
			BLEPres_setup(value, &BLEPres_Value);
			ATMO_FreeValue(&BLEPres_Value);
			break;
		}
		case ATMO_ABILITY(BLEPres, setValue):
		{
			ATMO_Value_t BLEPres_Value;
			ATMO_InitValue(&BLEPres_Value);
			BLEPres_setValue(value, &BLEPres_Value);
			ATMO_FreeValue(&BLEPres_Value);
			break;
		}
		case ATMO_ABILITY(BLEPres, written):
		{
			ATMO_Value_t BLEPres_Value;
			ATMO_InitValue(&BLEPres_Value);
			BLEPres_written(value, &BLEPres_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BLEPres, written), &BLEPres_Value);
			ATMO_FreeValue(&BLEPres_Value);
			break;
		}
		case ATMO_ABILITY(BLEPres, subscibed):
		{
			ATMO_Value_t BLEPres_Value;
			ATMO_InitValue(&BLEPres_Value);
			BLEPres_subscibed(value, &BLEPres_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BLEPres, subscibed), &BLEPres_Value);
			ATMO_FreeValue(&BLEPres_Value);
			break;
		}
		case ATMO_ABILITY(BLEPres, unsubscribed):
		{
			ATMO_Value_t BLEPres_Value;
			ATMO_InitValue(&BLEPres_Value);
			BLEPres_unsubscribed(value, &BLEPres_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BLEPres, unsubscribed), &BLEPres_Value);
			ATMO_FreeValue(&BLEPres_Value);
			break;
		}
		case ATMO_ABILITY(BLEHumid, trigger):
		{
			ATMO_Value_t BLEHumid_Value;
			ATMO_InitValue(&BLEHumid_Value);
			BLEHumid_trigger(value, &BLEHumid_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BLEHumid, triggered), &BLEHumid_Value);
			ATMO_FreeValue(&BLEHumid_Value);
			break;
		}
		case ATMO_ABILITY(BLEHumid, setup):
		{
			ATMO_Value_t BLEHumid_Value;
			ATMO_InitValue(&BLEHumid_Value);
			BLEHumid_setup(value, &BLEHumid_Value);
			ATMO_FreeValue(&BLEHumid_Value);
			break;
		}
		case ATMO_ABILITY(BLEHumid, setValue):
		{
			ATMO_Value_t BLEHumid_Value;
			ATMO_InitValue(&BLEHumid_Value);
			BLEHumid_setValue(value, &BLEHumid_Value);
			ATMO_FreeValue(&BLEHumid_Value);
			break;
		}
		case ATMO_ABILITY(BLEHumid, written):
		{
			ATMO_Value_t BLEHumid_Value;
			ATMO_InitValue(&BLEHumid_Value);
			BLEHumid_written(value, &BLEHumid_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BLEHumid, written), &BLEHumid_Value);
			ATMO_FreeValue(&BLEHumid_Value);
			break;
		}
		case ATMO_ABILITY(BLEHumid, subscibed):
		{
			ATMO_Value_t BLEHumid_Value;
			ATMO_InitValue(&BLEHumid_Value);
			BLEHumid_subscibed(value, &BLEHumid_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BLEHumid, subscibed), &BLEHumid_Value);
			ATMO_FreeValue(&BLEHumid_Value);
			break;
		}
		case ATMO_ABILITY(BLEHumid, unsubscribed):
		{
			ATMO_Value_t BLEHumid_Value;
			ATMO_InitValue(&BLEHumid_Value);
			BLEHumid_unsubscribed(value, &BLEHumid_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BLEHumid, unsubscribed), &BLEHumid_Value);
			ATMO_FreeValue(&BLEHumid_Value);
			break;
		}
		case ATMO_ABILITY(BLEAccX, trigger):
		{
			ATMO_Value_t BLEAccX_Value;
			ATMO_InitValue(&BLEAccX_Value);
			BLEAccX_trigger(value, &BLEAccX_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BLEAccX, triggered), &BLEAccX_Value);
			ATMO_FreeValue(&BLEAccX_Value);
			break;
		}
		case ATMO_ABILITY(BLEAccX, setup):
		{
			ATMO_Value_t BLEAccX_Value;
			ATMO_InitValue(&BLEAccX_Value);
			BLEAccX_setup(value, &BLEAccX_Value);
			ATMO_FreeValue(&BLEAccX_Value);
			break;
		}
		case ATMO_ABILITY(BLEAccX, setValue):
		{
			ATMO_Value_t BLEAccX_Value;
			ATMO_InitValue(&BLEAccX_Value);
			BLEAccX_setValue(value, &BLEAccX_Value);
			ATMO_FreeValue(&BLEAccX_Value);
			break;
		}
		case ATMO_ABILITY(BLEAccX, written):
		{
			ATMO_Value_t BLEAccX_Value;
			ATMO_InitValue(&BLEAccX_Value);
			BLEAccX_written(value, &BLEAccX_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BLEAccX, written), &BLEAccX_Value);
			ATMO_FreeValue(&BLEAccX_Value);
			break;
		}
		case ATMO_ABILITY(BLEAccX, subscibed):
		{
			ATMO_Value_t BLEAccX_Value;
			ATMO_InitValue(&BLEAccX_Value);
			BLEAccX_subscibed(value, &BLEAccX_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BLEAccX, subscibed), &BLEAccX_Value);
			ATMO_FreeValue(&BLEAccX_Value);
			break;
		}
		case ATMO_ABILITY(BLEAccX, unsubscribed):
		{
			ATMO_Value_t BLEAccX_Value;
			ATMO_InitValue(&BLEAccX_Value);
			BLEAccX_unsubscribed(value, &BLEAccX_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BLEAccX, unsubscribed), &BLEAccX_Value);
			ATMO_FreeValue(&BLEAccX_Value);
			break;
		}
		case ATMO_ABILITY(BLEAccY, trigger):
		{
			ATMO_Value_t BLEAccY_Value;
			ATMO_InitValue(&BLEAccY_Value);
			BLEAccY_trigger(value, &BLEAccY_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BLEAccY, triggered), &BLEAccY_Value);
			ATMO_FreeValue(&BLEAccY_Value);
			break;
		}
		case ATMO_ABILITY(BLEAccY, setup):
		{
			ATMO_Value_t BLEAccY_Value;
			ATMO_InitValue(&BLEAccY_Value);
			BLEAccY_setup(value, &BLEAccY_Value);
			ATMO_FreeValue(&BLEAccY_Value);
			break;
		}
		case ATMO_ABILITY(BLEAccY, setValue):
		{
			ATMO_Value_t BLEAccY_Value;
			ATMO_InitValue(&BLEAccY_Value);
			BLEAccY_setValue(value, &BLEAccY_Value);
			ATMO_FreeValue(&BLEAccY_Value);
			break;
		}
		case ATMO_ABILITY(BLEAccY, written):
		{
			ATMO_Value_t BLEAccY_Value;
			ATMO_InitValue(&BLEAccY_Value);
			BLEAccY_written(value, &BLEAccY_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BLEAccY, written), &BLEAccY_Value);
			ATMO_FreeValue(&BLEAccY_Value);
			break;
		}
		case ATMO_ABILITY(BLEAccY, subscibed):
		{
			ATMO_Value_t BLEAccY_Value;
			ATMO_InitValue(&BLEAccY_Value);
			BLEAccY_subscibed(value, &BLEAccY_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BLEAccY, subscibed), &BLEAccY_Value);
			ATMO_FreeValue(&BLEAccY_Value);
			break;
		}
		case ATMO_ABILITY(BLEAccY, unsubscribed):
		{
			ATMO_Value_t BLEAccY_Value;
			ATMO_InitValue(&BLEAccY_Value);
			BLEAccY_unsubscribed(value, &BLEAccY_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BLEAccY, unsubscribed), &BLEAccY_Value);
			ATMO_FreeValue(&BLEAccY_Value);
			break;
		}
		case ATMO_ABILITY(BLEAccZ, trigger):
		{
			ATMO_Value_t BLEAccZ_Value;
			ATMO_InitValue(&BLEAccZ_Value);
			BLEAccZ_trigger(value, &BLEAccZ_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BLEAccZ, triggered), &BLEAccZ_Value);
			ATMO_FreeValue(&BLEAccZ_Value);
			break;
		}
		case ATMO_ABILITY(BLEAccZ, setup):
		{
			ATMO_Value_t BLEAccZ_Value;
			ATMO_InitValue(&BLEAccZ_Value);
			BLEAccZ_setup(value, &BLEAccZ_Value);
			ATMO_FreeValue(&BLEAccZ_Value);
			break;
		}
		case ATMO_ABILITY(BLEAccZ, setValue):
		{
			ATMO_Value_t BLEAccZ_Value;
			ATMO_InitValue(&BLEAccZ_Value);
			BLEAccZ_setValue(value, &BLEAccZ_Value);
			ATMO_FreeValue(&BLEAccZ_Value);
			break;
		}
		case ATMO_ABILITY(BLEAccZ, written):
		{
			ATMO_Value_t BLEAccZ_Value;
			ATMO_InitValue(&BLEAccZ_Value);
			BLEAccZ_written(value, &BLEAccZ_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BLEAccZ, written), &BLEAccZ_Value);
			ATMO_FreeValue(&BLEAccZ_Value);
			break;
		}
		case ATMO_ABILITY(BLEAccZ, subscibed):
		{
			ATMO_Value_t BLEAccZ_Value;
			ATMO_InitValue(&BLEAccZ_Value);
			BLEAccZ_subscibed(value, &BLEAccZ_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BLEAccZ, subscibed), &BLEAccZ_Value);
			ATMO_FreeValue(&BLEAccZ_Value);
			break;
		}
		case ATMO_ABILITY(BLEAccZ, unsubscribed):
		{
			ATMO_Value_t BLEAccZ_Value;
			ATMO_InitValue(&BLEAccZ_Value);
			BLEAccZ_unsubscribed(value, &BLEAccZ_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BLEAccZ, unsubscribed), &BLEAccZ_Value);
			ATMO_FreeValue(&BLEAccZ_Value);
			break;
		}
		case ATMO_ABILITY(BLELight, trigger):
		{
			ATMO_Value_t BLELight_Value;
			ATMO_InitValue(&BLELight_Value);
			BLELight_trigger(value, &BLELight_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BLELight, triggered), &BLELight_Value);
			ATMO_FreeValue(&BLELight_Value);
			break;
		}
		case ATMO_ABILITY(BLELight, setup):
		{
			ATMO_Value_t BLELight_Value;
			ATMO_InitValue(&BLELight_Value);
			BLELight_setup(value, &BLELight_Value);
			ATMO_FreeValue(&BLELight_Value);
			break;
		}
		case ATMO_ABILITY(BLELight, setValue):
		{
			ATMO_Value_t BLELight_Value;
			ATMO_InitValue(&BLELight_Value);
			BLELight_setValue(value, &BLELight_Value);
			ATMO_FreeValue(&BLELight_Value);
			break;
		}
		case ATMO_ABILITY(BLELight, written):
		{
			ATMO_Value_t BLELight_Value;
			ATMO_InitValue(&BLELight_Value);
			BLELight_written(value, &BLELight_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BLELight, written), &BLELight_Value);
			ATMO_FreeValue(&BLELight_Value);
			break;
		}
		case ATMO_ABILITY(BLELight, subscibed):
		{
			ATMO_Value_t BLELight_Value;
			ATMO_InitValue(&BLELight_Value);
			BLELight_subscibed(value, &BLELight_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BLELight, subscibed), &BLELight_Value);
			ATMO_FreeValue(&BLELight_Value);
			break;
		}
		case ATMO_ABILITY(BLELight, unsubscribed):
		{
			ATMO_Value_t BLELight_Value;
			ATMO_InitValue(&BLELight_Value);
			BLELight_unsubscribed(value, &BLELight_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(BLELight, unsubscribed), &BLELight_Value);
			ATMO_FreeValue(&BLELight_Value);
			break;
		}
		case ATMO_ABILITY(LessLightLevel, trigger):
		{
			ATMO_Value_t LessLightLevel_Value;
			ATMO_InitValue(&LessLightLevel_Value);
			LessLightLevel_trigger(value, &LessLightLevel_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(LessLightLevel, triggered), &LessLightLevel_Value);
			ATMO_FreeValue(&LessLightLevel_Value);
			break;
		}
		case ATMO_ABILITY(LessLightLevel, setup):
		{
			ATMO_Value_t LessLightLevel_Value;
			ATMO_InitValue(&LessLightLevel_Value);
			LessLightLevel_setup(value, &LessLightLevel_Value);
			ATMO_FreeValue(&LessLightLevel_Value);
			break;
		}
		case ATMO_ABILITY(LessLightLevel, evaluate):
		{
			ATMO_Value_t LessLightLevel_Value;
			ATMO_InitValue(&LessLightLevel_Value);
			LessLightLevel_evaluate(value, &LessLightLevel_Value);
			ATMO_FreeValue(&LessLightLevel_Value);
			break;
		}
		case ATMO_ABILITY(GreatLightLevel, trigger):
		{
			ATMO_Value_t GreatLightLevel_Value;
			ATMO_InitValue(&GreatLightLevel_Value);
			GreatLightLevel_trigger(value, &GreatLightLevel_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(GreatLightLevel, triggered), &GreatLightLevel_Value);
			ATMO_FreeValue(&GreatLightLevel_Value);
			break;
		}
		case ATMO_ABILITY(GreatLightLevel, setup):
		{
			ATMO_Value_t GreatLightLevel_Value;
			ATMO_InitValue(&GreatLightLevel_Value);
			GreatLightLevel_setup(value, &GreatLightLevel_Value);
			ATMO_FreeValue(&GreatLightLevel_Value);
			break;
		}
		case ATMO_ABILITY(GreatLightLevel, evaluate):
		{
			ATMO_Value_t GreatLightLevel_Value;
			ATMO_InitValue(&GreatLightLevel_Value);
			GreatLightLevel_evaluate(value, &GreatLightLevel_Value);
			ATMO_FreeValue(&GreatLightLevel_Value);
			break;
		}
		case ATMO_ABILITY(Red1, trigger):
		{
			ATMO_Value_t Red1_Value;
			ATMO_InitValue(&Red1_Value);
			Red1_trigger(value, &Red1_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Red1, triggered), &Red1_Value);
			ATMO_FreeValue(&Red1_Value);
			break;
		}
		case ATMO_ABILITY(Red1, setup):
		{
			ATMO_Value_t Red1_Value;
			ATMO_InitValue(&Red1_Value);
			Red1_setup(value, &Red1_Value);
			ATMO_FreeValue(&Red1_Value);
			break;
		}
		case ATMO_ABILITY(Red1, setState):
		{
			ATMO_Value_t Red1_Value;
			ATMO_InitValue(&Red1_Value);
			Red1_setState(value, &Red1_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Red1, stateSet), &Red1_Value);
			ATMO_FreeValue(&Red1_Value);
			break;
		}
		case ATMO_ABILITY(Red1, setPinHigh):
		{
			ATMO_Value_t Red1_Value;
			ATMO_InitValue(&Red1_Value);
			Red1_setPinHigh(value, &Red1_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Red1, stateSet), &Red1_Value);
			ATMO_FreeValue(&Red1_Value);
			break;
		}
		case ATMO_ABILITY(Red1, setPinLow):
		{
			ATMO_Value_t Red1_Value;
			ATMO_InitValue(&Red1_Value);
			Red1_setPinLow(value, &Red1_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Red1, stateSet), &Red1_Value);
			ATMO_FreeValue(&Red1_Value);
			break;
		}
		case ATMO_ABILITY(Red1, read):
		{
			ATMO_Value_t Red1_Value;
			ATMO_InitValue(&Red1_Value);
			Red1_read(value, &Red1_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Red1, read), &Red1_Value);
			ATMO_FreeValue(&Red1_Value);
			break;
		}
		case ATMO_ABILITY(Red1, toggle):
		{
			ATMO_Value_t Red1_Value;
			ATMO_InitValue(&Red1_Value);
			Red1_toggle(value, &Red1_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Red1, toggled), &Red1_Value);
			ATMO_FreeValue(&Red1_Value);
			break;
		}
		case ATMO_ABILITY(Red1, interrupt):
		{
			ATMO_Value_t Red1_Value;
			ATMO_InitValue(&Red1_Value);
			Red1_interrupt(value, &Red1_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Red1, interrupt), &Red1_Value);
			ATMO_FreeValue(&Red1_Value);
			break;
		}
		case ATMO_ABILITY(Green1, trigger):
		{
			ATMO_Value_t Green1_Value;
			ATMO_InitValue(&Green1_Value);
			Green1_trigger(value, &Green1_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Green1, triggered), &Green1_Value);
			ATMO_FreeValue(&Green1_Value);
			break;
		}
		case ATMO_ABILITY(Green1, setup):
		{
			ATMO_Value_t Green1_Value;
			ATMO_InitValue(&Green1_Value);
			Green1_setup(value, &Green1_Value);
			ATMO_FreeValue(&Green1_Value);
			break;
		}
		case ATMO_ABILITY(Green1, setState):
		{
			ATMO_Value_t Green1_Value;
			ATMO_InitValue(&Green1_Value);
			Green1_setState(value, &Green1_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Green1, stateSet), &Green1_Value);
			ATMO_FreeValue(&Green1_Value);
			break;
		}
		case ATMO_ABILITY(Green1, setPinHigh):
		{
			ATMO_Value_t Green1_Value;
			ATMO_InitValue(&Green1_Value);
			Green1_setPinHigh(value, &Green1_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Green1, stateSet), &Green1_Value);
			ATMO_FreeValue(&Green1_Value);
			break;
		}
		case ATMO_ABILITY(Green1, setPinLow):
		{
			ATMO_Value_t Green1_Value;
			ATMO_InitValue(&Green1_Value);
			Green1_setPinLow(value, &Green1_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Green1, stateSet), &Green1_Value);
			ATMO_FreeValue(&Green1_Value);
			break;
		}
		case ATMO_ABILITY(Green1, read):
		{
			ATMO_Value_t Green1_Value;
			ATMO_InitValue(&Green1_Value);
			Green1_read(value, &Green1_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Green1, read), &Green1_Value);
			ATMO_FreeValue(&Green1_Value);
			break;
		}
		case ATMO_ABILITY(Green1, toggle):
		{
			ATMO_Value_t Green1_Value;
			ATMO_InitValue(&Green1_Value);
			Green1_toggle(value, &Green1_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Green1, toggled), &Green1_Value);
			ATMO_FreeValue(&Green1_Value);
			break;
		}
		case ATMO_ABILITY(Green1, interrupt):
		{
			ATMO_Value_t Green1_Value;
			ATMO_InitValue(&Green1_Value);
			Green1_interrupt(value, &Green1_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Green1, interrupt), &Green1_Value);
			ATMO_FreeValue(&Green1_Value);
			break;
		}
		case ATMO_ABILITY(Red2, trigger):
		{
			ATMO_Value_t Red2_Value;
			ATMO_InitValue(&Red2_Value);
			Red2_trigger(value, &Red2_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Red2, triggered), &Red2_Value);
			ATMO_FreeValue(&Red2_Value);
			break;
		}
		case ATMO_ABILITY(Red2, setup):
		{
			ATMO_Value_t Red2_Value;
			ATMO_InitValue(&Red2_Value);
			Red2_setup(value, &Red2_Value);
			ATMO_FreeValue(&Red2_Value);
			break;
		}
		case ATMO_ABILITY(Red2, setState):
		{
			ATMO_Value_t Red2_Value;
			ATMO_InitValue(&Red2_Value);
			Red2_setState(value, &Red2_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Red2, stateSet), &Red2_Value);
			ATMO_FreeValue(&Red2_Value);
			break;
		}
		case ATMO_ABILITY(Red2, setPinHigh):
		{
			ATMO_Value_t Red2_Value;
			ATMO_InitValue(&Red2_Value);
			Red2_setPinHigh(value, &Red2_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Red2, stateSet), &Red2_Value);
			ATMO_FreeValue(&Red2_Value);
			break;
		}
		case ATMO_ABILITY(Red2, setPinLow):
		{
			ATMO_Value_t Red2_Value;
			ATMO_InitValue(&Red2_Value);
			Red2_setPinLow(value, &Red2_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Red2, stateSet), &Red2_Value);
			ATMO_FreeValue(&Red2_Value);
			break;
		}
		case ATMO_ABILITY(Red2, read):
		{
			ATMO_Value_t Red2_Value;
			ATMO_InitValue(&Red2_Value);
			Red2_read(value, &Red2_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Red2, read), &Red2_Value);
			ATMO_FreeValue(&Red2_Value);
			break;
		}
		case ATMO_ABILITY(Red2, toggle):
		{
			ATMO_Value_t Red2_Value;
			ATMO_InitValue(&Red2_Value);
			Red2_toggle(value, &Red2_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Red2, toggled), &Red2_Value);
			ATMO_FreeValue(&Red2_Value);
			break;
		}
		case ATMO_ABILITY(Red2, interrupt):
		{
			ATMO_Value_t Red2_Value;
			ATMO_InitValue(&Red2_Value);
			Red2_interrupt(value, &Red2_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Red2, interrupt), &Red2_Value);
			ATMO_FreeValue(&Red2_Value);
			break;
		}
		case ATMO_ABILITY(Green2, trigger):
		{
			ATMO_Value_t Green2_Value;
			ATMO_InitValue(&Green2_Value);
			Green2_trigger(value, &Green2_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Green2, triggered), &Green2_Value);
			ATMO_FreeValue(&Green2_Value);
			break;
		}
		case ATMO_ABILITY(Green2, setup):
		{
			ATMO_Value_t Green2_Value;
			ATMO_InitValue(&Green2_Value);
			Green2_setup(value, &Green2_Value);
			ATMO_FreeValue(&Green2_Value);
			break;
		}
		case ATMO_ABILITY(Green2, setState):
		{
			ATMO_Value_t Green2_Value;
			ATMO_InitValue(&Green2_Value);
			Green2_setState(value, &Green2_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Green2, stateSet), &Green2_Value);
			ATMO_FreeValue(&Green2_Value);
			break;
		}
		case ATMO_ABILITY(Green2, setPinHigh):
		{
			ATMO_Value_t Green2_Value;
			ATMO_InitValue(&Green2_Value);
			Green2_setPinHigh(value, &Green2_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Green2, stateSet), &Green2_Value);
			ATMO_FreeValue(&Green2_Value);
			break;
		}
		case ATMO_ABILITY(Green2, setPinLow):
		{
			ATMO_Value_t Green2_Value;
			ATMO_InitValue(&Green2_Value);
			Green2_setPinLow(value, &Green2_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Green2, stateSet), &Green2_Value);
			ATMO_FreeValue(&Green2_Value);
			break;
		}
		case ATMO_ABILITY(Green2, read):
		{
			ATMO_Value_t Green2_Value;
			ATMO_InitValue(&Green2_Value);
			Green2_read(value, &Green2_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Green2, read), &Green2_Value);
			ATMO_FreeValue(&Green2_Value);
			break;
		}
		case ATMO_ABILITY(Green2, toggle):
		{
			ATMO_Value_t Green2_Value;
			ATMO_InitValue(&Green2_Value);
			Green2_toggle(value, &Green2_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Green2, toggled), &Green2_Value);
			ATMO_FreeValue(&Green2_Value);
			break;
		}
		case ATMO_ABILITY(Green2, interrupt):
		{
			ATMO_Value_t Green2_Value;
			ATMO_InitValue(&Green2_Value);
			Green2_interrupt(value, &Green2_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Green2, interrupt), &Green2_Value);
			ATMO_FreeValue(&Green2_Value);
			break;
		}
	}

}

#ifdef __cplusplus
}
#endif
