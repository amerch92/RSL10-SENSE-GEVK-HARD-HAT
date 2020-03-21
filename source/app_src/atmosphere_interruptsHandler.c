#include "atmosphere_interruptsHandler.h"
#include "atmosphere_abilityHandler.h"


#ifdef __cplusplus
extern "C"{
#endif
void ATMO_Interval_INTERRUPT_trigger(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Interval, trigger), (ATMO_Value_t *)data);
}
void ATMO_Interval_INTERRUPT_setup(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Interval, setup), (ATMO_Value_t *)data);
}
void ATMO_Interval_INTERRUPT_interval(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Interval, interval), (ATMO_Value_t *)data);
}
void ATMO_BME680_INTERRUPT_trigger(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BME680, trigger), (ATMO_Value_t *)data);
}
void ATMO_BME680_INTERRUPT_setup(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BME680, setup), (ATMO_Value_t *)data);
}
void ATMO_BME680_INTERRUPT_readTemperature(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BME680, readTemperature), (ATMO_Value_t *)data);
}
void ATMO_BME680_INTERRUPT_readHumidity(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BME680, readHumidity), (ATMO_Value_t *)data);
}
void ATMO_BME680_INTERRUPT_readPressure(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BME680, readPressure), (ATMO_Value_t *)data);
}
void ATMO_BME680_INTERRUPT_readGasResistance(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BME680, readGasResistance), (ATMO_Value_t *)data);
}
void ATMO_EmbeddedBHI160_INTERRUPT_trigger(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedBHI160, trigger), (ATMO_Value_t *)data);
}
void ATMO_EmbeddedBHI160_INTERRUPT_setup(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedBHI160, setup), (ATMO_Value_t *)data);
}
void ATMO_EmbeddedBHI160_INTERRUPT_xAcceleration(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedBHI160, xAcceleration), (ATMO_Value_t *)data);
}
void ATMO_EmbeddedBHI160_INTERRUPT_yAcceleration(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedBHI160, yAcceleration), (ATMO_Value_t *)data);
}
void ATMO_EmbeddedBHI160_INTERRUPT_zAcceleration(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedBHI160, zAcceleration), (ATMO_Value_t *)data);
}
void ATMO_EmbeddedBHI160_INTERRUPT_acceleration(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedBHI160, acceleration), (ATMO_Value_t *)data);
}
void ATMO_EmbeddedBHI160_INTERRUPT_angularRate(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedBHI160, angularRate), (ATMO_Value_t *)data);
}
void ATMO_EmbeddedBHI160_INTERRUPT_xAngularRate(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedBHI160, xAngularRate), (ATMO_Value_t *)data);
}
void ATMO_EmbeddedBHI160_INTERRUPT_yAngularRate(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedBHI160, yAngularRate), (ATMO_Value_t *)data);
}
void ATMO_EmbeddedBHI160_INTERRUPT_zAngularRate(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedBHI160, zAngularRate), (ATMO_Value_t *)data);
}
void ATMO_EmbeddedBHI160_INTERRUPT_orientation(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedBHI160, orientation), (ATMO_Value_t *)data);
}
void ATMO_EmbeddedBHI160_INTERRUPT_xOrientation(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedBHI160, xOrientation), (ATMO_Value_t *)data);
}
void ATMO_EmbeddedBHI160_INTERRUPT_yOrientation(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedBHI160, yOrientation), (ATMO_Value_t *)data);
}
void ATMO_EmbeddedBHI160_INTERRUPT_zOrientation(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedBHI160, zOrientation), (ATMO_Value_t *)data);
}
void ATMO_NOA1305AmbientLight_INTERRUPT_trigger(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(NOA1305AmbientLight, trigger), (ATMO_Value_t *)data);
}
void ATMO_NOA1305AmbientLight_INTERRUPT_setup(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(NOA1305AmbientLight, setup), (ATMO_Value_t *)data);
}
void ATMO_NOA1305AmbientLight_INTERRUPT_readAmbientLight(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(NOA1305AmbientLight, readAmbientLight), (ATMO_Value_t *)data);
}
void ATMO_BLETemp_INTERRUPT_trigger(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLETemp, trigger), (ATMO_Value_t *)data);
}
void ATMO_BLETemp_INTERRUPT_setup(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLETemp, setup), (ATMO_Value_t *)data);
}
void ATMO_BLETemp_INTERRUPT_setValue(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLETemp, setValue), (ATMO_Value_t *)data);
}
void ATMO_BLETemp_INTERRUPT_written(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLETemp, written), (ATMO_Value_t *)data);
}
void ATMO_BLETemp_INTERRUPT_subscibed(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLETemp, subscibed), (ATMO_Value_t *)data);
}
void ATMO_BLETemp_INTERRUPT_unsubscribed(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLETemp, unsubscribed), (ATMO_Value_t *)data);
}
void ATMO_BLEPres_INTERRUPT_trigger(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLEPres, trigger), (ATMO_Value_t *)data);
}
void ATMO_BLEPres_INTERRUPT_setup(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLEPres, setup), (ATMO_Value_t *)data);
}
void ATMO_BLEPres_INTERRUPT_setValue(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLEPres, setValue), (ATMO_Value_t *)data);
}
void ATMO_BLEPres_INTERRUPT_written(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLEPres, written), (ATMO_Value_t *)data);
}
void ATMO_BLEPres_INTERRUPT_subscibed(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLEPres, subscibed), (ATMO_Value_t *)data);
}
void ATMO_BLEPres_INTERRUPT_unsubscribed(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLEPres, unsubscribed), (ATMO_Value_t *)data);
}
void ATMO_BLEHumid_INTERRUPT_trigger(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLEHumid, trigger), (ATMO_Value_t *)data);
}
void ATMO_BLEHumid_INTERRUPT_setup(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLEHumid, setup), (ATMO_Value_t *)data);
}
void ATMO_BLEHumid_INTERRUPT_setValue(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLEHumid, setValue), (ATMO_Value_t *)data);
}
void ATMO_BLEHumid_INTERRUPT_written(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLEHumid, written), (ATMO_Value_t *)data);
}
void ATMO_BLEHumid_INTERRUPT_subscibed(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLEHumid, subscibed), (ATMO_Value_t *)data);
}
void ATMO_BLEHumid_INTERRUPT_unsubscribed(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLEHumid, unsubscribed), (ATMO_Value_t *)data);
}
void ATMO_BLEAccX_INTERRUPT_trigger(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLEAccX, trigger), (ATMO_Value_t *)data);
}
void ATMO_BLEAccX_INTERRUPT_setup(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLEAccX, setup), (ATMO_Value_t *)data);
}
void ATMO_BLEAccX_INTERRUPT_setValue(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLEAccX, setValue), (ATMO_Value_t *)data);
}
void ATMO_BLEAccX_INTERRUPT_written(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLEAccX, written), (ATMO_Value_t *)data);
}
void ATMO_BLEAccX_INTERRUPT_subscibed(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLEAccX, subscibed), (ATMO_Value_t *)data);
}
void ATMO_BLEAccX_INTERRUPT_unsubscribed(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLEAccX, unsubscribed), (ATMO_Value_t *)data);
}
void ATMO_BLEAccY_INTERRUPT_trigger(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLEAccY, trigger), (ATMO_Value_t *)data);
}
void ATMO_BLEAccY_INTERRUPT_setup(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLEAccY, setup), (ATMO_Value_t *)data);
}
void ATMO_BLEAccY_INTERRUPT_setValue(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLEAccY, setValue), (ATMO_Value_t *)data);
}
void ATMO_BLEAccY_INTERRUPT_written(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLEAccY, written), (ATMO_Value_t *)data);
}
void ATMO_BLEAccY_INTERRUPT_subscibed(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLEAccY, subscibed), (ATMO_Value_t *)data);
}
void ATMO_BLEAccY_INTERRUPT_unsubscribed(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLEAccY, unsubscribed), (ATMO_Value_t *)data);
}
void ATMO_BLEAccZ_INTERRUPT_trigger(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLEAccZ, trigger), (ATMO_Value_t *)data);
}
void ATMO_BLEAccZ_INTERRUPT_setup(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLEAccZ, setup), (ATMO_Value_t *)data);
}
void ATMO_BLEAccZ_INTERRUPT_setValue(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLEAccZ, setValue), (ATMO_Value_t *)data);
}
void ATMO_BLEAccZ_INTERRUPT_written(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLEAccZ, written), (ATMO_Value_t *)data);
}
void ATMO_BLEAccZ_INTERRUPT_subscibed(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLEAccZ, subscibed), (ATMO_Value_t *)data);
}
void ATMO_BLEAccZ_INTERRUPT_unsubscribed(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLEAccZ, unsubscribed), (ATMO_Value_t *)data);
}
void ATMO_BLELight_INTERRUPT_trigger(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLELight, trigger), (ATMO_Value_t *)data);
}
void ATMO_BLELight_INTERRUPT_setup(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLELight, setup), (ATMO_Value_t *)data);
}
void ATMO_BLELight_INTERRUPT_setValue(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLELight, setValue), (ATMO_Value_t *)data);
}
void ATMO_BLELight_INTERRUPT_written(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLELight, written), (ATMO_Value_t *)data);
}
void ATMO_BLELight_INTERRUPT_subscibed(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLELight, subscibed), (ATMO_Value_t *)data);
}
void ATMO_BLELight_INTERRUPT_unsubscribed(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(BLELight, unsubscribed), (ATMO_Value_t *)data);
}
void ATMO_LessLightLevel_INTERRUPT_trigger(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(LessLightLevel, trigger), (ATMO_Value_t *)data);
}
void ATMO_LessLightLevel_INTERRUPT_setup(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(LessLightLevel, setup), (ATMO_Value_t *)data);
}
void ATMO_LessLightLevel_INTERRUPT_evaluate(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(LessLightLevel, evaluate), (ATMO_Value_t *)data);
}
void ATMO_GreatLightLevel_INTERRUPT_trigger(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(GreatLightLevel, trigger), (ATMO_Value_t *)data);
}
void ATMO_GreatLightLevel_INTERRUPT_setup(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(GreatLightLevel, setup), (ATMO_Value_t *)data);
}
void ATMO_GreatLightLevel_INTERRUPT_evaluate(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(GreatLightLevel, evaluate), (ATMO_Value_t *)data);
}
void ATMO_Red1_INTERRUPT_trigger(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Red1, trigger), (ATMO_Value_t *)data);
}
void ATMO_Red1_INTERRUPT_setup(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Red1, setup), (ATMO_Value_t *)data);
}
void ATMO_Red1_INTERRUPT_setState(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Red1, setState), (ATMO_Value_t *)data);
}
void ATMO_Red1_INTERRUPT_setPinHigh(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Red1, setPinHigh), (ATMO_Value_t *)data);
}
void ATMO_Red1_INTERRUPT_setPinLow(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Red1, setPinLow), (ATMO_Value_t *)data);
}
void ATMO_Red1_INTERRUPT_read(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Red1, read), (ATMO_Value_t *)data);
}
void ATMO_Red1_INTERRUPT_toggle(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Red1, toggle), (ATMO_Value_t *)data);
}
void ATMO_Red1_INTERRUPT_interrupt(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Red1, interrupt), (ATMO_Value_t *)data);
}
void ATMO_Green1_INTERRUPT_trigger(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Green1, trigger), (ATMO_Value_t *)data);
}
void ATMO_Green1_INTERRUPT_setup(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Green1, setup), (ATMO_Value_t *)data);
}
void ATMO_Green1_INTERRUPT_setState(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Green1, setState), (ATMO_Value_t *)data);
}
void ATMO_Green1_INTERRUPT_setPinHigh(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Green1, setPinHigh), (ATMO_Value_t *)data);
}
void ATMO_Green1_INTERRUPT_setPinLow(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Green1, setPinLow), (ATMO_Value_t *)data);
}
void ATMO_Green1_INTERRUPT_read(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Green1, read), (ATMO_Value_t *)data);
}
void ATMO_Green1_INTERRUPT_toggle(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Green1, toggle), (ATMO_Value_t *)data);
}
void ATMO_Green1_INTERRUPT_interrupt(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Green1, interrupt), (ATMO_Value_t *)data);
}
void ATMO_Red2_INTERRUPT_trigger(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Red2, trigger), (ATMO_Value_t *)data);
}
void ATMO_Red2_INTERRUPT_setup(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Red2, setup), (ATMO_Value_t *)data);
}
void ATMO_Red2_INTERRUPT_setState(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Red2, setState), (ATMO_Value_t *)data);
}
void ATMO_Red2_INTERRUPT_setPinHigh(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Red2, setPinHigh), (ATMO_Value_t *)data);
}
void ATMO_Red2_INTERRUPT_setPinLow(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Red2, setPinLow), (ATMO_Value_t *)data);
}
void ATMO_Red2_INTERRUPT_read(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Red2, read), (ATMO_Value_t *)data);
}
void ATMO_Red2_INTERRUPT_toggle(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Red2, toggle), (ATMO_Value_t *)data);
}
void ATMO_Red2_INTERRUPT_interrupt(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Red2, interrupt), (ATMO_Value_t *)data);
}
void ATMO_Green2_INTERRUPT_trigger(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Green2, trigger), (ATMO_Value_t *)data);
}
void ATMO_Green2_INTERRUPT_setup(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Green2, setup), (ATMO_Value_t *)data);
}
void ATMO_Green2_INTERRUPT_setState(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Green2, setState), (ATMO_Value_t *)data);
}
void ATMO_Green2_INTERRUPT_setPinHigh(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Green2, setPinHigh), (ATMO_Value_t *)data);
}
void ATMO_Green2_INTERRUPT_setPinLow(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Green2, setPinLow), (ATMO_Value_t *)data);
}
void ATMO_Green2_INTERRUPT_read(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Green2, read), (ATMO_Value_t *)data);
}
void ATMO_Green2_INTERRUPT_toggle(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Green2, toggle), (ATMO_Value_t *)data);
}
void ATMO_Green2_INTERRUPT_interrupt(void *data) {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Green2, interrupt), (ATMO_Value_t *)data);
}

#ifdef __cplusplus
}
#endif
	