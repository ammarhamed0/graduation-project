/*
 * UART.h
 *
 * Created: 29/08/2020 06:13:51 م
 *  Author: Ali
 */ 


#ifndef UART_H_
#define UART_H_

#include "DIO.h"

void UART_Init(void);

void UART_Tx(uint8 );

void UART_TxString(uint8* str);

uint8 UART_Rx(void);





#endif /* UART_H_ */