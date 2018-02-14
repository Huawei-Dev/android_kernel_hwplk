#ifndef HI_ARMIP_UART_H
#define HI_ARMIP_UART_H 
#include "soc_memmap.h"
#include "soc_interrupts.h"
#define UART_REGOFFSET_RBR 0x00
#define UART_REGOFFSET_THR 0x00
#define UART_REGOFFSET_FR 0x18
#define UART_REGOFFSET_IBRD 0x24
#define UART_REGOFFSET_CR 0x30
#define UART_REGOFFSET_IFLS 0x34
#define UART_REGOFFSET_ICR 0x44
#define UART_REGOFFSET_LCR_H 0x2C
#define UART_REGOFFSET_IMSC 0x38
#define UART_REGOFFSET_MIS 0x40
#define UART_IFLS_DEF_SET 0x00
#define UART_IFLS_RX_DEF_ONETWO 0x10
#define UART_ARM_LCR_DLS_8BITS 0x60
#define UART_DISABLE 0x00
#define UART_ENABLE 0x01
#define UART_TX_ENABLE 0x100
#define UART_RX_ENABLE 0x200
#define UART_IER_IRQ_CLR 0xFF
#define UART_LCR_ODD 0x02
#define UART_LCR_DEFAULTVALUE 0x00
#define UART_LCR_FIFO_ENABLE 0x10
#define UART_LCR_FIFO_DISABLE 0x00
#define UART_FR_UART_BUSY 0x08
#define UART_FR_RX_FIFO_EMP 0x10
#define UART_FR_TX_FIFO_FULL 0x20
#define UART_FR_RX_FIFO_FULL 0x40
#define UART_FR_TX_FIFO_EMP 0x80
#define UART_RX_IRQ_ENABLE 0x10
#define UART_TX_IRQ_ENABLE 0x20
#define UART_TIMEOUT_IRQ_ENABLE 0x40
#define UART_ALL_IRQ_DISABLE 0x00
#define UART_RX_IRQ_CLEAR 0x10
#define UART_TIMEOUT_IRQ_CLEAR 0x40
#define UART_IIR_THR_INTERRUPT 0x20
#define UART_ARMIP_REV_VALID 0x10
#define UART_ARMIP_REV_TIMEOUT 0x40
#define UART_IRQ_MARK 0xf0
#endif