#ifndef _ATMOSPHERE_H_
#define _ATMOSPHERE_H_

#include "../atmo/core.h"
#include "../app_src/pin_mapping.h"
#include "../app_src/atmosphere_globals.h"
#include "../app_src/atmosphere_peripherals.h"
#include "../ringbuffer/atmosphere_ringbuffer.h"
#include "../gpio/gpio.h"
#include "../i2c/i2c.h"
#include "../spi/spi.h"
#include "../adc/adc.h"
#include "../nfc/nfc.h"
#include "../block/block.h"
#include "../filesystem/filesystem.h"
#include "../ble/ble.h"
#include "../pwm/pwm.h"
#include "../interval/interval.h"
#include "../cloud/cloud.h"
#include "../wifi/wifi.h"
#include "../uart/uart.h"
#include "../datetime/datetime.h"
#include "../cloud/cloud_tcp.h"
#include "../cloud/cloud_ble.h"
#include "../cloud/cloud_config.h"
#include "../cloud/cloud_uart.h"
#include "../cellular/cellular.h"
#include "../http/http.h"
#include "../app_src/atmo_config.h"
#include "../atmo/tinyprintf.h"
#include "../counter/counter_atmo.h"
#include "../tcpclient/tcpclient.h"

#endif