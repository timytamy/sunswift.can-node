/* ***********************************************
    File: scandal_config.h
    Scandal Configuration for CAN-NODE (Change me to your project name)
	 
	File name: scandal_config.h 
	Author: <Insert your name here>
	Date: 28/08/2011
    -------------------------------------------------------------------------- */  

#ifndef __SCANDAL_CONFIG__
#define __SCANDAL_CONFIG__

#include <scandal/devices.h>

/* Define the type of device being used */
#ifdef THIS_DEVICE_TYPE
#error "Device type multiply defined (redefined to MINING2)"
#endif
#define THIS_DEVICE_TYPE       TEMPLATE

/* Number of channels */
#define NUM_IN_CHANNELS		TEMPLATE_NUM_IN_CHANNELS
#define NUM_OUT_CHANNELS 	TEMPLATE_NUM_OUT_CHANNELS

/* Size of send/receive buffers */
#define CAN_TX_BUFFER_BITS	4
#define CAN_TX_BUFFER_MASK	0x0F
#define CAN_TX_BUFFER_SIZE 	(1<<CAN_TX_BUFFER_BITS)

#define CAN_RX_BUFFER_BITS	4
#define CAN_RX_BUFFER_MASK	0x0F
#define CAN_RX_BUFFER_SIZE	(1<<CAN_RX_BUFFER_BITS)

#define DISABLE_WATCHDOG_TIMER                  0
#define WATCHDOG_TIMER_PERIOD                   5000 //milliseconds
#define DISABLE_CONFIG_MESSAGES					0
#define DISABLE_USER_CONFIG_MESSAGES			0
#define DISABLE_TIMESYNC_MESSAGES				0
#define DISABLE_COMMAND_MESSAGES				0

#define SCANDAL_ADDRESS_OVERRIDE_ENABLE			0 //Set to 1 to enable address overrides
#define SCANDAL_ADDRESS_OVERRIDE				0 //Pick the address you want for the node here

/* Enables overrides for scandal in channels, Enabling makes the override address and channel set below active */
#define SCANDAL_IN_CHANNEL_0_OVERRIDE_ENABLE	0
#define SCANDAL_IN_CHANNEL_1_OVERRIDE_ENABLE	0
#define SCANDAL_IN_CHANNEL_2_OVERRIDE_ENABLE	0
#define SCANDAL_IN_CHANNEL_3_OVERRIDE_ENABLE	0
#define SCANDAL_IN_CHANNEL_4_OVERRIDE_ENABLE	0
#define SCANDAL_IN_CHANNEL_5_OVERRIDE_ENABLE	0
#define SCANDAL_IN_CHANNEL_6_OVERRIDE_ENABLE	0
#define SCANDAL_IN_CHANNEL_7_OVERRIDE_ENABLE	0
#define SCANDAL_IN_CHANNEL_8_OVERRIDE_ENABLE	0
#define SCANDAL_IN_CHANNEL_9_OVERRIDE_ENABLE	0
#define SCANDAL_IN_CHANNEL_10_OVERRIDE_ENABLE	0
#define SCANDAL_IN_CHANNEL_11_OVERRIDE_ENABLE	0
#define SCANDAL_IN_CHANNEL_12_OVERRIDE_ENABLE	0
#define SCANDAL_IN_CHANNEL_13_OVERRIDE_ENABLE	0
#define SCANDAL_IN_CHANNEL_14_OVERRIDE_ENABLE	0
#define SCANDAL_IN_CHANNEL_15_OVERRIDE_ENABLE	0
#define SCANDAL_IN_CHANNEL_16_OVERRIDE_ENABLE	0

/* Sets the address and channel for each in channel, These only do something if the override is enabled above */
#define SCANDAL_IN_CHANNEL_0_OVERRIDE_ADDRESS	20
#define SCANDAL_IN_CHANNEL_0_OVERRIDE_CHANNEL	STEERINGWHEEL_LH_IND

#define SCANDAL_IN_CHANNEL_1_OVERRIDE_ADDRESS	20
#define SCANDAL_IN_CHANNEL_1_OVERRIDE_CHANNEL	STEERINGWHEEL_RH_IND

#define SCANDAL_IN_CHANNEL_2_OVERRIDE_ADDRESS	20
#define SCANDAL_IN_CHANNEL_2_OVERRIDE_CHANNEL	STEERINGWHEEL_HORN

#define SCANDAL_IN_CHANNEL_3_OVERRIDE_ADDRESS	0
#define SCANDAL_IN_CHANNEL_3_OVERRIDE_CHANNEL	0

#define SCANDAL_IN_CHANNEL_4_OVERRIDE_ADDRESS	0
#define SCANDAL_IN_CHANNEL_4_OVERRIDE_CHANNEL	0

#define SCANDAL_IN_CHANNEL_5_OVERRIDE_ADDRESS	0
#define SCANDAL_IN_CHANNEL_5_OVERRIDE_CHANNEL	0

#define SCANDAL_IN_CHANNEL_6_OVERRIDE_ADDRESS	0
#define SCANDAL_IN_CHANNEL_6_OVERRIDE_CHANNEL	0

#define SCANDAL_IN_CHANNEL_7_OVERRIDE_ADDRESS	0
#define SCANDAL_IN_CHANNEL_7_OVERRIDE_CHANNEL	0

#define SCANDAL_IN_CHANNEL_8_OVERRIDE_ADDRESS	0
#define SCANDAL_IN_CHANNEL_8_OVERRIDE_CHANNEL	0

#define SCANDAL_IN_CHANNEL_9_OVERRIDE_ADDRESS	0
#define SCANDAL_IN_CHANNEL_9_OVERRIDE_CHANNEL	0

#define SCANDAL_IN_CHANNEL_10_OVERRIDE_ADDRESS	0
#define SCANDAL_IN_CHANNEL_10_OVERRIDE_CHANNEL	0

#define SCANDAL_IN_CHANNEL_11_OVERRIDE_ADDRESS	0
#define SCANDAL_IN_CHANNEL_11_OVERRIDE_CHANNEL	0

#define SCANDAL_IN_CHANNEL_12_OVERRIDE_ADDRESS	0
#define SCANDAL_IN_CHANNEL_12_OVERRIDE_CHANNEL	0

#define SCANDAL_IN_CHANNEL_13_OVERRIDE_ADDRESS	0
#define SCANDAL_IN_CHANNEL_13_OVERRIDE_CHANNEL	0

#define SCANDAL_IN_CHANNEL_14_OVERRIDE_ADDRESS	0
#define SCANDAL_IN_CHANNEL_14_OVERRIDE_CHANNEL	0

#define SCANDAL_IN_CHANNEL_15_OVERRIDE_ADDRESS	0
#define SCANDAL_IN_CHANNEL_15_OVERRIDE_CHANNEL	0

#define SCANDAL_IN_CHANNEL_16_OVERRIDE_ADDRESS	0
#define SCANDAL_IN_CHANNEL_16_OVERRIDE_CHANNEL	0

#endif
