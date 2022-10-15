/*
//#pragma once
using namespace std;
#include <stdio.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include "sdkconfig.h"
#include <iostream>
#include <driver/i2c.h>
#include <iomanip>
#include "esp_log.h"
#include "esp_vfs_fat.h"
#include "sdmmc_cmd.h"
*/ 

#include "displaymanager.hpp"

extern "C" { void app_main(); }
void app_main(void)
{
    displayStart();
    displayEnterVoiceCommandStep1();
}