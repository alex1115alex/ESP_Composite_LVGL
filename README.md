# ESP32 + LovyanGFX's CVBS Renderer + LVGL Demo

### What is this?

In long: This is a demo of LVGL's display library being used in conjuction with LovyanGFX's CVBS renderer in order to
display high-quality GUIs over CVBS from an ESP32. 

In short: ESP32 outputs cool GUIs over composite video.

### Videos

[OSSG Display Evaluation Part 1: Sony ECX336C](https://www.youtube.com/watch?v=byiO34u9l4k)

### Screenshots

![homescreen demo](https://user-images.githubusercontent.com/27019702/196005017-4ba10187-060d-471f-8913-da1ae432f178.png)

![screenie](https://user-images.githubusercontent.com/27019702/196005026-6f2a9427-99b0-42b2-8f14-438de564b76f.png)

### Photos

![homescreen display](https://user-images.githubusercontent.com/27019702/196006506-c2e32cde-c04e-4bd9-b333-d426215004b3.png)

#### Why (a brief backstory)?

Some months ago I built the [Telescope](https://github.com/alex1115alex/wearables-telescope), my first real attempt at smart glasses. It was powered by an ESP32 and output to a microdisplay over a composite video signal. 

Unfortunately, the display library used, [ESP_8_BIT_Composite](https://github.com/Roger-random/ESP_8_BIT_composite), had some serious limitations, notably a locked 256x240 resolution, only 8-bit color support, and the UI being written with the [AdafruitGFX library](https://github.com/adafruit/Adafruit-GFX-Library).

We would obviously need something better for the [Open Source Smart Glasses](https://smartglasses.community/open-source-smart-glasses/) project, which is why this was created. Started as a fork off [Sukesh-Ak's library](https://github.com/sukesh-ak/ESP32-LVGL8x-SDSPI), this code allows us to rapidly develop high-quality GUIs in LVGL and display them over composite video from a mere ESP32. Pretty cool, huh?

### TODO

- Get SPIRAM working (required to enable display+wifi at the same time, but LovyanGFX freaks out when it's enabled)
- Minimize RAM usage in general
- Minimize UI code (some unneeded stuff in gui/)
- Break UI code out into functions that can be called by OSSG firmware
