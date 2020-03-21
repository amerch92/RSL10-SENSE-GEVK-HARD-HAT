#include "../app_src/atmosphere_platform.h"
#include "ble_onsemi_db.h"

#define _ATMO_BLE_SERVICE_UUID_BLETemp 0x55, 0xae, 0x4c, 0x48, 0x52, 0xdb, 0x2d, 0x87, 0x12, 0x4b, 0xef, 0xa3, 0x4d, 0x93, 0x26, 0x5a
#define _ATMO_BLE_CHARACTERISTIC_UUID_BLETemp 0x56, 0xae, 0x4c, 0x48, 0x52, 0xdb, 0x2d, 0x87, 0x12, 0x4b, 0xef, 0xa3, 0x4d, 0x93, 0x26, 0x5a
static uint8_t _ATMO_BLE_CHARACTERISTIC_BUF_BLETemp[4] = {0};
#define _ATMO_BLE_CHARACTERISTIC_UUID_BLEPres 0x57, 0xae, 0x4c, 0x48, 0x52, 0xdb, 0x2d, 0x87, 0x12, 0x4b, 0xef, 0xa3, 0x4d, 0x93, 0x26, 0x5a
static uint8_t _ATMO_BLE_CHARACTERISTIC_BUF_BLEPres[4] = {0};
#define _ATMO_BLE_CHARACTERISTIC_UUID_BLEHumid 0x58, 0xae, 0x4c, 0x48, 0x52, 0xdb, 0x2d, 0x87, 0x12, 0x4b, 0xef, 0xa3, 0x4d, 0x93, 0x26, 0x5a
static uint8_t _ATMO_BLE_CHARACTERISTIC_BUF_BLEHumid[4] = {0};
#define _ATMO_BLE_CHARACTERISTIC_UUID_BLEAccX 0x59, 0xae, 0x4c, 0x48, 0x52, 0xdb, 0x2d, 0x87, 0x12, 0x4b, 0xef, 0xa3, 0x4d, 0x93, 0x26, 0x5a
static uint8_t _ATMO_BLE_CHARACTERISTIC_BUF_BLEAccX[4] = {0};
#define _ATMO_BLE_CHARACTERISTIC_UUID_BLEAccY 0x5a, 0xae, 0x4c, 0x48, 0x52, 0xdb, 0x2d, 0x87, 0x12, 0x4b, 0xef, 0xa3, 0x4d, 0x93, 0x26, 0x5a
static uint8_t _ATMO_BLE_CHARACTERISTIC_BUF_BLEAccY[4] = {0};
#define _ATMO_BLE_CHARACTERISTIC_UUID_BLEAccZ 0x5b, 0xae, 0x4c, 0x48, 0x52, 0xdb, 0x2d, 0x87, 0x12, 0x4b, 0xef, 0xa3, 0x4d, 0x93, 0x26, 0x5a
static uint8_t _ATMO_BLE_CHARACTERISTIC_BUF_BLEAccZ[4] = {0};
#define _ATMO_BLE_CHARACTERISTIC_UUID_BLELight 0x5c, 0xae, 0x4c, 0x48, 0x52, 0xdb, 0x2d, 0x87, 0x12, 0x4b, 0xef, 0xa3, 0x4d, 0x93, 0x26, 0x5a
static uint8_t _ATMO_BLE_CHARACTERISTIC_BUF_BLELight[4] = {0};
#define _ATMO_BLE_SERVICE_UUID_undefined 0x2, 0xa4, 0x66, 0x96, 0xa5, 0xb0, 0xab, 0xab, 0x68, 0x43, 0x5e, 0x6b, 0xcf, 0x33, 0xe4, 0xbf
#define _ATMO_BLE_CHARACTERISTIC_UUID_undefined 0x2, 0xa4, 0x66, 0x96, 0xa5, 0xb0, 0xab, 0xab, 0x68, 0x43, 0x5f, 0x6b, 0xcf, 0x33, 0xe4, 0xbf
static uint8_t _ATMO_BLE_CHARACTERISTIC_BUF_undefined[64] = {0};
static uint8_t _ATMO_BLE_DeviceNameBuf[16] = {0};
static uint8_t _ATMO_BLE_Appearance[] = {0x00u, 0x03u, };
static uint8_t _ATMO_BLE_ServiceChanged[] = {0x01, 0xFF};
static uint8_t _ATMO_BLE_ServiceChangedDesc[2] = {0x0};
static uint8_t _ATMO_BLE_ProvData[64] = {0x0};
static uint8_t _ATMO_BLE_ProvDataDesc[] = {0x0, 0x00};
uint32_t _ATMO_ONSEMI_BLE_NumServices = 2;

static struct gattm_att_desc _ATMO_ONSEMI_BLE_Service_32[] = {
	ATT_DECL_CHAR(),
	ATT_DECL_CHAR_UUID_128({_ATMO_BLE_CHARACTERISTIC_UUID_BLETemp}, PERM(WRITE_REQ, ENABLE) | PERM(WRITE_COMMAND, ENABLE) | PERM(RD, ENABLE), 4),
	ATT_DECL_CHAR_CCC(),
	ATT_DECL_CHAR(),
	ATT_DECL_CHAR_UUID_128({_ATMO_BLE_CHARACTERISTIC_UUID_BLEPres}, PERM(WRITE_REQ, ENABLE) | PERM(WRITE_COMMAND, ENABLE) | PERM(RD, ENABLE), 4),
	ATT_DECL_CHAR_CCC(),
	ATT_DECL_CHAR(),
	ATT_DECL_CHAR_UUID_128({_ATMO_BLE_CHARACTERISTIC_UUID_BLEHumid}, PERM(WRITE_REQ, ENABLE) | PERM(WRITE_COMMAND, ENABLE) | PERM(RD, ENABLE), 4),
	ATT_DECL_CHAR_CCC(),
	ATT_DECL_CHAR(),
	ATT_DECL_CHAR_UUID_128({_ATMO_BLE_CHARACTERISTIC_UUID_BLEAccX}, PERM(WRITE_REQ, ENABLE) | PERM(WRITE_COMMAND, ENABLE) | PERM(RD, ENABLE), 4),
	ATT_DECL_CHAR_CCC(),
	ATT_DECL_CHAR(),
	ATT_DECL_CHAR_UUID_128({_ATMO_BLE_CHARACTERISTIC_UUID_BLEAccY}, PERM(WRITE_REQ, ENABLE) | PERM(WRITE_COMMAND, ENABLE) | PERM(RD, ENABLE), 4),
	ATT_DECL_CHAR_CCC(),
	ATT_DECL_CHAR(),
	ATT_DECL_CHAR_UUID_128({_ATMO_BLE_CHARACTERISTIC_UUID_BLEAccZ}, PERM(WRITE_REQ, ENABLE) | PERM(WRITE_COMMAND, ENABLE) | PERM(RD, ENABLE), 4),
	ATT_DECL_CHAR_CCC(),
	ATT_DECL_CHAR(),
	ATT_DECL_CHAR_UUID_128({_ATMO_BLE_CHARACTERISTIC_UUID_BLELight}, PERM(WRITE_REQ, ENABLE) | PERM(WRITE_COMMAND, ENABLE) | PERM(RD, ENABLE), 4),
	ATT_DECL_CHAR_CCC(),
};

static _ATMO_ONSEMI_BLE_Characteristic_t _ATMO_ONSEMI_BLE_Service_32_Desc[] = {
	{_ATMO_BLE_CHARACTERISTIC_BUF_BLETemp,4, 4, 33, {0}, {0}, {0}, {0}},
	{_ATMO_BLE_CHARACTERISTIC_BUF_BLEPres,4, 4, 36, {0}, {0}, {0}, {0}},
	{_ATMO_BLE_CHARACTERISTIC_BUF_BLEHumid,4, 4, 39, {0}, {0}, {0}, {0}},
	{_ATMO_BLE_CHARACTERISTIC_BUF_BLEAccX,4, 4, 42, {0}, {0}, {0}, {0}},
	{_ATMO_BLE_CHARACTERISTIC_BUF_BLEAccY,4, 4, 45, {0}, {0}, {0}, {0}},
	{_ATMO_BLE_CHARACTERISTIC_BUF_BLEAccZ,4, 4, 48, {0}, {0}, {0}, {0}},
	{_ATMO_BLE_CHARACTERISTIC_BUF_BLELight,4, 4, 51, {0}, {0}, {0}, {0}},
};

static struct gattm_att_desc _ATMO_ONSEMI_BLE_Service_54[] = {
	ATT_DECL_CHAR(),
	ATT_DECL_CHAR_UUID_128({_ATMO_BLE_CHARACTERISTIC_UUID_undefined}, PERM(WRITE_REQ, ENABLE) | PERM(WRITE_COMMAND, ENABLE) | PERM(RD, ENABLE), 64),
	ATT_DECL_CHAR_CCC(),
};

static _ATMO_ONSEMI_BLE_Characteristic_t _ATMO_ONSEMI_BLE_Service_54_Desc[] = {
	{_ATMO_BLE_CHARACTERISTIC_BUF_undefined,64, 64, 55, {0}, {0}, {0}, {0}},
};

_ATMO_ONSEMI_BLE_Service_t _ATMO_ONSEMI_BLE_Services[] = {
	{
		{{0x55, 0xae, 0x4c, 0x48, 0x52, 0xdb, 0x2d, 0x87, 0x12, 0x4b, 0xef, 0xa3, 0x4d, 0x93, 0x26, 0x5a}, ATMO_UUID_Type_128_Bit, ATMO_ENDIAN_Type_Little},
		7,
		32,
		_ATMO_ONSEMI_BLE_Service_32_Desc,
		_ATMO_ONSEMI_BLE_Service_32
},
	{
		{{0x2, 0xa4, 0x66, 0x96, 0xa5, 0xb0, 0xab, 0xab, 0x68, 0x43, 0x5e, 0x6b, 0xcf, 0x33, 0xe4, 0xbf}, ATMO_UUID_Type_128_Bit, ATMO_ENDIAN_Type_Little},
		1,
		54,
		_ATMO_ONSEMI_BLE_Service_54_Desc,
		_ATMO_ONSEMI_BLE_Service_54
},
};