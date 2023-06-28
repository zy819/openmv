static const char fresh_main_py[] =
"# Blinky example\n"
"\n"
"import time\n"
"from machine import Pin\n"
"\n"
"led = Pin('LED_BLUE', Pin.OUT)\n"
"\n"
"while (True):\n"
"   led.on()\n"
"   time.sleep_ms(150)\n"
"   led.off()\n"
"   time.sleep_ms(100)\n"
"   led.on()\n"
"   time.sleep_ms(150)\n"
"   led.off()\n"
"   time.sleep_ms(600)\n"
;
