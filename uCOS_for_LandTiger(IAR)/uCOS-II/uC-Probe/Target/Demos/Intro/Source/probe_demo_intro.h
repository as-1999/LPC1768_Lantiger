/*
*********************************************************************************************************
*                                              uC/Probe
*
*                         (c) Copyright 2007-2009; Micrium, Inc.; Weston, FL
*
*               All rights reserved.  Protected by international copyright laws.
*               Knowledge of the source code may NOT be used to develop a similar product.
*               Please help us continue to provide the Embedded community with the finest
*               software available.  Your honesty is greatly appreciated.
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*
*                                                uC/Probe
*                                            INTRODUCTION DEMO
*
*
* Filename      : probe_demo_intro.c
* Version       : V2.20
* Programmer(s) : FT
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                               MODULE
*
* Note(s) : (1) This header file is protected from multiple pre-processor inclusion through use of the
*               PROBE_DEMO_INTRO present pre-processor macro definition.
*********************************************************************************************************
*/

#ifndef  PROBE_DEMO_INTRO_PRESENT                               /* See Note #1.                                       */
#define  PROBE_DEMO_INTRO_PRESENT


/*
*********************************************************************************************************
*                                               EXTERNS
*********************************************************************************************************
*/

#ifdef   PROBE_DEMO_INTRO_MODULE
#define  PROBE_DEMO_INTRO_EXT
#else
#define  PROBE_DEMO_INTRO_EXT  extern
#endif


/*
*********************************************************************************************************
*                                            INCLUDE FILES
*********************************************************************************************************
*/

#include  <cpu.h>
#include  <lib_def.h>
#include  <lib_mem.h>
#include  <lib_str.h>

#include  <ucos_ii.h>

#include  <app_cfg.h>


/*
*********************************************************************************************************
*                                               DEFINES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                               MACRO'S
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                             DATA TYPES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                          GLOBAL VARIABLES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                         FUNCTION PROTOTYPES
*********************************************************************************************************
*/

void  ProbeDemoIntro_Init  (void);


/*
*********************************************************************************************************
*                                        CONFIGURATION ERRORS
*********************************************************************************************************
*/

#ifndef PROBE_DEMO_INTRO_CFG_TASK_LED_PRIO
#error  "PROBE_DEMO_INTRO_CFG_TASK_LED_PRIO          not #define'd in 'app_cfg.h'           "
#error  "         [This will be the priority for the uC/Probe Introduction Demo LED Task]   "
#endif

#ifndef PROBE_DEMO_INTRO_CFG_TASK_LED_STK_SIZE
#error  "PROBE_DEMO_INTRO_CFG_TASK_LED_STK_SIZE       not #define'd in 'app_cfg.h'          "
#error  "         [This will be the stack size for the uC/Probe Introduction Demo LED Task] "
#endif


/*
*********************************************************************************************************
*                                             MODULE END
*********************************************************************************************************
*/

#endif                                                          /* End of module include                              */
