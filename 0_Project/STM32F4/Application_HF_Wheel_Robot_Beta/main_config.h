/***********************************************************************************************************************
* Copyright (c) Hands Free Team. All rights reserved.
* FileName: main_config.h 
* Contact:  QQ Exchange Group -- 521037187
* Version:  V2.0
*
* LICENSING TERMS:
* The Hands Free is licensed generally under a permissive 3-clause BSD license.
* Contributions are requiredto be made under the same license.
*
* History:
* <author>      <time>      <version>      <desc>
* mawenke      2015.10.1    V1.0          creat this file
*
* Description:   syetem config file
***********************************************************************************************************************/

#ifndef MAIN_CONFIG_H
#define MAIN_CONFIG_H

/*****************************system config****************************************************************************/
#define HANDS_FREE_EMBEDDED_VERSION  2.0
//Whether or not printf DEBUG info to usart1
#define DEBUG 0
/**********************************************************************************************************************/

#define CONTROL_UNIT_V2

/********************************************processor config**********************************************************/


/**********************************************************************************************************************/

/*****************************************package config***************************************************************/
#define PAKG_COMMON
#define PAKG_ROBOT_ABSTRACT
#define PAKG_MATH
#define PAKG_IMU
#define PAKG_MOTOR
#define PAKG_SERVO
#define PACK_ROBOT_WHEEL
#define PACK_HF_LINK
#define PACK_SBUS_PPM
#define PACK_HC_SR04
/**********************************************************************************************************************/

/********************************************OSconfig******************************************************************/

//Whether or not include RTOS  UCOSII or UCOSIII 
#define SYSTEM_SUPPORT_OS 0         
//Whether or not include GUI STWIN or EMWIN
#define SYSTEM_SUPPORT_GUI 0  

/**********************************************************************************************************************/


/*******************************************API config*****************************************************************/


/**********************************************************************************************************************/

#endif
