#ifndef __CONFIG_H__
#define __CONFIG_H__

#define BUT1_PORT 2																// Port for Button 1
#define BUT1_PIN 9																// Bit on port forButton 1
#define BUT2_PORT 1																// Port for Button 2
#define BUT2_PIN 4																// Bit on port forButton 2

/* Clock Definition */
#define SYSTEM_CRYSTAL_CLOCK 12000000
#define SYSTEM_CORE_CLOCK (SYSTEM_CRYSTAL_CLOCK*6)

#endif/*__CONFIG_H__*/
