/*************************************************************************
 *
 *    Used with ICCARM and AARM.
 *
 *    (c) Copyright IAR Systems 2006
 *
 *    File name   : Terminal_9_12x6.c
 *    Description : Font Terminal 9 (12x6)
 *
 *    History :
 *    1. Date        : December 2, 2006
 *       Author      : Stanimir Bonev
 *       Description : Create
 *
 *    $Revision: 28532 $
 **************************************************************************/
#include "drv_glcd.h"

static const unsigned char TextStream [] = {
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x0e, 0x11, 0x11, 0x1b,
		0x11, 0x11, 0x1b, 0x15, 0x11, 0x0e, 0x00, 0x00,
		0x0e, 0x1f, 0x1f, 0x15, 0x1f, 0x1f, 0x15, 0x1b,
		0x1f, 0x0e, 0x00, 0x00, 0x00, 0x0a, 0x1b, 0x1f,
		0x1f, 0x1f, 0x1f, 0x0e, 0x0e, 0x04, 0x04, 0x00,
		0x04, 0x04, 0x0e, 0x0e, 0x1f, 0x1f, 0x1f, 0x0e,
		0x0e, 0x04, 0x04, 0x00, 0x04, 0x0e, 0x0e, 0x0e,
		0x04, 0x1f, 0x1f, 0x0e, 0x04, 0x0e, 0x00, 0x00,
		0x04, 0x04, 0x0e, 0x0e, 0x1f, 0x1f, 0x1f, 0x0e,
		0x04, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x19, 0x19, 0x1f,
		0x1f, 0x1f, 0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00,
		0x0e, 0x0a, 0x0a, 0x0e, 0x00, 0x00, 0x00, 0x00,
		0x1f, 0x1f, 0x1f, 0x1f, 0x11, 0x15, 0x15, 0x11,
		0x1f, 0x1f, 0x1f, 0x1f, 0x00, 0x00, 0x1c, 0x18,
		0x14, 0x06, 0x09, 0x09, 0x09, 0x06, 0x00, 0x00,
		0x00, 0x06, 0x09, 0x09, 0x09, 0x06, 0x02, 0x02,
		0x07, 0x02, 0x00, 0x00, 0x00, 0x00, 0x04, 0x0c,
		0x0c, 0x04, 0x04, 0x04, 0x07, 0x03, 0x00, 0x00,
		0x0c, 0x0a, 0x0e, 0x0a, 0x0a, 0x0a, 0x0e, 0x0e,
		0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x15, 0x0e, 0x11, 0x0e, 0x15, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x01, 0x03, 0x07, 0x0f, 0x07, 0x03,
		0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x0c,
		0x0e, 0x0f, 0x0e, 0x0c, 0x08, 0x00, 0x00, 0x00,
		0x00, 0x04, 0x0e, 0x15, 0x04, 0x04, 0x04, 0x15,
		0x0e, 0x04, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x0a,
		0x0a, 0x0a, 0x0a, 0x00, 0x0a, 0x0a, 0x00, 0x00,
		0x00, 0x0e, 0x0b, 0x0b, 0x0b, 0x0b, 0x0a, 0x0a,
		0x0a, 0x0a, 0x00, 0x00, 0x00, 0x06, 0x09, 0x01,
		0x06, 0x09, 0x06, 0x08, 0x09, 0x06, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x0f, 0x0f, 0x00, 0x00, 0x00, 0x04, 0x0e, 0x15,
		0x04, 0x04, 0x04, 0x15, 0x0e, 0x04, 0x1f, 0x00,
		0x00, 0x04, 0x0e, 0x15, 0x04, 0x04, 0x04, 0x04,
		0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04,
		0x04, 0x04, 0x04, 0x15, 0x0e, 0x04, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x02, 0x04, 0x0f, 0x04, 0x02,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
		0x02, 0x0f, 0x02, 0x04, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x0f,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a,
		0x0a, 0x1f, 0x0a, 0x0a, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x04, 0x04, 0x0e, 0x0e, 0x1f,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f,
		0x0e, 0x0e, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04,
		0x04, 0x04, 0x04, 0x00, 0x04, 0x04, 0x00, 0x00,
		0x0a, 0x0a, 0x0a, 0x0a, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x0a, 0x1f,
		0x0a, 0x0a, 0x1f, 0x0a, 0x0a, 0x00, 0x00, 0x00,
		0x00, 0x02, 0x06, 0x09, 0x01, 0x02, 0x04, 0x08,
		0x09, 0x06, 0x04, 0x00, 0x00, 0x0b, 0x0b, 0x04,
		0x04, 0x02, 0x02, 0x02, 0x0d, 0x0d, 0x00, 0x00,
		0x00, 0x02, 0x05, 0x05, 0x05, 0x02, 0x15, 0x09,
		0x09, 0x16, 0x00, 0x00, 0x0c, 0x0c, 0x08, 0x04,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
		0x02, 0x04, 0x00, 0x00, 0x00, 0x02, 0x04, 0x04,
		0x04, 0x04, 0x04, 0x04, 0x04, 0x02, 0x00, 0x00,
		0x00, 0x00, 0x04, 0x15, 0x0e, 0x0e, 0x15, 0x04,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
		0x04, 0x1f, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x06, 0x06, 0x04, 0x02, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x06, 0x06, 0x00, 0x00, 0x00, 0x08, 0x08, 0x04,
		0x04, 0x02, 0x02, 0x02, 0x01, 0x01, 0x00, 0x00,
		0x00, 0x0e, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09,
		0x09, 0x07, 0x00, 0x00, 0x00, 0x04, 0x06, 0x05,
		0x04, 0x04, 0x04, 0x04, 0x04, 0x0f, 0x00, 0x00,
		0x00, 0x06, 0x09, 0x09, 0x08, 0x04, 0x02, 0x01,
		0x01, 0x0f, 0x00, 0x00, 0x00, 0x06, 0x09, 0x08,
		0x08, 0x06, 0x08, 0x08, 0x09, 0x06, 0x00, 0x00,
		0x00, 0x08, 0x0c, 0x0a, 0x0a, 0x09, 0x0f, 0x08,
		0x08, 0x08, 0x00, 0x00, 0x00, 0x0f, 0x01, 0x01,
		0x01, 0x07, 0x08, 0x08, 0x09, 0x06, 0x00, 0x00,
		0x00, 0x0c, 0x02, 0x01, 0x07, 0x09, 0x09, 0x09,
		0x09, 0x06, 0x00, 0x00, 0x00, 0x0f, 0x08, 0x08,
		0x08, 0x04, 0x04, 0x02, 0x02, 0x02, 0x00, 0x00,
		0x00, 0x06, 0x09, 0x09, 0x09, 0x06, 0x09, 0x09,
		0x09, 0x06, 0x00, 0x00, 0x00, 0x06, 0x09, 0x09,
		0x09, 0x09, 0x0e, 0x08, 0x04, 0x03, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x00, 0x00,
		0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x06, 0x06, 0x00, 0x00, 0x06, 0x06, 0x04, 0x02,
		0x00, 0x00, 0x08, 0x04, 0x02, 0x01, 0x01, 0x02,
		0x04, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x0f, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x01, 0x02, 0x04, 0x08, 0x08, 0x04,
		0x02, 0x01, 0x00, 0x00, 0x00, 0x06, 0x09, 0x09,
		0x08, 0x04, 0x04, 0x00, 0x04, 0x04, 0x00, 0x00,
		0x00, 0x06, 0x09, 0x09, 0x09, 0x0d, 0x0d, 0x01,
		0x01, 0x0e, 0x00, 0x00, 0x00, 0x06, 0x09, 0x09,
		0x09, 0x0f, 0x09, 0x09, 0x09, 0x09, 0x00, 0x00,
		0x00, 0x07, 0x09, 0x09, 0x09, 0x07, 0x09, 0x09,
		0x09, 0x07, 0x00, 0x00, 0x00, 0x06, 0x09, 0x09,
		0x01, 0x01, 0x01, 0x01, 0x09, 0x06, 0x00, 0x00,
		0x00, 0x07, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09,
		0x09, 0x07, 0x00, 0x00, 0x00, 0x0f, 0x01, 0x01,
		0x01, 0x0f, 0x01, 0x01, 0x01, 0x0f, 0x00, 0x00,
		0x00, 0x0f, 0x01, 0x01, 0x01, 0x0f, 0x01, 0x01,
		0x01, 0x01, 0x00, 0x00, 0x00, 0x06, 0x09, 0x09,
		0x01, 0x01, 0x0d, 0x09, 0x09, 0x06, 0x00, 0x00,
		0x00, 0x09, 0x09, 0x09, 0x09, 0x0f, 0x09, 0x09,
		0x09, 0x09, 0x00, 0x00, 0x00, 0x0e, 0x04, 0x04,
		0x04, 0x04, 0x04, 0x04, 0x04, 0x0e, 0x00, 0x00,
		0x00, 0x0e, 0x04, 0x04, 0x04, 0x04, 0x04, 0x05,
		0x05, 0x02, 0x00, 0x00, 0x00, 0x09, 0x09, 0x05,
		0x05, 0x03, 0x05, 0x05, 0x09, 0x09, 0x00, 0x00,
		0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
		0x01, 0x0f, 0x00, 0x00, 0x00, 0x09, 0x09, 0x0f,
		0x0f, 0x09, 0x09, 0x09, 0x09, 0x09, 0x00, 0x00,
		0x00, 0x09, 0x09, 0x0b, 0x0b, 0x0d, 0x0d, 0x09,
		0x09, 0x09, 0x00, 0x00, 0x00, 0x06, 0x09, 0x09,
		0x09, 0x09, 0x09, 0x09, 0x09, 0x06, 0x00, 0x00,
		0x00, 0x07, 0x09, 0x09, 0x09, 0x07, 0x01, 0x01,
		0x01, 0x01, 0x00, 0x00, 0x00, 0x06, 0x09, 0x09,
		0x09, 0x09, 0x09, 0x09, 0x09, 0x06, 0x04, 0x08,
		0x00, 0x07, 0x09, 0x09, 0x09, 0x07, 0x03, 0x05,
		0x09, 0x09, 0x00, 0x00, 0x00, 0x06, 0x09, 0x09,
		0x01, 0x06, 0x08, 0x09, 0x09, 0x06, 0x00, 0x00,
		0x00, 0x1f, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
		0x04, 0x04, 0x00, 0x00, 0x00, 0x09, 0x09, 0x09,
		0x09, 0x09, 0x09, 0x09, 0x09, 0x06, 0x00, 0x00,
		0x00, 0x09, 0x09, 0x09, 0x09, 0x09, 0x0a, 0x0a,
		0x04, 0x04, 0x00, 0x00, 0x00, 0x09, 0x09, 0x09,
		0x09, 0x09, 0x09, 0x0f, 0x09, 0x09, 0x00, 0x00,
		0x00, 0x09, 0x09, 0x09, 0x06, 0x06, 0x06, 0x09,
		0x09, 0x09, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11,
		0x0a, 0x0a, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00,
		0x00, 0x0f, 0x08, 0x04, 0x04, 0x02, 0x02, 0x01,
		0x01, 0x0f, 0x00, 0x00, 0x00, 0x06, 0x02, 0x02,
		0x02, 0x02, 0x02, 0x02, 0x02, 0x06, 0x00, 0x00,
		0x00, 0x01, 0x01, 0x02, 0x02, 0x04, 0x04, 0x04,
		0x08, 0x08, 0x00, 0x00, 0x00, 0x06, 0x04, 0x04,
		0x04, 0x04, 0x04, 0x04, 0x04, 0x06, 0x00, 0x00,
		0x00, 0x04, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f,
		0x06, 0x06, 0x02, 0x04, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x06, 0x08, 0x0e, 0x09, 0x09, 0x0e, 0x00, 0x00,
		0x00, 0x01, 0x01, 0x01, 0x07, 0x09, 0x09, 0x09,
		0x09, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x0e, 0x01, 0x01, 0x01, 0x01, 0x0e, 0x00, 0x00,
		0x00, 0x08, 0x08, 0x08, 0x0e, 0x09, 0x09, 0x09,
		0x09, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x06, 0x09, 0x09, 0x0f, 0x01, 0x0e, 0x00, 0x00,
		0x00, 0x04, 0x02, 0x02, 0x07, 0x02, 0x02, 0x02,
		0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x0e, 0x09, 0x09, 0x09, 0x09, 0x0e, 0x08, 0x06,
		0x00, 0x01, 0x01, 0x01, 0x07, 0x09, 0x09, 0x09,
		0x09, 0x09, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00,
		0x04, 0x04, 0x04, 0x04, 0x04, 0x0e, 0x00, 0x00,
		0x00, 0x00, 0x04, 0x00, 0x04, 0x04, 0x04, 0x04,
		0x04, 0x04, 0x05, 0x02, 0x00, 0x01, 0x01, 0x01,
		0x09, 0x05, 0x03, 0x03, 0x05, 0x09, 0x00, 0x00,
		0x00, 0x06, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
		0x04, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x09, 0x0f, 0x09, 0x09, 0x09, 0x09, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x05, 0x0b, 0x09, 0x09,
		0x09, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x06, 0x09, 0x09, 0x09, 0x09, 0x06, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x07, 0x09, 0x09, 0x09,
		0x09, 0x07, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
		0x0e, 0x09, 0x09, 0x09, 0x09, 0x0e, 0x08, 0x08,
		0x00, 0x00, 0x00, 0x00, 0x0d, 0x0a, 0x02, 0x02,
		0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x06, 0x09, 0x02, 0x04, 0x09, 0x06, 0x00, 0x00,
		0x00, 0x00, 0x02, 0x02, 0x07, 0x02, 0x02, 0x02,
		0x02, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x09, 0x09, 0x09, 0x09, 0x09, 0x0e, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x09, 0x09, 0x0a, 0x0a,
		0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x09, 0x09, 0x09, 0x09, 0x0f, 0x09, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x09, 0x09, 0x06, 0x06,
		0x09, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x09, 0x09, 0x09, 0x09, 0x09, 0x0e, 0x08, 0x07,
		0x00, 0x00, 0x00, 0x00, 0x0f, 0x08, 0x04, 0x02,
		0x01, 0x0f, 0x00, 0x00, 0x00, 0x04, 0x02, 0x02,
		0x02, 0x01, 0x02, 0x02, 0x02, 0x04, 0x00, 0x00,
		0x04, 0x04, 0x04, 0x04, 0x00, 0x04, 0x04, 0x04,
		0x04, 0x04, 0x00, 0x00, 0x00, 0x02, 0x04, 0x04,
		0x04, 0x08, 0x04, 0x04, 0x04, 0x02, 0x00, 0x00,
		0x00, 0x0a, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x0a,
		0x0a, 0x11, 0x11, 0x11, 0x11, 0x1f, 0x00, 0x00,
		0x00, 0x0e, 0x09, 0x09, 0x09, 0x0f, 0x09, 0x09,
		0x09, 0x09, 0x00, 0x00, 0x00, 0x0f, 0x01, 0x01,
		0x01, 0x07, 0x09, 0x09, 0x09, 0x07, 0x00, 0x00,
		0x00, 0x07, 0x09, 0x09, 0x09, 0x07, 0x09, 0x09,
		0x09, 0x07, 0x00, 0x00, 0x00, 0x0f, 0x01, 0x01,
		0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00,
		0x00, 0x0c, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a,
		0x0a, 0x1f, 0x11, 0x00, 0x00, 0x0f, 0x01, 0x01,
		0x01, 0x0f, 0x01, 0x01, 0x01, 0x0f, 0x00, 0x00,
		0x00, 0x15, 0x15, 0x15, 0x15, 0x0e, 0x15, 0x15,
		0x15, 0x15, 0x00, 0x00, 0x00, 0x06, 0x09, 0x08,
		0x08, 0x06, 0x08, 0x08, 0x09, 0x06, 0x00, 0x00,
		0x00, 0x09, 0x09, 0x09, 0x0d, 0x0d, 0x0b, 0x0b,
		0x09, 0x09, 0x00, 0x00, 0x06, 0x09, 0x09, 0x09,
		0x0d, 0x0d, 0x0b, 0x0b, 0x09, 0x09, 0x00, 0x00,
		0x00, 0x09, 0x09, 0x05, 0x05, 0x03, 0x05, 0x05,
		0x09, 0x09, 0x00, 0x00, 0x00, 0x0e, 0x09, 0x09,
		0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x00, 0x00,
		0x00, 0x09, 0x09, 0x0f, 0x0f, 0x09, 0x09, 0x09,
		0x09, 0x09, 0x00, 0x00, 0x00, 0x09, 0x09, 0x09,
		0x09, 0x0f, 0x09, 0x09, 0x09, 0x09, 0x00, 0x00,
		0x00, 0x06, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09,
		0x09, 0x06, 0x00, 0x00, 0x00, 0x0f, 0x09, 0x09,
		0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x00, 0x00,
		0x00, 0x07, 0x09, 0x09, 0x09, 0x07, 0x01, 0x01,
		0x01, 0x01, 0x00, 0x00, 0x00, 0x06, 0x09, 0x09,
		0x01, 0x01, 0x01, 0x01, 0x09, 0x06, 0x00, 0x00,
		0x00, 0x1f, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
		0x04, 0x04, 0x00, 0x00, 0x00, 0x09, 0x09, 0x09,
		0x09, 0x0e, 0x08, 0x08, 0x09, 0x06, 0x00, 0x00,
		0x00, 0x04, 0x0e, 0x15, 0x15, 0x15, 0x15, 0x0e,
		0x04, 0x04, 0x00, 0x00, 0x00, 0x09, 0x09, 0x09,
		0x06, 0x06, 0x06, 0x09, 0x09, 0x09, 0x00, 0x00,
		0x00, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09,
		0x09, 0x1f, 0x10, 0x10, 0x00, 0x09, 0x09, 0x09,
		0x09, 0x0e, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00,
		0x00, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15,
		0x15, 0x1f, 0x00, 0x00, 0x00, 0x15, 0x15, 0x15,
		0x15, 0x15, 0x15, 0x15, 0x15, 0x1f, 0x10, 0x10,
		0x00, 0x03, 0x03, 0x02, 0x02, 0x0e, 0x12, 0x12,
		0x12, 0x0e, 0x00, 0x00, 0x00, 0x09, 0x09, 0x09,
		0x09, 0x0b, 0x0d, 0x0d, 0x0d, 0x0b, 0x00, 0x00,
		0x00, 0x01, 0x01, 0x01, 0x01, 0x07, 0x09, 0x09,
		0x09, 0x07, 0x00, 0x00, 0x00, 0x06, 0x09, 0x08,
		0x08, 0x0e, 0x08, 0x08, 0x09, 0x06, 0x00, 0x00,
		0x00, 0x09, 0x15, 0x15, 0x15, 0x17, 0x15, 0x15,
		0x15, 0x09, 0x00, 0x00, 0x00, 0x0e, 0x09, 0x09,
		0x09, 0x0e, 0x0c, 0x0a, 0x09, 0x09, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x06, 0x08, 0x0e, 0x09,
		0x09, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x08, 0x06,
		0x01, 0x07, 0x09, 0x09, 0x09, 0x06, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x07, 0x09, 0x07, 0x09,
		0x09, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x0f, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x0c, 0x0a, 0x0a, 0x0a,
		0x0a, 0x1f, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x06, 0x09, 0x09, 0x0f, 0x01, 0x0e, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x15, 0x15, 0x0e, 0x15,
		0x15, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x06, 0x09, 0x04, 0x08, 0x09, 0x06, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x09, 0x09, 0x0d, 0x0b,
		0x09, 0x09, 0x00, 0x00, 0x00, 0x00, 0x04, 0x02,
		0x09, 0x09, 0x0d, 0x0b, 0x09, 0x09, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x09, 0x05, 0x03, 0x03,
		0x05, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x0e, 0x09, 0x09, 0x09, 0x09, 0x09, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x09, 0x0f, 0x09, 0x09,
		0x09, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x09, 0x09, 0x0f, 0x09, 0x09, 0x09, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x06, 0x09, 0x09, 0x09,
		0x09, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x0f, 0x09, 0x09, 0x09, 0x09, 0x09, 0x00, 0x00,
		0x00, 0x00, 0x15, 0x00, 0x00, 0x0a, 0x00, 0x00,
		0x15, 0x00, 0x00, 0x0a, 0x00, 0x0a, 0x00, 0x15,
		0x00, 0x0a, 0x00, 0x15, 0x00, 0x0a, 0x00, 0x15,
		0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15, 0x0a, 0x15,
		0x0a, 0x15, 0x0a, 0x15, 0x04, 0x04, 0x04, 0x04,
		0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
		0x04, 0x04, 0x04, 0x04, 0x04, 0x07, 0x04, 0x04,
		0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
		0x07, 0x04, 0x07, 0x04, 0x04, 0x04, 0x04, 0x04,
		0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0b, 0x0a, 0x0a,
		0x0a, 0x0a, 0x0a, 0x0a, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x0f, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a,
		0x00, 0x00, 0x00, 0x00, 0x07, 0x04, 0x07, 0x04,
		0x04, 0x04, 0x04, 0x04, 0x0a, 0x0a, 0x0a, 0x0a,
		0x0b, 0x08, 0x0b, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a,
		0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a,
		0x0a, 0x0a, 0x0a, 0x0a, 0x00, 0x00, 0x00, 0x00,
		0x0f, 0x08, 0x0b, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a,
		0x0a, 0x0a, 0x0a, 0x0a, 0x0b, 0x08, 0x0f, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x0a, 0x0a, 0x0a, 0x0a,
		0x0a, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x04, 0x04, 0x04, 0x04, 0x07, 0x04, 0x07, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x07, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
		0x04, 0x04, 0x04, 0x04, 0x04, 0x1c, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04,
		0x04, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x04, 0x04,
		0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
		0x04, 0x1c, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04,
		0x04, 0x1f, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
		0x04, 0x04, 0x04, 0x04, 0x1c, 0x04, 0x1c, 0x04,
		0x04, 0x04, 0x04, 0x04, 0x0a, 0x0a, 0x0a, 0x0a,
		0x0a, 0x1a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a,
		0x0a, 0x0a, 0x0a, 0x0a, 0x1a, 0x02, 0x1e, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x1e, 0x02, 0x1a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a,
		0x0a, 0x0a, 0x0a, 0x0a, 0x1b, 0x00, 0x1f, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x1f, 0x00, 0x1b, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a,
		0x0a, 0x0a, 0x0a, 0x0a, 0x1a, 0x02, 0x1a, 0x0a,
		0x0a, 0x0a, 0x0a, 0x0a, 0x00, 0x00, 0x00, 0x00,
		0x1f, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x0a, 0x0a, 0x0a, 0x0a, 0x1b, 0x00, 0x1b, 0x0a,
		0x0a, 0x0a, 0x0a, 0x0a, 0x04, 0x04, 0x04, 0x04,
		0x1f, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x1f, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x1f, 0x00, 0x1f, 0x04, 0x04, 0x04, 0x04, 0x04,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x0a, 0x0a,
		0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a,
		0x0a, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x04, 0x04, 0x04, 0x04, 0x1c, 0x04, 0x1c, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x1c, 0x04, 0x1c, 0x04, 0x04, 0x04, 0x04, 0x04,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x0a, 0x0a,
		0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a,
		0x0a, 0x1b, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a,
		0x04, 0x04, 0x04, 0x04, 0x1f, 0x00, 0x1f, 0x04,
		0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
		0x04, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x04, 0x04,
		0x04, 0x04, 0x04, 0x04, 0x1f, 0x1f, 0x1f, 0x1f,
		0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x1f,
		0x1f, 0x1f, 0x1f, 0x1f, 0x07, 0x07, 0x07, 0x07,
		0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
		0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c,
		0x1c, 0x1c, 0x1c, 0x1c, 0x1f, 0x1f, 0x1f, 0x1f,
		0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x07, 0x09, 0x09, 0x09,
		0x09, 0x07, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
		0x0e, 0x01, 0x01, 0x01, 0x01, 0x0e, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x1f, 0x04, 0x04, 0x04,
		0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x09, 0x09, 0x09, 0x09, 0x09, 0x0e, 0x08, 0x07,
		0x00, 0x00, 0x00, 0x00, 0x04, 0x0e, 0x15, 0x15,
		0x15, 0x0e, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00,
		0x09, 0x09, 0x06, 0x06, 0x09, 0x09, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x09, 0x09, 0x09, 0x09,
		0x09, 0x1f, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00,
		0x09, 0x09, 0x09, 0x0e, 0x08, 0x08, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x15, 0x15, 0x15, 0x15,
		0x15, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x15, 0x15, 0x15, 0x15, 0x15, 0x1f, 0x10, 0x10,
		0x00, 0x00, 0x00, 0x00, 0x03, 0x02, 0x06, 0x0a,
		0x0a, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x09, 0x09, 0x0b, 0x0d, 0x0d, 0x0b, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x07, 0x09,
		0x09, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x07, 0x08, 0x0e, 0x08, 0x08, 0x07, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x09, 0x15, 0x17, 0x15,
		0x15, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x0e, 0x09, 0x09, 0x0e, 0x09, 0x09, 0x00, 0x00,
		0x09, 0x0f, 0x01, 0x01, 0x01, 0x0f, 0x01, 0x01,
		0x01, 0x0f, 0x00, 0x00, 0x00, 0x0a, 0x0a, 0x00,
		0x06, 0x09, 0x09, 0x0f, 0x01, 0x0e, 0x00, 0x00,
		0x00, 0x06, 0x09, 0x01, 0x01, 0x07, 0x01, 0x01,
		0x09, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x0e, 0x01, 0x07, 0x01, 0x01, 0x0e, 0x00, 0x00,
		0x11, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
		0x04, 0x0e, 0x00, 0x00, 0x00, 0x0a, 0x0a, 0x00,
		0x06, 0x04, 0x04, 0x04, 0x04, 0x0e, 0x00, 0x00,
		0x06, 0x09, 0x09, 0x09, 0x09, 0x0e, 0x08, 0x08,
		0x09, 0x06, 0x00, 0x00, 0x00, 0x00, 0x09, 0x06,
		0x09, 0x09, 0x09, 0x09, 0x09, 0x0e, 0x08, 0x07,
		0x06, 0x09, 0x09, 0x06, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x04, 0x0e, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x04, 0x04,
		0x04, 0x04, 0x05, 0x05, 0x06, 0x04, 0x00, 0x00,
		0x00, 0x1d, 0x1d, 0x05, 0x05, 0x1f, 0x07, 0x05,
		0x05, 0x05, 0x00, 0x00, 0x00, 0x09, 0x06, 0x09,
		0x09, 0x09, 0x09, 0x09, 0x06, 0x09, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

FontType_t Terminal_9_12_6 =
{
  6,
  12,
  0,
  255,
  (pInt8U)TextStream,
  "Terminal 9 (12x6)"
};
