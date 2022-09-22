//#pragma once
using namespace std;
#include <stdio.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include "sdkconfig.h"
#include <iostream>
#include <driver/i2c.h>
#include <iomanip>

#define LGFX_USE_V1
#define LGFX_CVBS
#define LGFX_ESP_WROVER_KIT
#include "user_setting.hpp"

LGFX gfx;
bool hasPrinted = false;

void printHelloWorld();
void mainLoop();

extern "C" void app_main()
{
    cout << "INIT NOW\n";
    gfx.init();

    printHelloWorld();
    while(true){
        mainLoop();
    }
}

void mainLoop(){
    //gfx.fillRect(40, 0, gfx.width()-120, gfx.height(), 0x0FC);
    
}
       
void printHelloWorld(){
    gfx.fillRect(0, 0, gfx.width(), gfx.height(), 0x0FC);
    double sizes[] = {1, 1.5, 2, 2.5, 3};
    gfx.setTextColor(0xFFFF);
    
    gfx.setTextSize(2);
    string toPrint = "Res: " + to_string(gfx.width()).substr(0,3) + " * " + to_string(gfx.height()).substr(0,3);
    const char*str1 = toPrint.c_str();
    gfx.println(str1);

    for(int i = 0; i < sizeof(sizes); i++)
    {
        cout << "PrintLoop" << endl;
        gfx.setTextSize(sizes[i]);
        string toPrint = "Size " + to_string(sizes[i]).substr(0,3) + ": Great Scott!";
        const char*str = toPrint.c_str();
        gfx.println(str);
    }
}
