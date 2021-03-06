/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename  : CPU_RLY_OE.c
**     Project   : mcal
**     Processor : MC9S12XEP100MAG
**     Component : BitIO
**     Version   : Component 02.075, Driver 03.14, CPU db: 3.00.036
**     Compiler  : CodeWarrior HCS12X C Compiler
**     Date/Time : 2016-01-05, 14:54
**     Abstract  :
**         This component "BitIO" implements an one-bit input/output.
**         It uses one bit/pin of a port.
**         Note: This component is set to work in Output direction only.
**         Methods of this component are mostly implemented as a macros
**         (if supported by target language and compiler).
**     Settings  :
**         Used pin                    :
**             ----------------------------------------------------
**                Number (on package)  |    Name
**             ----------------------------------------------------
**                       69            |  PE3_LSTRB_LDS_EROMCTL
**             ----------------------------------------------------
**
**         Port name                   : E
**
**         Bit number (in port)        : 3
**         Bit mask of the port        : $0008
**
**         Initial direction           : Output (direction cannot be changed)
**         Initial output value        : 1
**         Initial pull option         : up
**
**         Port data register          : PORTE     [$0008]
**         Port control register       : DDRE      [$0009]
**         Port function register      : IRQCR     [$001E]
**
**         Optimization for            : speed
**     Contents  :
**         GetVal - bool CPU_RLY_OE_GetVal(void);
**         PutVal - void CPU_RLY_OE_PutVal(bool Val);
**         ClrVal - void CPU_RLY_OE_ClrVal(void);
**         SetVal - void CPU_RLY_OE_SetVal(void);
**
**     Copyright : 1997 - 2011 Freescale Semiconductor, Inc. All Rights Reserved.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/

/* MODULE CPU_RLY_OE. */

#include "CPU_RLY_OE.h"
  /* Including shared modules, which are used in the whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "Cpu.h"

#pragma DATA_SEG CPU_RLY_OE_DATA       /* Select data segment "CPU_RLY_OE_DATA" */
#pragma CODE_SEG CPU_RLY_OE_CODE
#pragma CONST_SEG CPU_RLY_OE_CONST     /* Constant section for this module */
/*
** ===================================================================
**     Method      :  CPU_RLY_OE_GetVal (component BitIO)
**
**     Description :
**         This method returns an input value.
**           a) direction = Input  : reads the input value from the
**                                   pin and returns it
**           b) direction = Output : returns the last written value
**         Note: This component is set to work in Output direction only.
**     Parameters  : None
**     Returns     :
**         ---             - Input value. Possible values:
**                           FALSE - logical "0" (Low level)
**                           TRUE - logical "1" (High level)

** ===================================================================
*/
/*
bool CPU_RLY_OE_GetVal(void)

**  This method is implemented as a macro. See CPU_RLY_OE.h file.  **
*/

/*
** ===================================================================
**     Method      :  CPU_RLY_OE_PutVal (component BitIO)
**
**     Description :
**         This method writes the new output value.
**     Parameters  :
**         NAME       - DESCRIPTION
**         Val             - Output value. Possible values:
**                           FALSE - logical "0" (Low level)
**                           TRUE - logical "1" (High level)
**     Returns     : Nothing
** ===================================================================
*/
void CPU_RLY_OE_PutVal(bool Val)
{
  if (Val) {
    setReg8Bits(PORTE, 0x08U);         /* PE3=0x01U */
  } else { /* !Val */
    clrReg8Bits(PORTE, 0x08U);         /* PE3=0x00U */
  } /* !Val */
}

/*
** ===================================================================
**     Method      :  CPU_RLY_OE_ClrVal (component BitIO)
**
**     Description :
**         This method clears (sets to zero) the output value.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/*
void CPU_RLY_OE_ClrVal(void)

**  This method is implemented as a macro. See CPU_RLY_OE.h file.  **
*/

/*
** ===================================================================
**     Method      :  CPU_RLY_OE_SetVal (component BitIO)
**
**     Description :
**         This method sets (sets to one) the output value.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/*
void CPU_RLY_OE_SetVal(void)

**  This method is implemented as a macro. See CPU_RLY_OE.h file.  **
*/


/* END CPU_RLY_OE. */
/*
** ###################################################################
**
**     This file was created by Processor Expert 3.04 [04.46]
**     for the Freescale HCS12X series of microcontrollers.
**
** ###################################################################
*/
