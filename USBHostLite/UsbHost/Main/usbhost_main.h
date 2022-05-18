/*
**************************************************************************************************************
*                                                 NXP USB Host Stack
*
*                                     (c) Copyright 2008, NXP SemiConductors
*                                     (c) Copyright 2008, OnChip  Technologies LLC
*                                                 All Rights Reserved
*
*                                                  www.nxp.com
*                                               www.onchiptech.com
*
* File           : usbhost_main.h
* Programmer(s)  : Ravikanth.P
* Version        :
*
**************************************************************************************************************
*/

#ifndef  USBHOST_MAIN_H
#define  USBHOST_MAIN_H

/*
**************************************************************************************************************
*                                       DEFINITIONS
**************************************************************************************************************
*/

#include "usbhost_inc.h"

/*
**************************************************************************************************************
*                                       DEFINITIONS
**************************************************************************************************************
*/

#define  FILENAME_R  "MSREAD.TXT"
#define  FILENAME_W  "MSWRITE.TXT"

#define  MAX_BUFFER_SIZE             (4000)
#define  WRITE_SIZE          (10 * 1000000)

/*
**************************************************************************************************************
*                                     FUNCTION PROTOTYPES
**************************************************************************************************************
*/

void  Main_Read (void);
void  Main_Write(void);
void  Main_Copy (void);

#endif
