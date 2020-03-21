#include "atmosphere_callbacks.h"

//HEADER START

//HEADER END

void ATMO_Setup() {

}


ATMO_Status_t Interval_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t Interval_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_INTERVAL_Handle_t intervalHandle;
    ATMO_INTERVAL_AddAbilityInterval(
		ATMO_PROPERTY(Interval, instance), 
		ATMO_ABILITY(Interval, interval), 
		ATMO_PROPERTY(Interval, time), 
		&intervalHandle
	);
	
	return ATMO_Status_Success;
	
}


ATMO_Status_t Interval_interval(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t BME680_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t BME680_setup(ATMO_Value_t *in, ATMO_Value_t *out) {
BME680_Config_t config;
config.i2cInstance = ATMO_PROPERTY(BME680, i2cInstance );
config.i2cAddr = ATMO_PROPERTY(BME680, i2cAddress );

if ( !BME680_Init( &config ) )
{
	return ATMO_Status_Fail;
}

return ATMO_Status_Success;
}


ATMO_Status_t BME680_readTemperature(ATMO_Value_t *in, ATMO_Value_t *out) {
float temperature = 0.0;

if ( BME680_GetTempData( &temperature ) != BME680_Status_Success )
{
	return ATMO_Status_Fail;
}

ATMO_CreateValueFloat( out, temperature );

return ATMO_Status_Success;
}


ATMO_Status_t BME680_readHumidity(ATMO_Value_t *in, ATMO_Value_t *out) {
float humidity = 0.0;

if ( BME680_GetHumidity( &humidity ) != BME680_Status_Success )
{
	return ATMO_Status_Fail;
}

ATMO_CreateValueFloat( out, humidity );

return ATMO_Status_Success;
}


ATMO_Status_t BME680_readPressure(ATMO_Value_t *in, ATMO_Value_t *out) {
float pressure = 0.0;

if ( BME680_GetPressure( &pressure ) != BME680_Status_Success )
{
	return ATMO_Status_Fail;
}

ATMO_CreateValueFloat( out, pressure );

return ATMO_Status_Success;
}


ATMO_Status_t BME680_readGasResistance(ATMO_Value_t *in, ATMO_Value_t *out) {
float gas_resistance = 0.0;

if ( BME680_GetGasRes( &gas_resistance ) != BME680_Status_Success )
{
	return ATMO_Status_Fail;
}

ATMO_CreateValueFloat( out, gas_resistance );

return ATMO_Status_Success;
}


ATMO_Status_t EmbeddedBHI160_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t EmbeddedBHI160_setup(ATMO_Value_t *in, ATMO_Value_t *out) {
    BHI160_Config_t config;
    config.i2cInstance = ATMO_PROPERTY(EmbeddedBHI160, i2cInstance);
    config.gpioInstance = ATMO_PROPERTY(EmbeddedBHI160, gpioInstance);
    config.intPin = ATMO_PROPERTY(EmbeddedBHI160, intPin);

    if(!BHI160_Init(&config))
    {
        return ATMO_Status_Fail;
    }
    return ATMO_Status_Success;
}


ATMO_Status_t EmbeddedBHI160_xAcceleration(ATMO_Value_t *in, ATMO_Value_t *out) {
    ATMO_3dFloatVector_t data;
    BHI160_GetData(&data, NULL, NULL);
    ATMO_CreateValueFloat(out, data.x);
    return ATMO_Status_Success;
}


ATMO_Status_t EmbeddedBHI160_yAcceleration(ATMO_Value_t *in, ATMO_Value_t *out) {
    ATMO_3dFloatVector_t data;
    BHI160_GetData(&data, NULL, NULL);
    ATMO_CreateValueFloat(out, data.y);
    return ATMO_Status_Success;
}


ATMO_Status_t EmbeddedBHI160_zAcceleration(ATMO_Value_t *in, ATMO_Value_t *out) {
    ATMO_3dFloatVector_t data;
    BHI160_GetData(&data, NULL, NULL);
    ATMO_CreateValueFloat(out, data.z);
    return ATMO_Status_Success;
}


ATMO_Status_t EmbeddedBHI160_acceleration(ATMO_Value_t *in, ATMO_Value_t *out) {
    ATMO_3dFloatVector_t data;
    BHI160_GetData(&data, NULL, NULL);
    ATMO_CreateValue3dVectorFloat(out, &data);
    return ATMO_Status_Success;
}


ATMO_Status_t EmbeddedBHI160_angularRate(ATMO_Value_t *in, ATMO_Value_t *out) {
    ATMO_3dFloatVector_t data;
    BHI160_GetData(NULL, &data, NULL);
    ATMO_CreateValue3dVectorFloat(out, &data);
    return ATMO_Status_Success;
}


ATMO_Status_t EmbeddedBHI160_xAngularRate(ATMO_Value_t *in, ATMO_Value_t *out) {
    ATMO_3dFloatVector_t data;
    BHI160_GetData(NULL, &data, NULL);
    ATMO_CreateValueFloat(out, data.x);
    return ATMO_Status_Success;
}


ATMO_Status_t EmbeddedBHI160_yAngularRate(ATMO_Value_t *in, ATMO_Value_t *out) {
    ATMO_3dFloatVector_t data;
    BHI160_GetData(NULL, &data, NULL);
    ATMO_CreateValueFloat(out, data.y);
    return ATMO_Status_Success;
}


ATMO_Status_t EmbeddedBHI160_zAngularRate(ATMO_Value_t *in, ATMO_Value_t *out) {
    ATMO_3dFloatVector_t data;
    BHI160_GetData(NULL, &data, NULL);
    ATMO_CreateValueFloat(out, data.z);
    return ATMO_Status_Success;
}


ATMO_Status_t EmbeddedBHI160_orientation(ATMO_Value_t *in, ATMO_Value_t *out) {
    ATMO_3dFloatVector_t data;
    BHI160_GetData(NULL, NULL, &data);
    ATMO_CreateValue3dVectorFloat(out, &data);
    return ATMO_Status_Success;
}


ATMO_Status_t EmbeddedBHI160_xOrientation(ATMO_Value_t *in, ATMO_Value_t *out) {
    ATMO_3dFloatVector_t data;
    BHI160_GetData(NULL, NULL, &data);
    ATMO_CreateValueFloat(out, data.x);
    return ATMO_Status_Success;
}


ATMO_Status_t EmbeddedBHI160_yOrientation(ATMO_Value_t *in, ATMO_Value_t *out) {
    ATMO_3dFloatVector_t data;
    BHI160_GetData(NULL, NULL, &data);
    ATMO_CreateValueFloat(out, data.y);
    return ATMO_Status_Success;
}


ATMO_Status_t EmbeddedBHI160_zOrientation(ATMO_Value_t *in, ATMO_Value_t *out) {
    ATMO_3dFloatVector_t data;
    BHI160_GetData(NULL, NULL, &data);
    ATMO_CreateValueFloat(out, data.z);
    return ATMO_Status_Success;
}


ATMO_Status_t NOA1305AmbientLight_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t NOA1305AmbientLight_setup(ATMO_Value_t *in, ATMO_Value_t *out) {
    if(!NOA1305_Init(ATMO_PROPERTY(NOA1305AmbientLight, i2cInstance)))
    {
        return ATMO_Status_Fail;
    }

    return ATMO_Status_Success;
}


ATMO_Status_t NOA1305AmbientLight_readAmbientLight(ATMO_Value_t *in, ATMO_Value_t *out) {
    uint32_t ambientLightLux = 0;
    if(!NOA1305_GetAmbientLight(&ambientLightLux))
    {
        return ATMO_Status_Fail;
    }
    ATMO_CreateValueUnsignedInt(out, ambientLightLux);
    return ATMO_Status_Success;
}


ATMO_Status_t BLETemp_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t BLETemp_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_BLE_GATTSAddService(
		ATMO_PROPERTY(BLETemp, instance),
		&ATMO_VARIABLE(BLETemp, bleServiceHandle), 
		ATMO_PROPERTY(BLETemp, bleServiceUuid));
	
	uint8_t property = 0;
	uint8_t permission = 0;
	
	property |= ATMO_PROPERTY(BLETemp, read) ? ATMO_BLE_Property_Read : 0;
	property |= ATMO_PROPERTY(BLETemp, write) ? ATMO_BLE_Property_Write : 0;
	property |= ATMO_PROPERTY(BLETemp, notify) ? ATMO_BLE_Property_Notify : 0;

	permission |= ATMO_PROPERTY(BLETemp, read) ? ATMO_BLE_Permission_Read : 0;
	permission |= ATMO_PROPERTY(BLETemp, write) ? ATMO_BLE_Permission_Write : 0;

	ATMO_DATATYPE types[3] = {ATMO_PROPERTY(BLETemp, writeDataType), ATMO_PROPERTY(BLETemp, readDataType), ATMO_PROPERTY(BLETemp, notifyDataType)};
	
	ATMO_BLE_GATTSAddCharacteristic(
		ATMO_PROPERTY(BLETemp, instance),
		&ATMO_VARIABLE(BLETemp, bleCharacteristicHandle), 
		ATMO_VARIABLE(BLETemp, bleServiceHandle), 
		ATMO_PROPERTY(BLETemp, bleCharacteristicUuid), 
		property, permission, ATMO_GetMaxValueSize(3, 64, types));
	
	ATMO_BLE_GATTSRegisterCharacteristicAbilityHandle(
		ATMO_PROPERTY(BLETemp, instance),
		ATMO_VARIABLE(BLETemp, bleCharacteristicHandle), 
		ATMO_BLE_Characteristic_Written, 
		ATMO_ABILITY(BLETemp, written));
	
	return ATMO_Status_Success;
	
}


ATMO_Status_t BLETemp_setValue(ATMO_Value_t *in, ATMO_Value_t *out) {

	
	// Convert to the desired write data type
	ATMO_Value_t convertedValue;
	ATMO_InitValue(&convertedValue);
	ATMO_CreateValueConverted(&convertedValue, ATMO_PROPERTY(BLETemp, readDataType), in);

	ATMO_BLE_GATTSSetCharacteristic(
		ATMO_PROPERTY(BLETemp, instance),
		ATMO_VARIABLE(BLETemp, bleCharacteristicHandle),
		convertedValue.size, 
		(uint8_t *)convertedValue.data,
		NULL);
	
	ATMO_FreeValue(&convertedValue);
		
	return ATMO_Status_Success;
	
}


ATMO_Status_t BLETemp_written(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_CreateValueConverted(out, ATMO_PROPERTY(BLETemp, writeDataType), in);
	return ATMO_Status_Success;
	
}


ATMO_Status_t BLETemp_subscibed(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t BLETemp_unsubscribed(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t BLEPres_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t BLEPres_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_BLE_GATTSAddService(
		ATMO_PROPERTY(BLEPres, instance),
		&ATMO_VARIABLE(BLEPres, bleServiceHandle), 
		ATMO_PROPERTY(BLEPres, bleServiceUuid));
	
	uint8_t property = 0;
	uint8_t permission = 0;
	
	property |= ATMO_PROPERTY(BLEPres, read) ? ATMO_BLE_Property_Read : 0;
	property |= ATMO_PROPERTY(BLEPres, write) ? ATMO_BLE_Property_Write : 0;
	property |= ATMO_PROPERTY(BLEPres, notify) ? ATMO_BLE_Property_Notify : 0;

	permission |= ATMO_PROPERTY(BLEPres, read) ? ATMO_BLE_Permission_Read : 0;
	permission |= ATMO_PROPERTY(BLEPres, write) ? ATMO_BLE_Permission_Write : 0;

	ATMO_DATATYPE types[3] = {ATMO_PROPERTY(BLEPres, writeDataType), ATMO_PROPERTY(BLEPres, readDataType), ATMO_PROPERTY(BLEPres, notifyDataType)};
	
	ATMO_BLE_GATTSAddCharacteristic(
		ATMO_PROPERTY(BLEPres, instance),
		&ATMO_VARIABLE(BLEPres, bleCharacteristicHandle), 
		ATMO_VARIABLE(BLEPres, bleServiceHandle), 
		ATMO_PROPERTY(BLEPres, bleCharacteristicUuid), 
		property, permission, ATMO_GetMaxValueSize(3, 64, types));
	
	ATMO_BLE_GATTSRegisterCharacteristicAbilityHandle(
		ATMO_PROPERTY(BLEPres, instance),
		ATMO_VARIABLE(BLEPres, bleCharacteristicHandle), 
		ATMO_BLE_Characteristic_Written, 
		ATMO_ABILITY(BLEPres, written));
	
	return ATMO_Status_Success;
	
}


ATMO_Status_t BLEPres_setValue(ATMO_Value_t *in, ATMO_Value_t *out) {

	
	// Convert to the desired write data type
	ATMO_Value_t convertedValue;
	ATMO_InitValue(&convertedValue);
	ATMO_CreateValueConverted(&convertedValue, ATMO_PROPERTY(BLEPres, readDataType), in);

	ATMO_BLE_GATTSSetCharacteristic(
		ATMO_PROPERTY(BLEPres, instance),
		ATMO_VARIABLE(BLEPres, bleCharacteristicHandle),
		convertedValue.size, 
		(uint8_t *)convertedValue.data,
		NULL);
	
	ATMO_FreeValue(&convertedValue);
		
	return ATMO_Status_Success;
	
}


ATMO_Status_t BLEPres_written(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_CreateValueConverted(out, ATMO_PROPERTY(BLEPres, writeDataType), in);
	return ATMO_Status_Success;
	
}


ATMO_Status_t BLEPres_subscibed(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t BLEPres_unsubscribed(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t BLEHumid_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t BLEHumid_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_BLE_GATTSAddService(
		ATMO_PROPERTY(BLEHumid, instance),
		&ATMO_VARIABLE(BLEHumid, bleServiceHandle), 
		ATMO_PROPERTY(BLEHumid, bleServiceUuid));
	
	uint8_t property = 0;
	uint8_t permission = 0;
	
	property |= ATMO_PROPERTY(BLEHumid, read) ? ATMO_BLE_Property_Read : 0;
	property |= ATMO_PROPERTY(BLEHumid, write) ? ATMO_BLE_Property_Write : 0;
	property |= ATMO_PROPERTY(BLEHumid, notify) ? ATMO_BLE_Property_Notify : 0;

	permission |= ATMO_PROPERTY(BLEHumid, read) ? ATMO_BLE_Permission_Read : 0;
	permission |= ATMO_PROPERTY(BLEHumid, write) ? ATMO_BLE_Permission_Write : 0;

	ATMO_DATATYPE types[3] = {ATMO_PROPERTY(BLEHumid, writeDataType), ATMO_PROPERTY(BLEHumid, readDataType), ATMO_PROPERTY(BLEHumid, notifyDataType)};
	
	ATMO_BLE_GATTSAddCharacteristic(
		ATMO_PROPERTY(BLEHumid, instance),
		&ATMO_VARIABLE(BLEHumid, bleCharacteristicHandle), 
		ATMO_VARIABLE(BLEHumid, bleServiceHandle), 
		ATMO_PROPERTY(BLEHumid, bleCharacteristicUuid), 
		property, permission, ATMO_GetMaxValueSize(3, 64, types));
	
	ATMO_BLE_GATTSRegisterCharacteristicAbilityHandle(
		ATMO_PROPERTY(BLEHumid, instance),
		ATMO_VARIABLE(BLEHumid, bleCharacteristicHandle), 
		ATMO_BLE_Characteristic_Written, 
		ATMO_ABILITY(BLEHumid, written));
	
	return ATMO_Status_Success;
	
}


ATMO_Status_t BLEHumid_setValue(ATMO_Value_t *in, ATMO_Value_t *out) {

	
	// Convert to the desired write data type
	ATMO_Value_t convertedValue;
	ATMO_InitValue(&convertedValue);
	ATMO_CreateValueConverted(&convertedValue, ATMO_PROPERTY(BLEHumid, readDataType), in);

	ATMO_BLE_GATTSSetCharacteristic(
		ATMO_PROPERTY(BLEHumid, instance),
		ATMO_VARIABLE(BLEHumid, bleCharacteristicHandle),
		convertedValue.size, 
		(uint8_t *)convertedValue.data,
		NULL);
	
	ATMO_FreeValue(&convertedValue);
		
	return ATMO_Status_Success;
	
}


ATMO_Status_t BLEHumid_written(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_CreateValueConverted(out, ATMO_PROPERTY(BLEHumid, writeDataType), in);
	return ATMO_Status_Success;
	
}


ATMO_Status_t BLEHumid_subscibed(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t BLEHumid_unsubscribed(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t BLEAccX_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t BLEAccX_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_BLE_GATTSAddService(
		ATMO_PROPERTY(BLEAccX, instance),
		&ATMO_VARIABLE(BLEAccX, bleServiceHandle), 
		ATMO_PROPERTY(BLEAccX, bleServiceUuid));
	
	uint8_t property = 0;
	uint8_t permission = 0;
	
	property |= ATMO_PROPERTY(BLEAccX, read) ? ATMO_BLE_Property_Read : 0;
	property |= ATMO_PROPERTY(BLEAccX, write) ? ATMO_BLE_Property_Write : 0;
	property |= ATMO_PROPERTY(BLEAccX, notify) ? ATMO_BLE_Property_Notify : 0;

	permission |= ATMO_PROPERTY(BLEAccX, read) ? ATMO_BLE_Permission_Read : 0;
	permission |= ATMO_PROPERTY(BLEAccX, write) ? ATMO_BLE_Permission_Write : 0;

	ATMO_DATATYPE types[3] = {ATMO_PROPERTY(BLEAccX, writeDataType), ATMO_PROPERTY(BLEAccX, readDataType), ATMO_PROPERTY(BLEAccX, notifyDataType)};
	
	ATMO_BLE_GATTSAddCharacteristic(
		ATMO_PROPERTY(BLEAccX, instance),
		&ATMO_VARIABLE(BLEAccX, bleCharacteristicHandle), 
		ATMO_VARIABLE(BLEAccX, bleServiceHandle), 
		ATMO_PROPERTY(BLEAccX, bleCharacteristicUuid), 
		property, permission, ATMO_GetMaxValueSize(3, 64, types));
	
	ATMO_BLE_GATTSRegisterCharacteristicAbilityHandle(
		ATMO_PROPERTY(BLEAccX, instance),
		ATMO_VARIABLE(BLEAccX, bleCharacteristicHandle), 
		ATMO_BLE_Characteristic_Written, 
		ATMO_ABILITY(BLEAccX, written));
	
	return ATMO_Status_Success;
	
}


ATMO_Status_t BLEAccX_setValue(ATMO_Value_t *in, ATMO_Value_t *out) {

	
	// Convert to the desired write data type
	ATMO_Value_t convertedValue;
	ATMO_InitValue(&convertedValue);
	ATMO_CreateValueConverted(&convertedValue, ATMO_PROPERTY(BLEAccX, readDataType), in);

	ATMO_BLE_GATTSSetCharacteristic(
		ATMO_PROPERTY(BLEAccX, instance),
		ATMO_VARIABLE(BLEAccX, bleCharacteristicHandle),
		convertedValue.size, 
		(uint8_t *)convertedValue.data,
		NULL);
	
	ATMO_FreeValue(&convertedValue);
		
	return ATMO_Status_Success;
	
}


ATMO_Status_t BLEAccX_written(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_CreateValueConverted(out, ATMO_PROPERTY(BLEAccX, writeDataType), in);
	return ATMO_Status_Success;
	
}


ATMO_Status_t BLEAccX_subscibed(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t BLEAccX_unsubscribed(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t BLEAccY_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t BLEAccY_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_BLE_GATTSAddService(
		ATMO_PROPERTY(BLEAccY, instance),
		&ATMO_VARIABLE(BLEAccY, bleServiceHandle), 
		ATMO_PROPERTY(BLEAccY, bleServiceUuid));
	
	uint8_t property = 0;
	uint8_t permission = 0;
	
	property |= ATMO_PROPERTY(BLEAccY, read) ? ATMO_BLE_Property_Read : 0;
	property |= ATMO_PROPERTY(BLEAccY, write) ? ATMO_BLE_Property_Write : 0;
	property |= ATMO_PROPERTY(BLEAccY, notify) ? ATMO_BLE_Property_Notify : 0;

	permission |= ATMO_PROPERTY(BLEAccY, read) ? ATMO_BLE_Permission_Read : 0;
	permission |= ATMO_PROPERTY(BLEAccY, write) ? ATMO_BLE_Permission_Write : 0;

	ATMO_DATATYPE types[3] = {ATMO_PROPERTY(BLEAccY, writeDataType), ATMO_PROPERTY(BLEAccY, readDataType), ATMO_PROPERTY(BLEAccY, notifyDataType)};
	
	ATMO_BLE_GATTSAddCharacteristic(
		ATMO_PROPERTY(BLEAccY, instance),
		&ATMO_VARIABLE(BLEAccY, bleCharacteristicHandle), 
		ATMO_VARIABLE(BLEAccY, bleServiceHandle), 
		ATMO_PROPERTY(BLEAccY, bleCharacteristicUuid), 
		property, permission, ATMO_GetMaxValueSize(3, 64, types));
	
	ATMO_BLE_GATTSRegisterCharacteristicAbilityHandle(
		ATMO_PROPERTY(BLEAccY, instance),
		ATMO_VARIABLE(BLEAccY, bleCharacteristicHandle), 
		ATMO_BLE_Characteristic_Written, 
		ATMO_ABILITY(BLEAccY, written));
	
	return ATMO_Status_Success;
	
}


ATMO_Status_t BLEAccY_setValue(ATMO_Value_t *in, ATMO_Value_t *out) {

	
	// Convert to the desired write data type
	ATMO_Value_t convertedValue;
	ATMO_InitValue(&convertedValue);
	ATMO_CreateValueConverted(&convertedValue, ATMO_PROPERTY(BLEAccY, readDataType), in);

	ATMO_BLE_GATTSSetCharacteristic(
		ATMO_PROPERTY(BLEAccY, instance),
		ATMO_VARIABLE(BLEAccY, bleCharacteristicHandle),
		convertedValue.size, 
		(uint8_t *)convertedValue.data,
		NULL);
	
	ATMO_FreeValue(&convertedValue);
		
	return ATMO_Status_Success;
	
}


ATMO_Status_t BLEAccY_written(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_CreateValueConverted(out, ATMO_PROPERTY(BLEAccY, writeDataType), in);
	return ATMO_Status_Success;
	
}


ATMO_Status_t BLEAccY_subscibed(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t BLEAccY_unsubscribed(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t BLEAccZ_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t BLEAccZ_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_BLE_GATTSAddService(
		ATMO_PROPERTY(BLEAccZ, instance),
		&ATMO_VARIABLE(BLEAccZ, bleServiceHandle), 
		ATMO_PROPERTY(BLEAccZ, bleServiceUuid));
	
	uint8_t property = 0;
	uint8_t permission = 0;
	
	property |= ATMO_PROPERTY(BLEAccZ, read) ? ATMO_BLE_Property_Read : 0;
	property |= ATMO_PROPERTY(BLEAccZ, write) ? ATMO_BLE_Property_Write : 0;
	property |= ATMO_PROPERTY(BLEAccZ, notify) ? ATMO_BLE_Property_Notify : 0;

	permission |= ATMO_PROPERTY(BLEAccZ, read) ? ATMO_BLE_Permission_Read : 0;
	permission |= ATMO_PROPERTY(BLEAccZ, write) ? ATMO_BLE_Permission_Write : 0;

	ATMO_DATATYPE types[3] = {ATMO_PROPERTY(BLEAccZ, writeDataType), ATMO_PROPERTY(BLEAccZ, readDataType), ATMO_PROPERTY(BLEAccZ, notifyDataType)};
	
	ATMO_BLE_GATTSAddCharacteristic(
		ATMO_PROPERTY(BLEAccZ, instance),
		&ATMO_VARIABLE(BLEAccZ, bleCharacteristicHandle), 
		ATMO_VARIABLE(BLEAccZ, bleServiceHandle), 
		ATMO_PROPERTY(BLEAccZ, bleCharacteristicUuid), 
		property, permission, ATMO_GetMaxValueSize(3, 64, types));
	
	ATMO_BLE_GATTSRegisterCharacteristicAbilityHandle(
		ATMO_PROPERTY(BLEAccZ, instance),
		ATMO_VARIABLE(BLEAccZ, bleCharacteristicHandle), 
		ATMO_BLE_Characteristic_Written, 
		ATMO_ABILITY(BLEAccZ, written));
	
	return ATMO_Status_Success;
	
}


ATMO_Status_t BLEAccZ_setValue(ATMO_Value_t *in, ATMO_Value_t *out) {

	
	// Convert to the desired write data type
	ATMO_Value_t convertedValue;
	ATMO_InitValue(&convertedValue);
	ATMO_CreateValueConverted(&convertedValue, ATMO_PROPERTY(BLEAccZ, readDataType), in);

	ATMO_BLE_GATTSSetCharacteristic(
		ATMO_PROPERTY(BLEAccZ, instance),
		ATMO_VARIABLE(BLEAccZ, bleCharacteristicHandle),
		convertedValue.size, 
		(uint8_t *)convertedValue.data,
		NULL);
	
	ATMO_FreeValue(&convertedValue);
		
	return ATMO_Status_Success;
	
}


ATMO_Status_t BLEAccZ_written(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_CreateValueConverted(out, ATMO_PROPERTY(BLEAccZ, writeDataType), in);
	return ATMO_Status_Success;
	
}


ATMO_Status_t BLEAccZ_subscibed(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t BLEAccZ_unsubscribed(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t BLELight_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t BLELight_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_BLE_GATTSAddService(
		ATMO_PROPERTY(BLELight, instance),
		&ATMO_VARIABLE(BLELight, bleServiceHandle), 
		ATMO_PROPERTY(BLELight, bleServiceUuid));
	
	uint8_t property = 0;
	uint8_t permission = 0;
	
	property |= ATMO_PROPERTY(BLELight, read) ? ATMO_BLE_Property_Read : 0;
	property |= ATMO_PROPERTY(BLELight, write) ? ATMO_BLE_Property_Write : 0;
	property |= ATMO_PROPERTY(BLELight, notify) ? ATMO_BLE_Property_Notify : 0;

	permission |= ATMO_PROPERTY(BLELight, read) ? ATMO_BLE_Permission_Read : 0;
	permission |= ATMO_PROPERTY(BLELight, write) ? ATMO_BLE_Permission_Write : 0;

	ATMO_DATATYPE types[3] = {ATMO_PROPERTY(BLELight, writeDataType), ATMO_PROPERTY(BLELight, readDataType), ATMO_PROPERTY(BLELight, notifyDataType)};
	
	ATMO_BLE_GATTSAddCharacteristic(
		ATMO_PROPERTY(BLELight, instance),
		&ATMO_VARIABLE(BLELight, bleCharacteristicHandle), 
		ATMO_VARIABLE(BLELight, bleServiceHandle), 
		ATMO_PROPERTY(BLELight, bleCharacteristicUuid), 
		property, permission, ATMO_GetMaxValueSize(3, 64, types));
	
	ATMO_BLE_GATTSRegisterCharacteristicAbilityHandle(
		ATMO_PROPERTY(BLELight, instance),
		ATMO_VARIABLE(BLELight, bleCharacteristicHandle), 
		ATMO_BLE_Characteristic_Written, 
		ATMO_ABILITY(BLELight, written));
	
	return ATMO_Status_Success;
	
}


ATMO_Status_t BLELight_setValue(ATMO_Value_t *in, ATMO_Value_t *out) {

	
	// Convert to the desired write data type
	ATMO_Value_t convertedValue;
	ATMO_InitValue(&convertedValue);
	ATMO_CreateValueConverted(&convertedValue, ATMO_PROPERTY(BLELight, readDataType), in);

	ATMO_BLE_GATTSSetCharacteristic(
		ATMO_PROPERTY(BLELight, instance),
		ATMO_VARIABLE(BLELight, bleCharacteristicHandle),
		convertedValue.size, 
		(uint8_t *)convertedValue.data,
		NULL);
	
	ATMO_FreeValue(&convertedValue);
		
	return ATMO_Status_Success;
	
}


ATMO_Status_t BLELight_written(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_CreateValueConverted(out, ATMO_PROPERTY(BLELight, writeDataType), in);
	return ATMO_Status_Success;
	
}


ATMO_Status_t BLELight_subscibed(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t BLELight_unsubscribed(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t LessLightLevel_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t LessLightLevel_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t LessLightLevel_evaluate(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_BOOL_t conditionTrue = false;

	// Convert property to same type as input
	ATMO_Value_t targetStr;
	ATMO_Value_t targetNum;
	
	ATMO_InitValue(&targetStr);
	ATMO_InitValue(&targetNum);
	ATMO_CreateValueString(&targetStr, ATMO_PROPERTY(LessLightLevel, target));
	ATMO_CreateValueConverted(&targetNum, in->type, &targetStr);
	
	if(ATMO_CompareValues(in, &targetNum, ATMO_PROPERTY(LessLightLevel, condition), &conditionTrue) != ATMO_Status_Success)
	{
		ATMO_Value_t value;
		ATMO_InitValue(&value);
		ATMO_TriggerHandler(ATMO_TRIGGER(LessLightLevel, invalidType), NULL);
		ATMO_FreeValue(&value);
		ATMO_FreeValue(&targetStr);
		ATMO_FreeValue(&targetNum);
		return ATMO_Status_Fail;
	}

	ATMO_FreeValue(&targetStr);
	ATMO_FreeValue(&targetNum);


	ATMO_Value_t value;
	ATMO_InitValue(&value);
	ATMO_CreateValueCopy(&value, in);
	ATMO_TriggerHandler(conditionTrue ? ATMO_TRIGGER(LessLightLevel, conditionTrue) : ATMO_TRIGGER(LessLightLevel, conditionFalse), &value);
	ATMO_FreeValue(&value);		

	return ATMO_Status_Success;
	
}


ATMO_Status_t GreatLightLevel_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t GreatLightLevel_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t GreatLightLevel_evaluate(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_BOOL_t conditionTrue = false;

	// Convert property to same type as input
	ATMO_Value_t targetStr;
	ATMO_Value_t targetNum;
	
	ATMO_InitValue(&targetStr);
	ATMO_InitValue(&targetNum);
	ATMO_CreateValueString(&targetStr, ATMO_PROPERTY(GreatLightLevel, target));
	ATMO_CreateValueConverted(&targetNum, in->type, &targetStr);
	
	if(ATMO_CompareValues(in, &targetNum, ATMO_PROPERTY(GreatLightLevel, condition), &conditionTrue) != ATMO_Status_Success)
	{
		ATMO_Value_t value;
		ATMO_InitValue(&value);
		ATMO_TriggerHandler(ATMO_TRIGGER(GreatLightLevel, invalidType), NULL);
		ATMO_FreeValue(&value);
		ATMO_FreeValue(&targetStr);
		ATMO_FreeValue(&targetNum);
		return ATMO_Status_Fail;
	}

	ATMO_FreeValue(&targetStr);
	ATMO_FreeValue(&targetNum);


	ATMO_Value_t value;
	ATMO_InitValue(&value);
	ATMO_CreateValueCopy(&value, in);
	ATMO_TriggerHandler(conditionTrue ? ATMO_TRIGGER(GreatLightLevel, conditionTrue) : ATMO_TRIGGER(GreatLightLevel, conditionFalse), &value);
	ATMO_FreeValue(&value);		

	return ATMO_Status_Success;
	
}


ATMO_Status_t Red1_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t Red1_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_GPIO_Config_t config;
	config.pinMode = ATMO_PROPERTY(Red1, mode);
	config.initialState = ATMO_PROPERTY(Red1, state);
	ATMO_GPIO_SetPinConfiguration(ATMO_PROPERTY(Red1, instance), ATMO_PROPERTY(Red1, pin), &config);

	#if ATMO_PROPERTY(Red1, interruptEnabled) == true
		ATMO_GPIO_RegisterInterruptCallback(
			ATMO_PROPERTY(Red1, instance), 
			ATMO_PROPERTY(Red1, pin), 
			ATMO_PROPERTY(Red1, interruptMode), 
			ATMO_INTERRUPT(Red1, interrupt));
	#endif
	
	return ATMO_Status_Success;
	
}


ATMO_Status_t Red1_setState(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_BOOL_t state;
	ATMO_GetBool(in, &state);
	ATMO_GPIO_SetPinState(ATMO_PROPERTY(Red1, instance), ATMO_PROPERTY(Red1, pin), (ATMO_GPIO_PinState_t)state);
	return ATMO_Status_Success;
	
}


ATMO_Status_t Red1_setPinHigh(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_GPIO_SetPinState(ATMO_PROPERTY(Red1, instance), ATMO_PROPERTY(Red1, pin), ATMO_GPIO_PinState_High);
	return ATMO_Status_Success;
	
}


ATMO_Status_t Red1_setPinLow(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_GPIO_SetPinState(ATMO_PROPERTY(Red1, instance), ATMO_PROPERTY(Red1, pin), ATMO_GPIO_PinState_Low);
	return ATMO_Status_Success;
	
}


ATMO_Status_t Red1_read(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_CreateValueBool(out, ATMO_GPIO_Read(ATMO_PROPERTY(Red1, instance), ATMO_PROPERTY(Red1, pin)));
	return ATMO_Status_Success;
	
}


ATMO_Status_t Red1_toggle(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_GPIO_Toggle(ATMO_PROPERTY(Red1, instance), ATMO_PROPERTY(Red1, pin));
	return ATMO_Status_Success;
	
}


ATMO_Status_t Red1_interrupt(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_CreateValueCopy(out, in);
	return ATMO_Status_Success;
	
}


ATMO_Status_t Green1_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t Green1_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_GPIO_Config_t config;
	config.pinMode = ATMO_PROPERTY(Green1, mode);
	config.initialState = ATMO_PROPERTY(Green1, state);
	ATMO_GPIO_SetPinConfiguration(ATMO_PROPERTY(Green1, instance), ATMO_PROPERTY(Green1, pin), &config);

	#if ATMO_PROPERTY(Green1, interruptEnabled) == true
		ATMO_GPIO_RegisterInterruptCallback(
			ATMO_PROPERTY(Green1, instance), 
			ATMO_PROPERTY(Green1, pin), 
			ATMO_PROPERTY(Green1, interruptMode), 
			ATMO_INTERRUPT(Green1, interrupt));
	#endif
	
	return ATMO_Status_Success;
	
}


ATMO_Status_t Green1_setState(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_BOOL_t state;
	ATMO_GetBool(in, &state);
	ATMO_GPIO_SetPinState(ATMO_PROPERTY(Green1, instance), ATMO_PROPERTY(Green1, pin), (ATMO_GPIO_PinState_t)state);
	return ATMO_Status_Success;
	
}


ATMO_Status_t Green1_setPinHigh(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_GPIO_SetPinState(ATMO_PROPERTY(Green1, instance), ATMO_PROPERTY(Green1, pin), ATMO_GPIO_PinState_High);
	return ATMO_Status_Success;
	
}


ATMO_Status_t Green1_setPinLow(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_GPIO_SetPinState(ATMO_PROPERTY(Green1, instance), ATMO_PROPERTY(Green1, pin), ATMO_GPIO_PinState_Low);
	return ATMO_Status_Success;
	
}


ATMO_Status_t Green1_read(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_CreateValueBool(out, ATMO_GPIO_Read(ATMO_PROPERTY(Green1, instance), ATMO_PROPERTY(Green1, pin)));
	return ATMO_Status_Success;
	
}


ATMO_Status_t Green1_toggle(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_GPIO_Toggle(ATMO_PROPERTY(Green1, instance), ATMO_PROPERTY(Green1, pin));
	return ATMO_Status_Success;
	
}


ATMO_Status_t Green1_interrupt(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_CreateValueCopy(out, in);
	return ATMO_Status_Success;
	
}


ATMO_Status_t Red2_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t Red2_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_GPIO_Config_t config;
	config.pinMode = ATMO_PROPERTY(Red2, mode);
	config.initialState = ATMO_PROPERTY(Red2, state);
	ATMO_GPIO_SetPinConfiguration(ATMO_PROPERTY(Red2, instance), ATMO_PROPERTY(Red2, pin), &config);

	#if ATMO_PROPERTY(Red2, interruptEnabled) == true
		ATMO_GPIO_RegisterInterruptCallback(
			ATMO_PROPERTY(Red2, instance), 
			ATMO_PROPERTY(Red2, pin), 
			ATMO_PROPERTY(Red2, interruptMode), 
			ATMO_INTERRUPT(Red2, interrupt));
	#endif
	
	return ATMO_Status_Success;
	
}


ATMO_Status_t Red2_setState(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_BOOL_t state;
	ATMO_GetBool(in, &state);
	ATMO_GPIO_SetPinState(ATMO_PROPERTY(Red2, instance), ATMO_PROPERTY(Red2, pin), (ATMO_GPIO_PinState_t)state);
	return ATMO_Status_Success;
	
}


ATMO_Status_t Red2_setPinHigh(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_GPIO_SetPinState(ATMO_PROPERTY(Red2, instance), ATMO_PROPERTY(Red2, pin), ATMO_GPIO_PinState_High);
	return ATMO_Status_Success;
	
}


ATMO_Status_t Red2_setPinLow(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_GPIO_SetPinState(ATMO_PROPERTY(Red2, instance), ATMO_PROPERTY(Red2, pin), ATMO_GPIO_PinState_Low);
	return ATMO_Status_Success;
	
}


ATMO_Status_t Red2_read(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_CreateValueBool(out, ATMO_GPIO_Read(ATMO_PROPERTY(Red2, instance), ATMO_PROPERTY(Red2, pin)));
	return ATMO_Status_Success;
	
}


ATMO_Status_t Red2_toggle(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_GPIO_Toggle(ATMO_PROPERTY(Red2, instance), ATMO_PROPERTY(Red2, pin));
	return ATMO_Status_Success;
	
}


ATMO_Status_t Red2_interrupt(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_CreateValueCopy(out, in);
	return ATMO_Status_Success;
	
}


ATMO_Status_t Green2_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t Green2_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_GPIO_Config_t config;
	config.pinMode = ATMO_PROPERTY(Green2, mode);
	config.initialState = ATMO_PROPERTY(Green2, state);
	ATMO_GPIO_SetPinConfiguration(ATMO_PROPERTY(Green2, instance), ATMO_PROPERTY(Green2, pin), &config);

	#if ATMO_PROPERTY(Green2, interruptEnabled) == true
		ATMO_GPIO_RegisterInterruptCallback(
			ATMO_PROPERTY(Green2, instance), 
			ATMO_PROPERTY(Green2, pin), 
			ATMO_PROPERTY(Green2, interruptMode), 
			ATMO_INTERRUPT(Green2, interrupt));
	#endif
	
	return ATMO_Status_Success;
	
}


ATMO_Status_t Green2_setState(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_BOOL_t state;
	ATMO_GetBool(in, &state);
	ATMO_GPIO_SetPinState(ATMO_PROPERTY(Green2, instance), ATMO_PROPERTY(Green2, pin), (ATMO_GPIO_PinState_t)state);
	return ATMO_Status_Success;
	
}


ATMO_Status_t Green2_setPinHigh(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_GPIO_SetPinState(ATMO_PROPERTY(Green2, instance), ATMO_PROPERTY(Green2, pin), ATMO_GPIO_PinState_High);
	return ATMO_Status_Success;
	
}


ATMO_Status_t Green2_setPinLow(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_GPIO_SetPinState(ATMO_PROPERTY(Green2, instance), ATMO_PROPERTY(Green2, pin), ATMO_GPIO_PinState_Low);
	return ATMO_Status_Success;
	
}


ATMO_Status_t Green2_read(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_CreateValueBool(out, ATMO_GPIO_Read(ATMO_PROPERTY(Green2, instance), ATMO_PROPERTY(Green2, pin)));
	return ATMO_Status_Success;
	
}


ATMO_Status_t Green2_toggle(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_GPIO_Toggle(ATMO_PROPERTY(Green2, instance), ATMO_PROPERTY(Green2, pin));
	return ATMO_Status_Success;
	
}


ATMO_Status_t Green2_interrupt(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_CreateValueCopy(out, in);
	return ATMO_Status_Success;
	
}

//FOOTER START

//FOOTER END

