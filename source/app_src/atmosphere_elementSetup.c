#include "atmosphere_elementSetup.h"

#ifdef __cplusplus
	extern "C"{
#endif

void ATMO_ElementSetup() {
	ATMO_Value_t inOutValue;
	ATMO_InitValue(&inOutValue);
	Interval_setup(&inOutValue, &inOutValue);
	BME680_setup(&inOutValue, &inOutValue);
	EmbeddedBHI160_setup(&inOutValue, &inOutValue);
	NOA1305AmbientLight_setup(&inOutValue, &inOutValue);
	BLETemp_setup(&inOutValue, &inOutValue);
	BLEPres_setup(&inOutValue, &inOutValue);
	BLEHumid_setup(&inOutValue, &inOutValue);
	BLEAccX_setup(&inOutValue, &inOutValue);
	BLEAccY_setup(&inOutValue, &inOutValue);
	BLEAccZ_setup(&inOutValue, &inOutValue);
	BLELight_setup(&inOutValue, &inOutValue);
	LessLightLevel_setup(&inOutValue, &inOutValue);
	GreatLightLevel_setup(&inOutValue, &inOutValue);
	Red1_setup(&inOutValue, &inOutValue);
	Green1_setup(&inOutValue, &inOutValue);
	Red2_setup(&inOutValue, &inOutValue);
	Green2_setup(&inOutValue, &inOutValue);
}

#ifdef __cplusplus
}
#endif
