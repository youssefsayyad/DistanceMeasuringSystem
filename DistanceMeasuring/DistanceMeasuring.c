/******************************************************************************
 *
 * Module: Distance Measuring Application
 *
 * File Name: Distance Measuring.c
 *
 * Description: source file for the Distance Measuring Application
 *
 * Author: Youssef ElSayyad
 *
 *******************************************************************************/
#include "std_types.h"
#include "ultrasonic.h"
#include "lcd.h"
int main() {
	uint16 distance = 0;
	/* Initialize the LCD Driver*/
	LCD_init();
	/* Initialize the Ultrasonic Driver*/
	Ultrasonic_init();
	LCD_displayString("Distance =   cm ");
	while (1) {
		distance = Ultrasonic_readDistance();
		LCD_moveCursor(0, 11);
		/*Displaying The Calculated Distance by the Ultrasonic on the LCD*/
		LCD_intgerToString(distance);
	}
}

