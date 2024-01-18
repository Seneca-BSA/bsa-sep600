// **************************************************************************
// 
// Author: Jacky Lau, 01/2024
// Adapted from Petr Olivka, 02/2022
//
// **************************************************************************

#include "mbed.h"

DigitalOut g_led_PTB22( PTB22, 0 );

DigitalIn g_but_PTA4( PTA4 );

int main()
{
	printf( "Program started!\r\n" );

	while ( 1 )
	{
		g_led_PTB22 = !g_led_PTB22;	// invert current state

		wait_us( 500000 );			// delay

		while ( !g_but_PTA4 ); // stop blinking
	}
}
