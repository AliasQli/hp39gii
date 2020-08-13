/*
 * Copyright 2009 Freescale Semiconductor, Inc. All Rights Reserved.
 */

/*
 * The code contained herein is licensed under the GNU General Public
 * License. You may obtain a copy of the GNU General Public License
 * Version 2 or later at the following locations:
 *
 * http://www.opensource.org/licenses/gpl-license.html
 * http://www.gnu.org/copyleft/gpl.html
 */
////////////////////////////////////////////////////////////////////////////////
//
// WARNING!  THIS FILE IS AUTOMATICALLY GENERATED FROM XML.
//                DO NOT MODIFY THIS FILE DIRECTLY.
//
////////////////////////////////////////////////////////////////////////////////
//
// The following naming conventions are followed in this file.
//      XX_<module>_<regname>_<field>
//
// XX specifies the define / macro class
//      HW pertains to a register
//      BM indicates a Bit Mask
//      BF indicates a Bit Field macro
//
// <module> is the hardware module name which can be any of the following...
//      USB20 (Note when there is more than one copy of a given module, the
//      module name includes a number starting from 0 for the first instance
//      of that module)
//
// <regname> is the specific register within that module
//
// <field> is the specific bitfield within that <module>_<register>
//
// We also define the following...
//      hw_<module>_<regname>_t is typedef of anonymous union
//
////////////////////////////////////////////////////////////////////////////////

#ifndef _REGSAPBH_H
#define _REGSAPBH_H  1

#include "regs.h"


////////////////////////////////////////////////////////////////////////////////
//// HW_APBH_CTRL0 - AHB to APBH Bridge Control and Status Register 0
////////////////////////////////////////////////////////////////////////////////

#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        reg8_t   FREEZE_CHANNEL;
        reg8_t   CLKGATE_CHANNEL;
        reg8_t   RESET_CHANNEL;
        unsigned RSVD2            :  6;
        unsigned CLKGATE          :  1;
        unsigned SFTRST           :  1;
    } B;
} hw_apbh_ctrl0_t;
#endif


//
// constants & macros for entire HW_APBH_CTRL0 register
//

#define HW_APBH_CTRL0_ADDR      (REGS_BASE + 0x00004000)
#define HW_APBH_CTRL0_SET_ADDR  (REGS_BASE + 0x00004004)
#define HW_APBH_CTRL0_CLR_ADDR  (REGS_BASE + 0x00004008)
#define HW_APBH_CTRL0_TOG_ADDR  (REGS_BASE + 0x0000400C)

#ifndef __LANGUAGE_ASM__
#define HW_APBH_CTRL0          (*(volatile hw_apbh_ctrl0_t *) HW_APBH_CTRL0_ADDR)
#define HW_APBH_CTRL0_RD()     (HW_APBH_CTRL0.U)
#define HW_APBH_CTRL0_WR(v)    (HW_APBH_CTRL0.U = (v))
#define HW_APBH_CTRL0_SET(v)   ((*(volatile reg32_t *) HW_APBH_CTRL0_SET_ADDR) = (v))
#define HW_APBH_CTRL0_CLR(v)   ((*(volatile reg32_t *) HW_APBH_CTRL0_CLR_ADDR) = (v))
#define HW_APBH_CTRL0_TOG(v)   ((*(volatile reg32_t *) HW_APBH_CTRL0_TOG_ADDR) = (v))
#endif


//
// constants & macros for individual HW_APBH_CTRL0 bitfields
//

#define BP_APBH_CTRL0_SFTRST      31
#define BM_APBH_CTRL0_SFTRST      0x80000000

#ifndef __LANGUAGE_ASM__
#define BF_APBH_CTRL0_SFTRST(v)   ((((reg32_t) v) << 31) & BM_APBH_CTRL0_SFTRST)
#else
#define BF_APBH_CTRL0_SFTRST(v)   (((v) << 31) & BM_APBH_CTRL0_SFTRST)
#endif

#ifndef __LANGUAGE_ASM__
#define BW_APBH_CTRL0_SFTRST(v)   BF_CS1(APBH_CTRL0, SFTRST, v)
#endif


//---

#define BP_APBH_CTRL0_CLKGATE      30
#define BM_APBH_CTRL0_CLKGATE      0x40000000

#define BF_APBH_CTRL0_CLKGATE(v)   (((v) << 30) & BM_APBH_CTRL0_CLKGATE)

#ifndef __LANGUAGE_ASM__
#define BW_APBH_CTRL0_CLKGATE(v)   BF_CS1(APBH_CTRL0, CLKGATE, v)
#endif


//---

#define BP_APBH_CTRL0_RESET_CHANNEL      16
#define BM_APBH_CTRL0_RESET_CHANNEL      0x00FF0000

#define BF_APBH_CTRL0_RESET_CHANNEL(v)   (((v) << 16) & BM_APBH_CTRL0_RESET_CHANNEL)

#ifndef __LANGUAGE_ASM__
#define BW_APBH_CTRL0_RESET_CHANNEL(v)   (HW_APBH_CTRL0.B.RESET_CHANNEL = (v))
#endif

#define BV_APBH_CTRL0_RESET_CHANNEL__HWECC  0x01
#define BV_APBH_CTRL0_RESET_CHANNEL__SSP    0x02
#define BV_APBH_CTRL0_RESET_CHANNEL__SRC    0x04
#define BV_APBH_CTRL0_RESET_CHANNEL__DEST   0x08
#define BV_APBH_CTRL0_RESET_CHANNEL__ATA    0x10
#define BV_APBH_CTRL0_RESET_CHANNEL__NAND0  0x10
#define BV_APBH_CTRL0_RESET_CHANNEL__NAND1  0x20
#define BV_APBH_CTRL0_RESET_CHANNEL__NAND2  0x30
#define BV_APBH_CTRL0_RESET_CHANNEL__NAND3  0x40


//---

#define BP_APBH_CTRL0_CLKGATE_CHANNEL      8
#define BM_APBH_CTRL0_CLKGATE_CHANNEL      0x0000FF00

#define BF_APBH_CTRL0_CLKGATE_CHANNEL(v)   (((v) << 8) & BM_APBH_CTRL0_CLKGATE_CHANNEL)

#ifndef __LANGUAGE_ASM__
#define BW_APBH_CTRL0_CLKGATE_CHANNEL(v)   (HW_APBH_CTRL0.B.CLKGATE_CHANNEL = (v))
#endif

#define BV_APBH_CTRL0_CLKGATE_CHANNEL__HWECC  0x01
#define BV_APBH_CTRL0_CLKGATE_CHANNEL__SSP    0x02
#define BV_APBH_CTRL0_CLKGATE_CHANNEL__SRC    0x04
#define BV_APBH_CTRL0_CLKGATE_CHANNEL__DEST   0x08
#define BV_APBH_CTRL0_CLKGATE_CHANNEL__ATA    0x10
#define BV_APBH_CTRL0_CLKGATE_CHANNEL__NAND0  0x10
#define BV_APBH_CTRL0_CLKGATE_CHANNEL__NAND1  0x20
#define BV_APBH_CTRL0_CLKGATE_CHANNEL__NAND2  0x30
#define BV_APBH_CTRL0_CLKGATE_CHANNEL__NAND3  0x40


//---

#define BP_APBH_CTRL0_FREEZE_CHANNEL      0
#define BM_APBH_CTRL0_FREEZE_CHANNEL      0x000000FF

#define BF_APBH_CTRL0_FREEZE_CHANNEL(v)   (((v) << 0) & BM_APBH_CTRL0_FREEZE_CHANNEL)

#ifndef __LANGUAGE_ASM__
#define BW_APBH_CTRL0_FREEZE_CHANNEL(v)   (HW_APBH_CTRL0.B.FREEZE_CHANNEL = (v))
#endif

#define BV_APBH_CTRL0_FREEZE_CHANNEL__HWECC  0x01
#define BV_APBH_CTRL0_FREEZE_CHANNEL__SSP    0x02
#define BV_APBH_CTRL0_FREEZE_CHANNEL__SRC    0x04
#define BV_APBH_CTRL0_FREEZE_CHANNEL__DEST   0x08
#define BV_APBH_CTRL0_FREEZE_CHANNEL__ATA    0x10
#define BV_APBH_CTRL0_FREEZE_CHANNEL__NAND0  0x10
#define BV_APBH_CTRL0_FREEZE_CHANNEL__NAND1  0x20
#define BV_APBH_CTRL0_FREEZE_CHANNEL__NAND2  0x30
#define BV_APBH_CTRL0_FREEZE_CHANNEL__NAND3  0x40


////////////////////////////////////////////////////////////////////////////////
//// HW_APBH_CTRL1 - AHB to APBH Bridge Control and Status Register 1
////////////////////////////////////////////////////////////////////////////////

#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        unsigned CH0_CMDCMPLT_IRQ     :  1;
        unsigned CH1_CMDCMPLT_IRQ     :  1;
        unsigned CH2_CMDCMPLT_IRQ     :  1;
        unsigned CH3_CMDCMPLT_IRQ     :  1;
        unsigned CH4_CMDCMPLT_IRQ     :  1;
        unsigned CH5_CMDCMPLT_IRQ     :  1;
        unsigned CH6_CMDCMPLT_IRQ     :  1;
        unsigned CH7_CMDCMPLT_IRQ     :  1;
		
        unsigned CH0_CMDCMPLT_IRQ_EN  :  1;
        unsigned CH1_CMDCMPLT_IRQ_EN  :  1;
        unsigned CH2_CMDCMPLT_IRQ_EN  :  1;
        unsigned CH3_CMDCMPLT_IRQ_EN  :  1;
        unsigned CH4_CMDCMPLT_IRQ_EN  :  1;
        unsigned CH5_CMDCMPLT_IRQ_EN  :  1;
        unsigned CH6_CMDCMPLT_IRQ_EN  :  1;
        unsigned CH7_CMDCMPLT_IRQ_EN  :  1;
		
        unsigned CH0_AHB_ERROR_IRQ     :  1;
        unsigned CH1_AHB_ERROR_IRQ     :  1;
        unsigned CH2_AHB_ERROR_IRQ     :  1;
        unsigned CH3_AHB_ERROR_IRQ     :  1;
        unsigned CH4_AHB_ERROR_IRQ     :  1;
        unsigned CH5_AHB_ERROR_IRQ     :  1;
        unsigned CH6_AHB_ERROR_IRQ     :  1;
        unsigned CH7_AHB_ERROR_IRQ     :  1;		
		
		
		
        reg8_t   RSVD1;
    } B;
} hw_apbh_ctrl1_t;
#endif


//
// constants & macros for entire HW_APBH_CTRL1 register
//

#define HW_APBH_CTRL1_ADDR      (REGS_BASE + 0x00004010)
#define HW_APBH_CTRL1_SET_ADDR  (REGS_BASE + 0x00004014)
#define HW_APBH_CTRL1_CLR_ADDR  (REGS_BASE + 0x00004018)
#define HW_APBH_CTRL1_TOG_ADDR  (REGS_BASE + 0x0000401C)

#ifndef __LANGUAGE_ASM__
#define HW_APBH_CTRL1          (*(volatile hw_apbh_ctrl1_t *) HW_APBH_CTRL1_ADDR)
#define HW_APBH_CTRL1_RD()     (HW_APBH_CTRL1.U)
#define HW_APBH_CTRL1_WR(v)    (HW_APBH_CTRL1.U = (v))
#define HW_APBH_CTRL1_SET(v)   ((*(volatile reg32_t *) HW_APBH_CTRL1_SET_ADDR) = (v))
#define HW_APBH_CTRL1_CLR(v)   ((*(volatile reg32_t *) HW_APBH_CTRL1_CLR_ADDR) = (v))
#define HW_APBH_CTRL1_TOG(v)   ((*(volatile reg32_t *) HW_APBH_CTRL1_TOG_ADDR) = (v))
#endif


//
// constants & macros for individual HW_APBH_CTRL1 bitfields
//


#define BP_APBH_CTRL1_CH7_AHB_ERROR_IRQ      23
#define BM_APBH_CTRL1_CH7_AHB_ERROR_IRQ      0x00800000

#define BF_APBH_CTRL1_CH7_AHB_ERROR_IRQ(v)   (((v) << 23) & BM_APBH_CTRL1_CH7_AHB_ERROR_IRQ)

#ifndef __LANGUAGE_ASM__
#define BW_APBH_CTRL1_CH7_AHB_ERROR_IRQ(v)   BF_CS1(APBH_CTRL1, CH7_AHB_ERROR_IRQ, v)
#endif


//---

#define BP_APBH_CTRL1_CH6_AHB_ERROR_IRQ      22
#define BM_APBH_CTRL1_CH6_AHB_ERROR_IRQ      0x00400000

#define BF_APBH_CTRL1_CH6_AHB_ERROR_IRQ(v)   (((v) << 22) & BM_APBH_CTRL1_CH6_AHB_ERROR_IRQ)

#ifndef __LANGUAGE_ASM__
#define BW_APBH_CTRL1_CH6_AHB_ERROR_IRQ(v)   BF_CS1(APBH_CTRL1, CH6_AHB_ERROR_IRQ, v)
#endif


//---

#define BP_APBH_CTRL1_CH5_AHB_ERROR_IRQ      21
#define BM_APBH_CTRL1_CH5_AHB_ERROR_IRQ      0x00200000

#define BF_APBH_CTRL1_CH5_AHB_ERROR_IRQ(v)   (((v) << 21) & BM_APBH_CTRL1_CH5_AHB_ERROR_IRQ)

#ifndef __LANGUAGE_ASM__
#define BW_APBH_CTRL1_CH5_AHB_ERROR_IRQ(v)   BF_CS1(APBH_CTRL1, CH5_AHB_ERROR_IRQ, v)
#endif


//---

#define BP_APBH_CTRL1_CH4_AHB_ERROR_IRQ      20
#define BM_APBH_CTRL1_CH4_AHB_ERROR_IRQ      0x00100000

#define BF_APBH_CTRL1_CH4_AHB_ERROR_IRQ(v)   (((v) << 20) & BM_APBH_CTRL1_CH4_AHB_ERROR_IRQ)

#ifndef __LANGUAGE_ASM__
#define BW_APBH_CTRL1_CH4_AHB_ERROR_IRQ(v)   BF_CS1(APBH_CTRL1, CH4_AHB_ERROR_IRQ, v)
#endif


//---

#define BP_APBH_CTRL1_CH3_AHB_ERROR_IRQ      19
#define BM_APBH_CTRL1_CH3_AHB_ERROR_IRQ      0x00080000

#define BF_APBH_CTRL1_CH3_AHB_ERROR_IRQ(v)   (((v) << 19) & BM_APBH_CTRL1_CH3_AHB_ERROR_IRQ)

#ifndef __LANGUAGE_ASM__
#define BW_APBH_CTRL1_CH3_AHB_ERROR_IRQ(v)   BF_CS1(APBH_CTRL1, CH3_AHB_ERROR_IRQ, v)
#endif


//---

#define BP_APBH_CTRL1_CH2_AHB_ERROR_IRQ      18
#define BM_APBH_CTRL1_CH2_AHB_ERROR_IRQ      0x00040000

#define BF_APBH_CTRL1_CH2_AHB_ERROR_IRQ(v)   (((v) << 18) & BM_APBH_CTRL1_CH2_AHB_ERROR_IRQ)

#ifndef __LANGUAGE_ASM__
#define BW_APBH_CTRL1_CH2_AHB_ERROR_IRQ(v)   BF_CS1(APBH_CTRL1, CH2_AHB_ERROR_IRQ, v)
#endif


//---

#define BP_APBH_CTRL1_CH1_AHB_ERROR_IRQ      17
#define BM_APBH_CTRL1_CH1_AHB_ERROR_IRQ      0x00020000

#define BF_APBH_CTRL1_CH1_AHB_ERROR_IRQ(v)   (((v) << 17) & BM_APBH_CTRL1_CH1_AHB_ERROR_IRQ)

#ifndef __LANGUAGE_ASM__
#define BW_APBH_CTRL1_CH1_AHB_ERROR_IRQ(v)   BF_CS1(APBH_CTRL1, CH1_AHB_ERROR_IRQ, v)
#endif


//---

#define BP_APBH_CTRL1_CH0_AHB_ERROR_IRQ      16
#define BM_APBH_CTRL1_CH0_AHB_ERROR_IRQ      0x00010000

#define BF_APBH_CTRL1_CH0_AHB_ERROR_IRQ(v)   (((v) << 16) & BM_APBH_CTRL1_CH0_AHB_ERROR_IRQ)

#ifndef __LANGUAGE_ASM__
#define BW_APBH_CTRL1_CH0_AHB_ERROR_IRQ(v)   BF_CS1(APBH_CTRL1, CH0_AHB_ERROR_IRQ, v)
#endif





#define BP_APBH_CTRL1_CH7_CMDCMPLT_IRQ_EN      15
#define BM_APBH_CTRL1_CH7_CMDCMPLT_IRQ_EN      0x00008000

#define BF_APBH_CTRL1_CH7_CMDCMPLT_IRQ_EN(v)   (((v) << 15) & BM_APBH_CTRL1_CH7_CMDCMPLT_IRQ_EN)

#ifndef __LANGUAGE_ASM__
#define BW_APBH_CTRL1_CH7_CMDCMPLT_IRQ_EN(v)   BF_CS1(APBH_CTRL1, CH7_CMDCMPLT_IRQ_EN, v)
#endif


//---

#define BP_APBH_CTRL1_CH6_CMDCMPLT_IRQ_EN      14
#define BM_APBH_CTRL1_CH6_CMDCMPLT_IRQ_EN      0x00004000

#define BF_APBH_CTRL1_CH6_CMDCMPLT_IRQ_EN(v)   (((v) << 14) & BM_APBH_CTRL1_CH6_CMDCMPLT_IRQ_EN)

#ifndef __LANGUAGE_ASM__
#define BW_APBH_CTRL1_CH6_CMDCMPLT_IRQ_EN(v)   BF_CS1(APBH_CTRL1, CH6_CMDCMPLT_IRQ_EN, v)
#endif


//---

#define BP_APBH_CTRL1_CH5_CMDCMPLT_IRQ_EN      13
#define BM_APBH_CTRL1_CH5_CMDCMPLT_IRQ_EN      0x00002000

#define BF_APBH_CTRL1_CH5_CMDCMPLT_IRQ_EN(v)   (((v) << 13) & BM_APBH_CTRL1_CH5_CMDCMPLT_IRQ_EN)

#ifndef __LANGUAGE_ASM__
#define BW_APBH_CTRL1_CH5_CMDCMPLT_IRQ_EN(v)   BF_CS1(APBH_CTRL1, CH5_CMDCMPLT_IRQ_EN, v)
#endif


//---

#define BP_APBH_CTRL1_CH4_CMDCMPLT_IRQ_EN      12
#define BM_APBH_CTRL1_CH4_CMDCMPLT_IRQ_EN      0x00001000

#define BF_APBH_CTRL1_CH4_CMDCMPLT_IRQ_EN(v)   (((v) << 12) & BM_APBH_CTRL1_CH4_CMDCMPLT_IRQ_EN)

#ifndef __LANGUAGE_ASM__
#define BW_APBH_CTRL1_CH4_CMDCMPLT_IRQ_EN(v)   BF_CS1(APBH_CTRL1, CH4_CMDCMPLT_IRQ_EN, v)
#endif


//---

#define BP_APBH_CTRL1_CH3_CMDCMPLT_IRQ_EN      11
#define BM_APBH_CTRL1_CH3_CMDCMPLT_IRQ_EN      0x00000800

#define BF_APBH_CTRL1_CH3_CMDCMPLT_IRQ_EN(v)   (((v) << 11) & BM_APBH_CTRL1_CH3_CMDCMPLT_IRQ_EN)

#ifndef __LANGUAGE_ASM__
#define BW_APBH_CTRL1_CH3_CMDCMPLT_IRQ_EN(v)   BF_CS1(APBH_CTRL1, CH3_CMDCMPLT_IRQ_EN, v)
#endif


//---

#define BP_APBH_CTRL1_CH2_CMDCMPLT_IRQ_EN      10
#define BM_APBH_CTRL1_CH2_CMDCMPLT_IRQ_EN      0x00000400

#define BF_APBH_CTRL1_CH2_CMDCMPLT_IRQ_EN(v)   (((v) << 10) & BM_APBH_CTRL1_CH2_CMDCMPLT_IRQ_EN)

#ifndef __LANGUAGE_ASM__
#define BW_APBH_CTRL1_CH2_CMDCMPLT_IRQ_EN(v)   BF_CS1(APBH_CTRL1, CH2_CMDCMPLT_IRQ_EN, v)
#endif


//---

#define BP_APBH_CTRL1_CH1_CMDCMPLT_IRQ_EN      9
#define BM_APBH_CTRL1_CH1_CMDCMPLT_IRQ_EN      0x00000200

#define BF_APBH_CTRL1_CH1_CMDCMPLT_IRQ_EN(v)   (((v) << 9) & BM_APBH_CTRL1_CH1_CMDCMPLT_IRQ_EN)

#ifndef __LANGUAGE_ASM__
#define BW_APBH_CTRL1_CH1_CMDCMPLT_IRQ_EN(v)   BF_CS1(APBH_CTRL1, CH1_CMDCMPLT_IRQ_EN, v)
#endif


//---

#define BP_APBH_CTRL1_CH0_CMDCMPLT_IRQ_EN      8
#define BM_APBH_CTRL1_CH0_CMDCMPLT_IRQ_EN      0x00000100

#define BF_APBH_CTRL1_CH0_CMDCMPLT_IRQ_EN(v)   (((v) << 8) & BM_APBH_CTRL1_CH0_CMDCMPLT_IRQ_EN)

#ifndef __LANGUAGE_ASM__
#define BW_APBH_CTRL1_CH0_CMDCMPLT_IRQ_EN(v)   BF_CS1(APBH_CTRL1, CH0_CMDCMPLT_IRQ_EN, v)
#endif


//---

#define BP_APBH_CTRL1_CH7_CMDCMPLT_IRQ      7
#define BM_APBH_CTRL1_CH7_CMDCMPLT_IRQ      0x00000080

#define BF_APBH_CTRL1_CH7_CMDCMPLT_IRQ(v)   (((v) << 7) & BM_APBH_CTRL1_CH7_CMDCMPLT_IRQ)

#ifndef __LANGUAGE_ASM__
#define BW_APBH_CTRL1_CH7_CMDCMPLT_IRQ(v)   BF_CS1(APBH_CTRL1, CH7_CMDCMPLT_IRQ, v)
#endif


//---

#define BP_APBH_CTRL1_CH6_CMDCMPLT_IRQ      6
#define BM_APBH_CTRL1_CH6_CMDCMPLT_IRQ      0x00000040

#define BF_APBH_CTRL1_CH6_CMDCMPLT_IRQ(v)   (((v) << 6) & BM_APBH_CTRL1_CH6_CMDCMPLT_IRQ)

#ifndef __LANGUAGE_ASM__
#define BW_APBH_CTRL1_CH6_CMDCMPLT_IRQ(v)   BF_CS1(APBH_CTRL1, CH6_CMDCMPLT_IRQ, v)
#endif


//---

#define BP_APBH_CTRL1_CH5_CMDCMPLT_IRQ      5
#define BM_APBH_CTRL1_CH5_CMDCMPLT_IRQ      0x00000020

#define BF_APBH_CTRL1_CH5_CMDCMPLT_IRQ(v)   (((v) << 5) & BM_APBH_CTRL1_CH5_CMDCMPLT_IRQ)

#ifndef __LANGUAGE_ASM__
#define BW_APBH_CTRL1_CH5_CMDCMPLT_IRQ(v)   BF_CS1(APBH_CTRL1, CH5_CMDCMPLT_IRQ, v)
#endif


//---

#define BP_APBH_CTRL1_CH4_CMDCMPLT_IRQ      4
#define BM_APBH_CTRL1_CH4_CMDCMPLT_IRQ      0x00000010

#define BF_APBH_CTRL1_CH4_CMDCMPLT_IRQ(v)   (((v) << 4) & BM_APBH_CTRL1_CH4_CMDCMPLT_IRQ)

#ifndef __LANGUAGE_ASM__
#define BW_APBH_CTRL1_CH4_CMDCMPLT_IRQ(v)   BF_CS1(APBH_CTRL1, CH4_CMDCMPLT_IRQ, v)
#endif


//---

#define BP_APBH_CTRL1_CH3_CMDCMPLT_IRQ      3
#define BM_APBH_CTRL1_CH3_CMDCMPLT_IRQ      0x00000008

#define BF_APBH_CTRL1_CH3_CMDCMPLT_IRQ(v)   (((v) << 3) & BM_APBH_CTRL1_CH3_CMDCMPLT_IRQ)

#ifndef __LANGUAGE_ASM__
#define BW_APBH_CTRL1_CH3_CMDCMPLT_IRQ(v)   BF_CS1(APBH_CTRL1, CH3_CMDCMPLT_IRQ, v)
#endif


//---

#define BP_APBH_CTRL1_CH2_CMDCMPLT_IRQ      2
#define BM_APBH_CTRL1_CH2_CMDCMPLT_IRQ      0x00000004

#define BF_APBH_CTRL1_CH2_CMDCMPLT_IRQ(v)   (((v) << 2) & BM_APBH_CTRL1_CH2_CMDCMPLT_IRQ)

#ifndef __LANGUAGE_ASM__
#define BW_APBH_CTRL1_CH2_CMDCMPLT_IRQ(v)   BF_CS1(APBH_CTRL1, CH2_CMDCMPLT_IRQ, v)
#endif


//---

#define BP_APBH_CTRL1_CH1_CMDCMPLT_IRQ      1
#define BM_APBH_CTRL1_CH1_CMDCMPLT_IRQ      0x00000002

#define BF_APBH_CTRL1_CH1_CMDCMPLT_IRQ(v)   (((v) << 1) & BM_APBH_CTRL1_CH1_CMDCMPLT_IRQ)

#ifndef __LANGUAGE_ASM__
#define BW_APBH_CTRL1_CH1_CMDCMPLT_IRQ(v)   BF_CS1(APBH_CTRL1, CH1_CMDCMPLT_IRQ, v)
#endif


//---

#define BP_APBH_CTRL1_CH0_CMDCMPLT_IRQ      0
#define BM_APBH_CTRL1_CH0_CMDCMPLT_IRQ      0x00000001

#define BF_APBH_CTRL1_CH0_CMDCMPLT_IRQ(v)   (((v) << 0) & BM_APBH_CTRL1_CH0_CMDCMPLT_IRQ)

#ifndef __LANGUAGE_ASM__
#define BW_APBH_CTRL1_CH0_CMDCMPLT_IRQ(v)   BF_CS1(APBH_CTRL1, CH0_CMDCMPLT_IRQ, v)
#endif


////////////////////////////////////////////////////////////////////////////////
//// HW_APBH_DEVSEL - AHB to APBH DMA Device Assignment Register
////////////////////////////////////////////////////////////////////////////////

#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        unsigned CH0  :  4;
        unsigned CH1  :  4;
        unsigned CH2  :  4;
        unsigned CH3  :  4;
        unsigned CH4  :  4;
        unsigned CH5  :  4;
        unsigned CH6  :  4;
        unsigned CH7  :  4;
    } B;
} hw_apbh_devsel_t;
#endif


//
// constants & macros for entire HW_APBH_DEVSEL register
//

#define HW_APBH_DEVSEL_ADDR      (REGS_BASE + 0x00004020)

#ifndef __LANGUAGE_ASM__
#define HW_APBH_DEVSEL          (*(volatile hw_apbh_devsel_t *) HW_APBH_DEVSEL_ADDR)
#define HW_APBH_DEVSEL_RD()     (HW_APBH_DEVSEL.U)
#endif


//
// constants & macros for individual HW_APBH_DEVSEL bitfields
//

#define BP_APBH_DEVSEL_CH7      28
#define BM_APBH_DEVSEL_CH7      0xF0000000

#ifndef __LANGUAGE_ASM__
#define BF_APBH_DEVSEL_CH7(v)   ((((reg32_t) v) << 28) & BM_APBH_DEVSEL_CH7)
#else
#define BF_APBH_DEVSEL_CH7(v)   (((v) << 28) & BM_APBH_DEVSEL_CH7)
#endif


//---

#define BP_APBH_DEVSEL_CH6      24
#define BM_APBH_DEVSEL_CH6      0x0F000000

#define BF_APBH_DEVSEL_CH6(v)   (((v) << 24) & BM_APBH_DEVSEL_CH6)


//---

#define BP_APBH_DEVSEL_CH5      20
#define BM_APBH_DEVSEL_CH5      0x00F00000

#define BF_APBH_DEVSEL_CH5(v)   (((v) << 20) & BM_APBH_DEVSEL_CH5)


//---

#define BP_APBH_DEVSEL_CH4      16
#define BM_APBH_DEVSEL_CH4      0x000F0000

#define BF_APBH_DEVSEL_CH4(v)   (((v) << 16) & BM_APBH_DEVSEL_CH4)


//---

#define BP_APBH_DEVSEL_CH3      12
#define BM_APBH_DEVSEL_CH3      0x0000F000

#define BF_APBH_DEVSEL_CH3(v)   (((v) << 12) & BM_APBH_DEVSEL_CH3)


//---

#define BP_APBH_DEVSEL_CH2      8
#define BM_APBH_DEVSEL_CH2      0x00000F00

#define BF_APBH_DEVSEL_CH2(v)   (((v) << 8) & BM_APBH_DEVSEL_CH2)


//---

#define BP_APBH_DEVSEL_CH1      4
#define BM_APBH_DEVSEL_CH1      0x000000F0

#define BF_APBH_DEVSEL_CH1(v)   (((v) << 4) & BM_APBH_DEVSEL_CH1)


//---

#define BP_APBH_DEVSEL_CH0      0
#define BM_APBH_DEVSEL_CH0      0x0000000F

#define BF_APBH_DEVSEL_CH0(v)   (((v) << 0) & BM_APBH_DEVSEL_CH0)


////////////////////////////////////////////////////////////////////////////////
//// multi-register-define name HW_APBH_CHn_DEBUG2 : base 0x80004090 : count 8 : offset 0x70
////////////////////////////////////////////////////////////////////////////////

#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        reg16_t  AHB_BYTES;
        reg16_t  APB_BYTES;
    } B;
} hw_apbh_chn_debug2_t;
#endif


//
// constants & macros for entire HW_APBH_CHn_DEBUG2 multi-register
//

#define HW_APBH_CHn_DEBUG2_COUNT        8
#define HW_APBH_CHn_DEBUG2_ADDR(n)      (REGS_BASE + 0x000040A0 + ((n) * 0x70))

#ifndef __LANGUAGE_ASM__
#define HW_APBH_CHn_DEBUG2(n)           (*(volatile hw_apbh_chn_debug2_t *) HW_APBH_CHn_DEBUG2_ADDR(n))
#define HW_APBH_CHn_DEBUG2_RD(n)        (HW_APBH_CHn_DEBUG2(n).U)
#endif


//
// constants & macros for individual HW_APBH_CHn_DEBUG2 multi-register bitfields
//

#define BP_APBH_CHn_DEBUG2_APB_BYTES        16
#define BM_APBH_CHn_DEBUG2_APB_BYTES        0xFFFF0000

#ifndef __LANGUAGE_ASM__
#define BF_APBH_CHn_DEBUG2_APB_BYTES(v)     ((((reg32_t) v) << 16) & BM_APBH_CHn_DEBUG2_APB_BYTES)
#else
#define BF_APBH_CHn_DEBUG2_APB_BYTES(v)     (((v) << 16) & BM_APBH_CHn_DEBUG2_APB_BYTES)
#endif


//---

#define BP_APBH_CHn_DEBUG2_AHB_BYTES        0
#define BM_APBH_CHn_DEBUG2_AHB_BYTES        0x0000FFFF

#define BF_APBH_CHn_DEBUG2_AHB_BYTES(v)     (((v) << 0) & BM_APBH_CHn_DEBUG2_AHB_BYTES)


////////////////////////////////////////////////////////////////////////////////
//// multi-register-define name HW_APBH_CHn_CURCMDAR : base 0x80004030 : count 8 : offset 0x70
////////////////////////////////////////////////////////////////////////////////

#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        reg32_t  CMD_ADDR;
    } B;
} hw_apbh_chn_curcmdar_t;
#endif


//
// constants & macros for entire HW_APBH_CHn_CURCMDAR multi-register
//

#define HW_APBH_CHn_CURCMDAR_COUNT        8
#define HW_APBH_CHn_CURCMDAR_ADDR(n)      (REGS_BASE + 0x00004040 + ((n) * 0x70))

#ifndef __LANGUAGE_ASM__
#define HW_APBH_CHn_CURCMDAR(n)           (*(volatile hw_apbh_chn_curcmdar_t *) HW_APBH_CHn_CURCMDAR_ADDR(n))
#define HW_APBH_CHn_CURCMDAR_RD(n)        (HW_APBH_CHn_CURCMDAR(n).U)
#endif


//
// constants & macros for individual HW_APBH_CHn_CURCMDAR multi-register bitfields
//

#define BP_APBH_CHn_CURCMDAR_CMD_ADDR        0
#define BM_APBH_CHn_CURCMDAR_CMD_ADDR        0xFFFFFFFF

#ifndef __LANGUAGE_ASM__
#define BF_APBH_CHn_CURCMDAR_CMD_ADDR(v)   ((reg32_t) v)
#else
#define BF_APBH_CHn_CURCMDAR_CMD_ADDR(v)   (v)
#endif


////////////////////////////////////////////////////////////////////////////////
//// multi-register-define name HW_APBH_CHn_BAR : base 0x80004060 : count 8 : offset 0x70
////////////////////////////////////////////////////////////////////////////////

#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        reg32_t  ADDRESS;
    } B;
} hw_apbh_chn_bar_t;
#endif


//
// constants & macros for entire HW_APBH_CHn_BAR multi-register
//

#define HW_APBH_CHn_BAR_COUNT        8
#define HW_APBH_CHn_BAR_ADDR(n)      (REGS_BASE + 0x00004070 + ((n) * 0x70))

#ifndef __LANGUAGE_ASM__
#define HW_APBH_CHn_BAR(n)           (*(volatile hw_apbh_chn_bar_t *) HW_APBH_CHn_BAR_ADDR(n))
#define HW_APBH_CHn_BAR_RD(n)        (HW_APBH_CHn_BAR(n).U)
#endif


//
// constants & macros for individual HW_APBH_CHn_BAR multi-register bitfields
//

#define BP_APBH_CHn_BAR_ADDRESS        0
#define BM_APBH_CHn_BAR_ADDRESS        0xFFFFFFFF

#ifndef __LANGUAGE_ASM__
#define BF_APBH_CHn_BAR_ADDRESS(v)   ((reg32_t) v)
#else
#define BF_APBH_CHn_BAR_ADDRESS(v)   (v)
#endif


////////////////////////////////////////////////////////////////////////////////
//// multi-register-define name HW_APBH_CHn_CMD : base 0x80004050 : count 8 : offset 0x70
////////////////////////////////////////////////////////////////////////////////

#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        unsigned COMMAND         :  2;
        unsigned CHAIN           :  1;
        unsigned IRQONCMPLT      :  1;
        unsigned NANDLOCK        :  1;
        unsigned NANDWAIT4READY  :  1;
        unsigned SEMAPHORE       :  1;
        unsigned WAIT4ENDCMD     :  1;
        unsigned RSVD1           :  4;
        unsigned CMDWORDS        :  4;
        reg16_t  XFER_COUNT;
    } B;
} hw_apbh_chn_cmd_t;
#endif


//
// constants & macros for entire HW_APBH_CHn_CMD multi-register
//

#define HW_APBH_CHn_CMD_COUNT        8
#define HW_APBH_CHn_CMD_ADDR(n)      (REGS_BASE + 0x00004060 + ((n) * 0x70))

#ifndef __LANGUAGE_ASM__
#define HW_APBH_CHn_CMD(n)           (*(volatile hw_apbh_chn_cmd_t *) HW_APBH_CHn_CMD_ADDR(n))
#define HW_APBH_CHn_CMD_RD(n)        (HW_APBH_CHn_CMD(n).U)
#endif


//
// constants & macros for individual HW_APBH_CHn_CMD multi-register bitfields
//

#define BP_APBH_CHn_CMD_XFER_COUNT        16
#define BM_APBH_CHn_CMD_XFER_COUNT        0xFFFF0000

#ifndef __LANGUAGE_ASM__
#define BF_APBH_CHn_CMD_XFER_COUNT(v)     ((((reg32_t) v) << 16) & BM_APBH_CHn_CMD_XFER_COUNT)
#else
#define BF_APBH_CHn_CMD_XFER_COUNT(v)     (((v) << 16) & BM_APBH_CHn_CMD_XFER_COUNT)
#endif


//---

#define BP_APBH_CHn_CMD_CMDWORDS        12
#define BM_APBH_CHn_CMD_CMDWORDS        0x0000F000

#define BF_APBH_CHn_CMD_CMDWORDS(v)     (((v) << 12) & BM_APBH_CHn_CMD_CMDWORDS)


//---

#define BP_APBH_CHn_CMD_WAIT4ENDCMD        7
#define BM_APBH_CHn_CMD_WAIT4ENDCMD        0x00000080

#define BF_APBH_CHn_CMD_WAIT4ENDCMD(v)     (((v) << 7) & BM_APBH_CHn_CMD_WAIT4ENDCMD)


//---

#define BP_APBH_CHn_CMD_SEMAPHORE        6
#define BM_APBH_CHn_CMD_SEMAPHORE        0x00000040

#define BF_APBH_CHn_CMD_SEMAPHORE(v)     (((v) << 6) & BM_APBH_CHn_CMD_SEMAPHORE)


//---

#define BP_APBH_CHn_CMD_NANDWAIT4READY        5
#define BM_APBH_CHn_CMD_NANDWAIT4READY        0x00000020

#define BF_APBH_CHn_CMD_NANDWAIT4READY(v)     (((v) << 5) & BM_APBH_CHn_CMD_NANDWAIT4READY)


//---

#define BP_APBH_CHn_CMD_NANDLOCK        4
#define BM_APBH_CHn_CMD_NANDLOCK        0x00000010

#define BF_APBH_CHn_CMD_NANDLOCK(v)     (((v) << 4) & BM_APBH_CHn_CMD_NANDLOCK)


//---

#define BP_APBH_CHn_CMD_IRQONCMPLT        3
#define BM_APBH_CHn_CMD_IRQONCMPLT        0x00000008

#define BF_APBH_CHn_CMD_IRQONCMPLT(v)     (((v) << 3) & BM_APBH_CHn_CMD_IRQONCMPLT)


//---

#define BP_APBH_CHn_CMD_CHAIN        2
#define BM_APBH_CHn_CMD_CHAIN        0x00000004

#define BF_APBH_CHn_CMD_CHAIN(v)     (((v) << 2) & BM_APBH_CHn_CMD_CHAIN)


//---

#define BP_APBH_CHn_CMD_COMMAND        0
#define BM_APBH_CHn_CMD_COMMAND        0x00000003

#define BF_APBH_CHn_CMD_COMMAND(v)     (((v) << 0) & BM_APBH_CHn_CMD_COMMAND)

#define BV_APBH_CHn_CMD_COMMAND__NO_DMA_XFER  0x0
#define BV_APBH_CHn_CMD_COMMAND__DMA_WRITE    0x1
#define BV_APBH_CHn_CMD_COMMAND__DMA_READ     0x2
#define BV_APBH_CHn_CMD_COMMAND__DMA_SENSE    0x3


////////////////////////////////////////////////////////////////////////////////
//// multi-register-define name HW_APBH_CHn_NXTCMDAR : base 0x80004040 : count 8 : offset 0x70
////////////////////////////////////////////////////////////////////////////////

#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        reg32_t  CMD_ADDR;
    } B;
} hw_apbh_chn_nxtcmdar_t;
#endif


//
// constants & macros for entire HW_APBH_CHn_NXTCMDAR multi-register
//

#define HW_APBH_CHn_NXTCMDAR_COUNT        8
#define HW_APBH_CHn_NXTCMDAR_ADDR(n)      (REGS_BASE + 0x00004050 + ((n) * 0x70))

#ifndef __LANGUAGE_ASM__
#define HW_APBH_CHn_NXTCMDAR(n)           (*(volatile hw_apbh_chn_nxtcmdar_t *) HW_APBH_CHn_NXTCMDAR_ADDR(n))
#define HW_APBH_CHn_NXTCMDAR_RD(n)        (HW_APBH_CHn_NXTCMDAR(n).U)
#define HW_APBH_CHn_NXTCMDAR_WR(n, v)     (HW_APBH_CHn_NXTCMDAR(n).U = (v))
#define HW_APBH_CHn_NXTCMDAR_SET(n, v)    (HW_APBH_CHn_NXTCMDAR_WR(n, (v) | (~(v) & HW_APBH_CHn_NXTCMDAR_RD(n))))
#define HW_APBH_CHn_NXTCMDAR_CLR(n, v)    (HW_APBH_CHn_NXTCMDAR_WR(n, ~(v) & HW_APBH_CHn_NXTCMDAR_RD(n)))
#define HW_APBH_CHn_NXTCMDAR_TOG(n, v)    (HW_APBH_CHn_NXTCMDAR_WR(n, (v) ^ HW_APBH_CHn_NXTCMDAR_RD(n)))
#endif


//
// constants & macros for individual HW_APBH_CHn_NXTCMDAR multi-register bitfields
//

#define BP_APBH_CHn_NXTCMDAR_CMD_ADDR        0
#define BM_APBH_CHn_NXTCMDAR_CMD_ADDR        0xFFFFFFFF

#ifndef __LANGUAGE_ASM__
#define BF_APBH_CHn_NXTCMDAR_CMD_ADDR(v)   ((reg32_t) v)
#else
#define BF_APBH_CHn_NXTCMDAR_CMD_ADDR(v)   (v)
#endif

#ifndef __LANGUAGE_ASM__
#define BW_APBH_CHn_NXTCMDAR_CMD_ADDR(n, v)  (HW_APBH_CHn_NXTCMDAR(n).B.CMD_ADDR = (v))
#endif


////////////////////////////////////////////////////////////////////////////////
//// multi-register-define name HW_APBH_CHn_SEMA : base 0x80004070 : count 8 : offset 0x70
////////////////////////////////////////////////////////////////////////////////

#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        reg8_t   INCREMENT_SEMA;
        reg8_t   RSVD1;
        reg8_t   PHORE;
        reg8_t   RSVD2;
    } B;
} hw_apbh_chn_sema_t;
#endif


//
// constants & macros for entire HW_APBH_CHn_SEMA multi-register
//

#define HW_APBH_CHn_SEMA_COUNT        8
#define HW_APBH_CHn_SEMA_ADDR(n)      (REGS_BASE + 0x00004080 + ((n) * 0x70))

#ifndef __LANGUAGE_ASM__
#define HW_APBH_CHn_SEMA(n)           (*(volatile hw_apbh_chn_sema_t *) HW_APBH_CHn_SEMA_ADDR(n))
#define HW_APBH_CHn_SEMA_RD(n)        (HW_APBH_CHn_SEMA(n).U)
#define HW_APBH_CHn_SEMA_WR(n, v)     (HW_APBH_CHn_SEMA(n).U = (v))
#define HW_APBH_CHn_SEMA_SET(n, v)    (HW_APBH_CHn_SEMA_WR(n, (v) | (~(v) & HW_APBH_CHn_SEMA_RD(n))))
#define HW_APBH_CHn_SEMA_CLR(n, v)    (HW_APBH_CHn_SEMA_WR(n, ~(v) & HW_APBH_CHn_SEMA_RD(n)))
#define HW_APBH_CHn_SEMA_TOG(n, v)    (HW_APBH_CHn_SEMA_WR(n, (v) ^ HW_APBH_CHn_SEMA_RD(n)))
#endif


//
// constants & macros for individual HW_APBH_CHn_SEMA multi-register bitfields
//

#define BP_APBH_CHn_SEMA_PHORE        16
#define BM_APBH_CHn_SEMA_PHORE        0x00FF0000

#define BF_APBH_CHn_SEMA_PHORE(v)     (((v) << 16) & BM_APBH_CHn_SEMA_PHORE)


//---

#define BP_APBH_CHn_SEMA_INCREMENT_SEMA        0
#define BM_APBH_CHn_SEMA_INCREMENT_SEMA        0x000000FF

#define BF_APBH_CHn_SEMA_INCREMENT_SEMA(v)     (((v) << 0) & BM_APBH_CHn_SEMA_INCREMENT_SEMA)

#ifndef __LANGUAGE_ASM__
#define BW_APBH_CHn_SEMA_INCREMENT_SEMA(n, v)  (HW_APBH_CHn_SEMA(n).B.INCREMENT_SEMA = (v))
#endif


////////////////////////////////////////////////////////////////////////////////
//// multi-register-define name HW_APBH_CHn_DEBUG1 : base 0x80004080 : count 8 : offset 0x70
////////////////////////////////////////////////////////////////////////////////

#ifndef __LANGUAGE_ASM__
typedef union
{
    reg32_t  U;
    struct
    {
        unsigned STATEMACHINE      :  5;
        unsigned RSVD1             : 15;
        unsigned WR_FIFO_FULL      :  1;
        unsigned WR_FIFO_EMPTY     :  1;
        unsigned RD_FIFO_FULL      :  1;
        unsigned RD_FIFO_EMPTY     :  1;
        unsigned NEXTCMDADDRVALID  :  1;
        unsigned RSVD2             :  3;
        unsigned END               :  1;
        unsigned KICK              :  1;
        unsigned BURST             :  1;
        unsigned REQ               :  1;
    } B;
} hw_apbh_chn_debug1_t;
#endif


//
// constants & macros for entire HW_APBH_CHn_DEBUG1 multi-register
//

#define HW_APBH_CHn_DEBUG1_COUNT        8
#define HW_APBH_CHn_DEBUG1_ADDR(n)      (REGS_BASE + 0x00004090 + ((n) * 0x70))

#ifndef __LANGUAGE_ASM__
#define HW_APBH_CHn_DEBUG1(n)           (*(volatile hw_apbh_chn_debug1_t *) HW_APBH_CHn_DEBUG1_ADDR(n))
#define HW_APBH_CHn_DEBUG1_RD(n)        (HW_APBH_CHn_DEBUG1(n).U)
#endif


//
// constants & macros for individual HW_APBH_CHn_DEBUG1 multi-register bitfields
//

#define BP_APBH_CHn_DEBUG1_REQ        31
#define BM_APBH_CHn_DEBUG1_REQ        0x80000000

#ifndef __LANGUAGE_ASM__
#define BF_APBH_CHn_DEBUG1_REQ(v)     ((((reg32_t) v) << 31) & BM_APBH_CHn_DEBUG1_REQ)
#else
#define BF_APBH_CHn_DEBUG1_REQ(v)     (((v) << 31) & BM_APBH_CHn_DEBUG1_REQ)
#endif


//---

#define BP_APBH_CHn_DEBUG1_BURST        30
#define BM_APBH_CHn_DEBUG1_BURST        0x40000000

#define BF_APBH_CHn_DEBUG1_BURST(v)     (((v) << 30) & BM_APBH_CHn_DEBUG1_BURST)


//---

#define BP_APBH_CHn_DEBUG1_KICK        29
#define BM_APBH_CHn_DEBUG1_KICK        0x20000000

#define BF_APBH_CHn_DEBUG1_KICK(v)     (((v) << 29) & BM_APBH_CHn_DEBUG1_KICK)


//---

#define BP_APBH_CHn_DEBUG1_END        28
#define BM_APBH_CHn_DEBUG1_END        0x10000000

#define BF_APBH_CHn_DEBUG1_END(v)     (((v) << 28) & BM_APBH_CHn_DEBUG1_END)


//---

#define BP_APBH_CHn_DEBUG1_RSVD2        25
#define BM_APBH_CHn_DEBUG1_RSVD2        0x0E000000

#define BF_APBH_CHn_DEBUG1_RSVD2(v)     (((v) << 25) & BM_APBH_CHn_DEBUG1_RSVD2)


//---

#define BP_APBH_CHn_DEBUG1_NEXTCMDADDRVALID        24
#define BM_APBH_CHn_DEBUG1_NEXTCMDADDRVALID        0x01000000

#define BF_APBH_CHn_DEBUG1_NEXTCMDADDRVALID(v)     (((v) << 24) & BM_APBH_CHn_DEBUG1_NEXTCMDADDRVALID)


//---

#define BP_APBH_CHn_DEBUG1_RD_FIFO_EMPTY        23
#define BM_APBH_CHn_DEBUG1_RD_FIFO_EMPTY        0x00800000

#define BF_APBH_CHn_DEBUG1_RD_FIFO_EMPTY(v)     (((v) << 23) & BM_APBH_CHn_DEBUG1_RD_FIFO_EMPTY)


//---

#define BP_APBH_CHn_DEBUG1_RD_FIFO_FULL        22
#define BM_APBH_CHn_DEBUG1_RD_FIFO_FULL        0x00400000

#define BF_APBH_CHn_DEBUG1_RD_FIFO_FULL(v)     (((v) << 22) & BM_APBH_CHn_DEBUG1_RD_FIFO_FULL)


//---

#define BP_APBH_CHn_DEBUG1_WR_FIFO_EMPTY        21
#define BM_APBH_CHn_DEBUG1_WR_FIFO_EMPTY        0x00200000

#define BF_APBH_CHn_DEBUG1_WR_FIFO_EMPTY(v)     (((v) << 21) & BM_APBH_CHn_DEBUG1_WR_FIFO_EMPTY)


//---

#define BP_APBH_CHn_DEBUG1_WR_FIFO_FULL        20
#define BM_APBH_CHn_DEBUG1_WR_FIFO_FULL        0x00100000

#define BF_APBH_CHn_DEBUG1_WR_FIFO_FULL(v)     (((v) << 20) & BM_APBH_CHn_DEBUG1_WR_FIFO_FULL)


//---

#define BP_APBH_CHn_DEBUG1_RSVD1        5
#define BM_APBH_CHn_DEBUG1_RSVD1        0x000FFFE0

#define BF_APBH_CHn_DEBUG1_RSVD1(v)     (((v) << 5) & BM_APBH_CHn_DEBUG1_RSVD1)


//---

#define BP_APBH_CHn_DEBUG1_STATEMACHINE        0
#define BM_APBH_CHn_DEBUG1_STATEMACHINE        0x0000001F

#define BF_APBH_CHn_DEBUG1_STATEMACHINE(v)     (((v) << 0) & BM_APBH_CHn_DEBUG1_STATEMACHINE)

#define BV_APBH_CHn_DEBUG1_STATEMACHINE__IDLE           0x00
#define BV_APBH_CHn_DEBUG1_STATEMACHINE__REQ_CMD1       0x01
#define BV_APBH_CHn_DEBUG1_STATEMACHINE__REQ_CMD3       0x02
#define BV_APBH_CHn_DEBUG1_STATEMACHINE__REQ_CMD2       0x03
#define BV_APBH_CHn_DEBUG1_STATEMACHINE__XFER_DECODE    0x04
#define BV_APBH_CHn_DEBUG1_STATEMACHINE__REQ_WAIT       0x05
#define BV_APBH_CHn_DEBUG1_STATEMACHINE__REQ_CMD4       0x06
#define BV_APBH_CHn_DEBUG1_STATEMACHINE__PIO_REQ        0x07
#define BV_APBH_CHn_DEBUG1_STATEMACHINE__READ_FLUSH     0x08
#define BV_APBH_CHn_DEBUG1_STATEMACHINE__READ_WAIT      0x09
#define BV_APBH_CHn_DEBUG1_STATEMACHINE__WRITE          0x0C
#define BV_APBH_CHn_DEBUG1_STATEMACHINE__READ_REQ       0x0D
#define BV_APBH_CHn_DEBUG1_STATEMACHINE__CHECK_CHAIN    0x0E
#define BV_APBH_CHn_DEBUG1_STATEMACHINE__XFER_COMPLETE  0x0F
#define BV_APBH_CHn_DEBUG1_STATEMACHINE__WAIT_END       0x15
#define BV_APBH_CHn_DEBUG1_STATEMACHINE__WRITE_WAIT     0x1C
#define BV_APBH_CHn_DEBUG1_STATEMACHINE__CHECK_WAIT     0x1E


#endif // _REGSAPBH_H

////////////////////////////////////////////////////////////////////////////////