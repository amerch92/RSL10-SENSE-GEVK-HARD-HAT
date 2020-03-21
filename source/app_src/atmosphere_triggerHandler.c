#include "atmosphere_triggerHandler.h"
#include "atmosphere_abilityHandler.h"

#ifdef __cplusplus
	extern "C"{
#endif

void ATMO_TriggerHandler(unsigned int triggerHandleId, ATMO_Value_t *value) {
	switch(triggerHandleId) {
		case ATMO_TRIGGER(Interval, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(Interval, interval):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(BME680, readTemperature), value);
			ATMO_AbilityHandler(ATMO_ABILITY(BME680, readHumidity), value);
			ATMO_AbilityHandler(ATMO_ABILITY(BME680, readPressure), value);
			ATMO_AbilityHandler(ATMO_ABILITY(EmbeddedBHI160, xAcceleration), value);
			ATMO_AbilityHandler(ATMO_ABILITY(EmbeddedBHI160, yAcceleration), value);
			ATMO_AbilityHandler(ATMO_ABILITY(EmbeddedBHI160, zAcceleration), value);
			ATMO_AbilityHandler(ATMO_ABILITY(NOA1305AmbientLight, readAmbientLight), value);
			break;
		}

		case ATMO_TRIGGER(BME680, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(BME680, temperatureRead):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(BLETemp, setValue), value);
			ATMO_AbilityHandler(ATMO_ABILITY(BLEHumid, setValue), value);
			break;
		}

		case ATMO_TRIGGER(BME680, humidityRead):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(BLEHumid, setValue), value);
			break;
		}

		case ATMO_TRIGGER(BME680, pressureRead):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(BLEPres, setValue), value);
			break;
		}

		case ATMO_TRIGGER(BME680, gasResistanceRead):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedBHI160, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedBHI160, xAccelerationRead):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(BLEAccX, setValue), value);
			break;
		}

		case ATMO_TRIGGER(EmbeddedBHI160, yAccelerationRead):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(BLEAccY, setValue), value);
			break;
		}

		case ATMO_TRIGGER(EmbeddedBHI160, zAccelerationRead):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(BLEAccZ, setValue), value);
			break;
		}

		case ATMO_TRIGGER(EmbeddedBHI160, accelerationRead):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedBHI160, angularRateRead):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedBHI160, xAngularRateRead):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedBHI160, yAngularRateRead):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedBHI160, zAngularRateRead):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedBHI160, orientationRead):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedBHI160, xOrientationRead):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedBHI160, yOrientationRead):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedBHI160, zOrientationRead):
		{
			break;
		}

		case ATMO_TRIGGER(NOA1305AmbientLight, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(NOA1305AmbientLight, ambientLightRead):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(BLELight, setValue), value);
			ATMO_AbilityHandler(ATMO_ABILITY(LessLightLevel, evaluate), value);
			ATMO_AbilityHandler(ATMO_ABILITY(GreatLightLevel, evaluate), value);
			break;
		}

		case ATMO_TRIGGER(BLETemp, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(BLETemp, written):
		{
			break;
		}

		case ATMO_TRIGGER(BLETemp, subscibed):
		{
			break;
		}

		case ATMO_TRIGGER(BLETemp, unsubscribed):
		{
			break;
		}

		case ATMO_TRIGGER(BLEPres, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(BLEPres, written):
		{
			break;
		}

		case ATMO_TRIGGER(BLEPres, subscibed):
		{
			break;
		}

		case ATMO_TRIGGER(BLEPres, unsubscribed):
		{
			break;
		}

		case ATMO_TRIGGER(BLEHumid, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(BLEHumid, written):
		{
			break;
		}

		case ATMO_TRIGGER(BLEHumid, subscibed):
		{
			break;
		}

		case ATMO_TRIGGER(BLEHumid, unsubscribed):
		{
			break;
		}

		case ATMO_TRIGGER(BLEAccX, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(BLEAccX, written):
		{
			break;
		}

		case ATMO_TRIGGER(BLEAccX, subscibed):
		{
			break;
		}

		case ATMO_TRIGGER(BLEAccX, unsubscribed):
		{
			break;
		}

		case ATMO_TRIGGER(BLEAccY, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(BLEAccY, written):
		{
			break;
		}

		case ATMO_TRIGGER(BLEAccY, subscibed):
		{
			break;
		}

		case ATMO_TRIGGER(BLEAccY, unsubscribed):
		{
			break;
		}

		case ATMO_TRIGGER(BLEAccZ, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(BLEAccZ, written):
		{
			break;
		}

		case ATMO_TRIGGER(BLEAccZ, subscibed):
		{
			break;
		}

		case ATMO_TRIGGER(BLEAccZ, unsubscribed):
		{
			break;
		}

		case ATMO_TRIGGER(BLELight, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(BLELight, written):
		{
			break;
		}

		case ATMO_TRIGGER(BLELight, subscibed):
		{
			break;
		}

		case ATMO_TRIGGER(BLELight, unsubscribed):
		{
			break;
		}

		case ATMO_TRIGGER(LessLightLevel, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(LessLightLevel, conditionTrue):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(Red1, setPinHigh), value);
			ATMO_AbilityHandler(ATMO_ABILITY(Green1, setPinLow), value);
			break;
		}

		case ATMO_TRIGGER(LessLightLevel, conditionFalse):
		{
			break;
		}

		case ATMO_TRIGGER(LessLightLevel, invalidType):
		{
			break;
		}

		case ATMO_TRIGGER(GreatLightLevel, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(GreatLightLevel, conditionTrue):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(Red2, setPinLow), value);
			ATMO_AbilityHandler(ATMO_ABILITY(Green2, setPinHigh), value);
			break;
		}

		case ATMO_TRIGGER(GreatLightLevel, conditionFalse):
		{
			break;
		}

		case ATMO_TRIGGER(GreatLightLevel, invalidType):
		{
			break;
		}

		case ATMO_TRIGGER(Red1, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(Red1, stateSet):
		{
			break;
		}

		case ATMO_TRIGGER(Red1, read):
		{
			break;
		}

		case ATMO_TRIGGER(Red1, toggled):
		{
			break;
		}

		case ATMO_TRIGGER(Red1, interrupt):
		{
			break;
		}

		case ATMO_TRIGGER(Green1, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(Green1, stateSet):
		{
			break;
		}

		case ATMO_TRIGGER(Green1, read):
		{
			break;
		}

		case ATMO_TRIGGER(Green1, toggled):
		{
			break;
		}

		case ATMO_TRIGGER(Green1, interrupt):
		{
			break;
		}

		case ATMO_TRIGGER(Red2, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(Red2, stateSet):
		{
			break;
		}

		case ATMO_TRIGGER(Red2, read):
		{
			break;
		}

		case ATMO_TRIGGER(Red2, toggled):
		{
			break;
		}

		case ATMO_TRIGGER(Red2, interrupt):
		{
			break;
		}

		case ATMO_TRIGGER(Green2, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(Green2, stateSet):
		{
			break;
		}

		case ATMO_TRIGGER(Green2, read):
		{
			break;
		}

		case ATMO_TRIGGER(Green2, toggled):
		{
			break;
		}

		case ATMO_TRIGGER(Green2, interrupt):
		{
			break;
		}

	}

}

#ifdef __cplusplus
}
#endif
