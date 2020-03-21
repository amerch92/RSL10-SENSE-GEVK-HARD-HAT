#ifndef ATMO_BME680_H_
#define ATMO_BME680_H_

#include "../app_src/atmosphere_platform.h"

typedef struct
{
	ATMO_DriverInstanceHandle_t i2cInstance;
	uint8_t i2cAddr;
} BME680_Config_t;

typedef enum
{
	BME680_Status_Success = 0,
	BME680_Status_Fail
} BME680_Status_t;

BME680_Status_t BME680_Init( BME680_Config_t *config );

BME680_Status_t BME680_GetPressure( float *pressureHpa );

BME680_Status_t BME680_GetTempData( float *tempC );

BME680_Status_t BME680_GetHumidity( float *humidity );

BME680_Status_t BME680_GetGasRes( float *gas_resistance );

#endif
