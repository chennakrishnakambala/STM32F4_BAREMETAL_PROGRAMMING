/*
 * 
 *
 *  Created on: Jan 13, 2024
 *      Author: chennakrishna
 */



#include <stdio.h>
#include <stdint.h>
#include "stm32f4xx.h"
#include "uart.h"




int main(void)
{


	uar2_tx_init();

	while(1)
	{
		printf("Hello from STM32F4........\n\r");
	}

}





