
#ifndef ATMO_ELEMENT_NAMES_H
#define ATMO_ELEMENT_NAMES_H

#ifdef __cplusplus
	extern "C"{
#endif

#define ATMO_ELEMENT_NAME(ELEMENT) ATMO_ ## ELEMENT ## _NAME

#define ATMO_Interval_NAME "Interval"
#define ATMO_BME680_NAME "BME680"
#define ATMO_EmbeddedBHI160_NAME "EmbeddedBHI160"
#define ATMO_NOA1305AmbientLight_NAME "NOA1305AmbientLight"
#define ATMO_BLETemp_NAME "BLETemp"
#define ATMO_BLEPres_NAME "BLEPres"
#define ATMO_BLEHumid_NAME "BLEHumid"
#define ATMO_BLEAccX_NAME "BLEAccX"
#define ATMO_BLEAccY_NAME "BLEAccY"
#define ATMO_BLEAccZ_NAME "BLEAccZ"
#define ATMO_BLELight_NAME "BLELight"
#define ATMO_LessLightLevel_NAME "LessLightLevel"
#define ATMO_GreatLightLevel_NAME "GreatLightLevel"
#define ATMO_Red1_NAME "Red1"
#define ATMO_Green1_NAME "Green1"
#define ATMO_Red2_NAME "Red2"
#define ATMO_Green2_NAME "Green2"

#ifdef __cplusplus
}
#endif
#endif
