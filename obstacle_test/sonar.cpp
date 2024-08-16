#include "HC-SR04.h"
#include <wiringPi.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <iostream>
int trig = 4;
int echo = 17;
int main() {



while (1)
{




std::cout <<" echo : "<<'\n';
 HCSR04Sensor HCSR04(4,17);
 HCSR04.Distance();

}}