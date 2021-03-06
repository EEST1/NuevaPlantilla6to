/**********************************************************************************************************
*                                               LCD
*                                   Librerias para el manejo del display LCD
*
*						<Copyright>
*
*						<Copyright or distribution terms>
*
*
*********************************************************************************************************/

/*********************************************************************************************************
*                                               <File description>
*
* Filename	: FW_LCD.h
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
 * \file		FW_LCD.h
 * \brief		Contiene los drivers necesarios para la libreria del dispplay LCD
 * \date		13 de junio de 2019
 * \author		Nicolas Ferragamo nferragamo@est.frba.utn.edu.ar
 * \version     1.0.0
*********************************************************************************************************/

/*********************************************************************************************************
 *** MODULO
*********************************************************************************************************/

#ifndef FW_LCD_H
#define FW_LCD_H

/*********************************************************************************************************
 *** INCLUDES GLOBALES
*********************************************************************************************************/

#include <xc.h>
#include "PR_LCD.h"
#include "BaseBoard.h"

/*********************************************************************************************************
 *** DEFINES GLOBALES
*********************************************************************************************************/

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
void LCD_Init (void);
void LCD_InitCGRAM (void);
void LCD_ReadBusy (void);		
void LCD_WriteCMD (uint8_t comando);	
void LCD_Write (uint8_t dato);
void LCD_WriteData (uint8_t dato);	// Pone se�ales para escribir dato
void LCD_TicLCD (void);  


#endif /* SHIELD_ACTIVO */

#endif /* FW_LCD_H */ 