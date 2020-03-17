/**********************************************************************************************************
*                                               LCD
*						Incluye las definiciones necesarias para el manejo
*                       del display LCD
*						
*                                      <Copyright>
*
*						<Copyright or distribution terms>
*
*
*********************************************************************************************************/

/*********************************************************************************************************
*                                               <File description>
*
* Filename	: LCD
* Version	: 1.0.1					
* Programmer(s) : NEF
**********************************************************************************************************
*  Note(s):
*
*
*
*********************************************************************************************************/

/*********************************************************************************************************
 *
 * \file		LCD
 * \brief		Incluye las definiciones necesarias para el manejo
*               del display LCD
 * \date		11 de junio de 2019
 * \author		Nicolas Ferragamo nferragamo@est.frba.utn.edu.ar
 * \version     1.0.0
*********************************************************************************************************/

/*********************************************************************************************************
 *** MODULO
*********************************************************************************************************/

#ifndef PR_LCD_H
#define PR_LCD_H

/*********************************************************************************************************
 *** INCLUDES GLOBALES
*********************************************************************************************************/

#include <xc.h>
#include "Tdatos.h"
#include "BaseBoard.h"

/*********************************************************************************************************
 *** DEFINES GLOBALES
*********************************************************************************************************/

#define     LCD_RS			PORTEbits.RE2
#define     LCD_RS_BUS_DIR  TRISEbits.RE2
#define     LCD_RW			PORTEbits.RE1
#define     LCD_RW_BUS_DIR  TRISEbits.RE1
#define     LCD_E			PORTEbits.RE0
#define     LCD_E_BUS_DIR   TRISEbits.RE0
#define     LCD_DISPLAY     LATD	//!< define el puerto dnde esta conectado el bus

/*********************************************************************************************************
 *** MACROS GLOBALES
*********************************************************************************************************/

/*********************************************************************************************************
 *** TIPO DE DATOS GLOBALES

*********************************************************************************************************/

/*********************************************************************************************************
 *** VARIABLES GLOBALES
*********************************************************************************************************/

/*********************************************************************************************************
 *** PROTOTIPOS DE FUNCIONES GLOBALES
**********************************************************************************************************/
#if SHIELD_ACTIVO == __SHIELD2

void LCD_Char2LCD (uint8_t caracter);
void LCD_Msg2LCD (const uint8_t* msg);    
void LCD_Clear (void);	
void LCD_RetHome (void);	
void LCD_SetCursor (uint8_t pos);                     
void LCD_Desp2Izq (void);

#endif

#endif /* PR_LCD_H */