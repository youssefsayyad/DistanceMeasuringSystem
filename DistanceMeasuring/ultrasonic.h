/******************************************************************************
 *
 * Module: Ultrasonic Sensor
 *
 * File Name: ultrasonic.h
 *
 * Description: Header file for the Ultrasonic driver
 *
 * Author: Youssef ElSayyad
 *
 *******************************************************************************/


#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_

#include "std_types.h"

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/
#define TRIGGER_PORTID PORTB_ID

#define TRIGGER_PINID  PIN5_ID

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
/*
 * Description : Initialize the ICU driver as required.
 * Setup the ICU call back function.
 * Setup the direction for the trigger pin as output pin through the GPIO driver
 */
void Ultrasonic_init(void);

/*
 * Description : Send the Trigger pulse to the ultrasonic
 */
void Ultrasonic_Trigger(void);

/*
 * Description : Send the trigger pulse by using Ultrasonic_Trigger function..
 * Start the measurements by the ICU from this moment
 * Return The measured distance in Centimeter
 */
uint16 Ultrasonic_readDistance(void);

/*
 * Description : Send the trigger pulse by using Ultrasonic_Trigger function..
 * Start the measurements by the ICU from this moment
 * Return The measured distance in Centimeter
 */
void Ultrasonic_edgeProcessing(void);
#endif /* ULTRASONIC_H_ */
