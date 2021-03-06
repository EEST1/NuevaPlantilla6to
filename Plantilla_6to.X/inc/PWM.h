/**********************************************************************************************************
*                                               PWM
*                                           Manejo de PWM
*
*						<Copyright>
*
*						<Copyright or distribution terms>
*
*
*********************************************************************************************************/

/*********************************************************************************************************
*                                               PWM.h
*
* Filename	: PWM.h
* Version	: 1.0.0					
* Programmer(s) : NEF
**********************************************************************************************************
*  Note(s):
*
*
*
*********************************************************************************************************/

/*********************************************************************************************************
 *
 * \file		 PWM.h
 * \brief		Manejo de PWM
 * \date		1 de octubre de 2019
 * \author		Nicolas Ferragamo nferragamo@est.frba.utn.edu.ar
 * \version     1.0.0
*********************************************************************************************************/

/*********************************************************************************************************
 *** MODULO
*********************************************************************************************************/

#ifndef __PWM_H
#define __PWM_H

/*********************************************************************************************************
 *** INCLUDES GLOBALES
*********************************************************************************************************/
#include "Tdatos.h"
/*********************************************************************************************************
 *** DEFINES GLOBALES
*********************************************************************************************************/

/*********************************************************************************************************
 *** MACROS GLOBALES
*********************************************************************************************************/

/*********************************************************************************************************
 *** TIPO DE DATOS GLOBALES
*********************************************************************************************************/
extern volatile uint16_t PWM_Frecuencia;
/*********************************************************************************************************
 *** VARIABLES GLOBALES
*********************************************************************************************************/

/*********************************************************************************************************
 *** PROTOTIPOS DE FUNCIONES GLOBALES
**********************************************************************************************************/


void PWM_Init (void);

void PWM_PeriodoUp (uint8_t);

void PWM_PeriodoDown (uint8_t);

void PWM_Set (uint8_t periodo, uint8_t duty);

void PWM_CalcFrec(void);

#endif /* __PWM_H */extern 