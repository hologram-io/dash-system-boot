/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : spiComEZPort.h
**     Project     : dash_system_boot
**     Processor   : MKL17Z256VFM4
**     Component   : fsl_spi
**     Version     : Component 1.2.0, Driver 01.00, CPU db: 3.00.000
**     Repository  : KSDK 1.2.0
**     Compiler    : GNU C Compiler
**     Date/Time   : 2016-07-06, 13:28, # CodeGen: 0
**     Contents    :
**         SPI_DRV_IRQHandler              - void SPI_DRV_IRQHandler(uint32_t instance);
**         SPI_DRV_MasterInit              - spi_status_t SPI_DRV_MasterInit(uint32_t instance,spi_master_state_t *...
**         SPI_DRV_MasterDeinit            - spi_status_t SPI_DRV_MasterDeinit(uint32_t instance);
**         SPI_DRV_MasterConfigureBus      - void SPI_DRV_MasterConfigureBus(uint32_t instance,const...
**         SPI_DRV_MasterTransferBlocking  - spi_status_t SPI_DRV_MasterTransferBlocking(uint32_t instance,const...
**         SPI_DRV_MasterTransfer          - spi_status_t SPI_DRV_MasterTransfer(uint32_t instance,const...
**         SPI_DRV_MasterGetTransferStatus - spi_status_t SPI_DRV_MasterGetTransferStatus(uint32_t instance,uint32_t *...
**         SPI_DRV_MasterAbortTransfer     - spi_status_t SPI_DRV_MasterAbortTransfer(uint32_t instance);
**         SPI_DRV_MasterIRQHandler        - void SPI_DRV_MasterIRQHandler(uint32_t instance);
**         SPI_DRV_SlaveInit               - spi_status_t SPI_DRV_SlaveInit(uint32_t instance,spi_slave_state_t *...
**         SPI_DRV_SlaveDeinit             - spi_status_t SPI_DRV_SlaveDeinit(uint32_t instance);
**         SPI_DRV_SlaveTransferBlocking   - spi_status_t SPI_DRV_SlaveTransferBlocking(uint32_t instance,const uint8_t *...
**         SPI_DRV_SlaveTransfer           - spi_status_t SPI_DRV_SlaveTransfer(uint32_t instance,const uint8_t *...
**         SPI_DRV_SlaveAbortTransfer      - spi_status_t SPI_DRV_SlaveAbortTransfer(uint32_t instance);
**         SPI_DRV_SlaveGetTransferStatus  - spi_status_t SPI_DRV_SlaveGetTransferStatus(uint32_t instance,uint32_t *...
**         SPI_DRV_SlaveIRQHandler         - void SPI_DRV_SlaveIRQHandler(uint32_t instance);
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file spiComEZPort.h
** @version 01.00
*/         
/*!
**  @addtogroup spiComEZPort_module spiComEZPort module documentation
**  @{
*/         
#ifndef __spiComEZPort_H
#define __spiComEZPort_H
/* MODULE spiComEZPort. */

/* Include inherited beans */
#include "clockMan1.h"
#include "osa1.h"
#include "Cpu.h"

/*! @brief Device instance number */
#define FSL_SPICOMEZPORT 0
/*! @brief spiComEZPort component mode */
#define SPICOMEZPORT_DMA_MODE 0U

/*! @brief Driver state structure. Generated due to enabled auto initialization */
extern spi_master_state_t spiComEZPort_MasterState;

/*! @brief Driver calculated baudrate is returned from SPI_DRV_MasterConfigureBus() call.
    Generated due to enabled auto initialization */
extern uint32_t spiComEZPort_calculatedBaudRate;
  
/*! @brief Master configuration declaration */
extern const spi_master_user_config_t spiComEZPort_MasterConfig0;
    

#endif
/* ifndef __spiComEZPort_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
