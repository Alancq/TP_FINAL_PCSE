/*
 * API_uart.h
 *
 *  Created on: Apr 1, 2023
 *      Author: alan
 */

#ifndef API_INC_API_UART_H_
#define API_INC_API_UART_H_
#include <stdbool.h>
#include <stdint.h>
#include "stm32f7xx_hal.h"
#include "stm32f7xx_hal_uart.h"
#include "string.h"
#include "assert.h"
typedef bool bool_t;

static UART_HandleTypeDef huart;
bool_t uartInit();

void uartSendString(uint8_t * pstring);

void uartSendStringSize(uint8_t * pstring, uint16_t size);

void uartReceiveStringSize(uint8_t * pstring, uint16_t size);

void uartSendFloat(float value);

bool_t uartReceiveChar(uint8_t *pchar);




#endif /* API_INC_API_UART_H_ */
