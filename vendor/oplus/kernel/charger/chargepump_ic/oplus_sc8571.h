// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2018-2020 Oplus. All rights reserved.
 */
#ifndef __SC8571_HEADER__
#define __SC8571_HEADER__


/* Register 00h */
#define SC8571_REG_00                   0x00
#define	SC8571_BAT_OVP_DIS_MASK         0x80
#define	SC8571_BAT_OVP_DIS_SHIFT        7
#define	SC8571_BAT_OVP_ENABLE           0
#define	SC8571_BAT_OVP_DISABLE          1

#define SC8571_BAT_OVP_MASK             0x7F
#define SC8571_BAT_OVP_SHIFT            0
#define SC8571_BAT_OVP_BASE             7000
#define SC8571_BAT_OVP_LSB              20

/* Register 01h */
#define SC8571_REG_01                   0x01
#define SC8571_BAT_OVP_ALM_DIS_MASK     0x80
#define SC8571_BAT_OVP_ALM_DIS_SHIFT    7
#define SC8571_BAT_OVP_ALM_ENABLE       0
#define SC8571_BAT_OVP_ALM_DISABLE      1

#define SC8571_BAT_OVP_ALM_MASK         0x7F
#define SC8571_BAT_OVP_ALM_SHIFT        0
#define SC8571_BAT_OVP_ALM_BASE         7000
#define SC8571_BAT_OVP_ALM_LSB          20

/* Register 02h */
#define SC8571_REG_02                   0x02
#define	SC8571_BAT_OCP_DIS_MASK         0x80
#define	SC8571_BAT_OCP_DIS_SHIFT        7
#define SC8571_BAT_OCP_ENABLE           0
#define SC8571_BAT_OCP_DISABLE          1

#define SC8571_BAT_OCP_MASK             0x7F
#define SC8571_BAT_OCP_SHIFT            0
#define SC8571_BAT_OCP_BASE             0
#define SC8571_BAT_OCP_LSB              100

/* Register 03h */
#define SC8571_REG_03                   0x03
#define SC8571_BAT_OCP_ALM_DIS_MASK     0x80
#define SC8571_BAT_OCP_ALM_DIS_SHIFT    7
#define SC8571_BAT_OCP_ALM_ENABLE       0
#define SC8571_BAT_OCP_ALM_DISABLE      1

#define SC8571_BAT_OCP_ALM_MASK         0x7F
#define SC8571_BAT_OCP_ALM_SHIFT        0
#define SC8571_BAT_OCP_ALM_BASE         0
#define SC8571_BAT_OCP_ALM_LSB          100

/* Register 04h */
#define SC8571_REG_04                   0x04

/* Register 05h */
#define SC8571_REG_05                   0x05
#define SC8571_BUS_UCP_DIS_MASK         0x80
#define SC8571_BUS_UCP_DIS_SHIFT        7
#define SC8571_BUS_UCP_DISABLE          0
#define SC8571_BUS_UCP_ENABLE           1

#define SC8571_IBUS_UCP_TH_MASK         0x40
#define SC8571_IBUS_UCP_TH_SHIFT        6
#define SC8571_IBUS_UCP_TH_150MA        0
#define SC8571_IBUS_UCP_TH_250MA        1

#define SC8571_VBUS_IN_RANGE_DIS_MASK   0x04
#define SC8571_VBUS_IN_RANGE_DIS_SHIFT  2

/* Register 06h */
#define SC8571_REG_06                   0x06
#define SC8571_VBUS_PD_EN_MASK          0x80
#define SC8571_VBUS_PD_EN_SHIFT         7
#define SC8571_VBUS_PD_ENABLE           1
#define SC8571_VBUS_PD_DISABLE          0

#define SC8571_BUS_OVP_MASK             0x7F
#define SC8571_BUS_OVP_SHIFT            0
#define SC8571_BUS_OVP_1_1_BASE         7000
#define SC8571_BUS_OVP_1_1_LSB          50
#define SC8571_BUS_OVP_2_1_BASE         14000
#define SC8571_BUS_OVP_2_1_LSB          100

/* Register 07h */
#define SC8571_REG_07                   0x07
#define SC8571_BUS_OVP_ALM_DIS_MASK     0x80
#define SC8571_BUS_OVP_ALM_DIS_SHIFT    7
#define SC8571_BUS_OVP_ALM_ENABLE       0
#define SC8571_BUS_OVP_ALM_DISABLE      1

#define SC8571_BUS_OVP_ALM_MASK         0x7F
#define SC8571_BUS_OVP_ALM_SHIFT        0
#define SC8571_BUS_OVP_ALM_1_1_BASE     7000
#define SC8571_BUS_OVP_ALM_1_1_LSB      50
#define SC8571_BUS_OVP_ALM_2_1_BASE     14000
#define SC8571_BUS_OVP_ALM_2_1_LSB      100

/* Register 08h */
#define SC8571_REG_08                   0x08
#define SC8571_BUS_OCP_DIS_MASK         0x80
#define SC8571_BUS_OCP_DIS_SHIFT        7
#define	SC8571_BUS_OCP_ENABLE           0
#define	SC8571_BUS_OCP_DISABLE          1

#define SC8571_BUS_OCP_MASK             0x1F
#define SC8571_BUS_OCP_SHIFT            0
#define SC8571_BUS_OCP_BASE             1000
#define SC8571_BUS_OCP_LSB              250

/* Register 09h */
#define SC8571_REG_09                   0x09

/* Register 0Ah */
#define SC8571_REG_0A                   0x0A
#define SC8571_TSHUT_DIS_MASK           0x80
#define SC8571_TSHUT_DIS_SHIFT          7
#define SC8571_TSHUT_ENABLE             0
#define SC8571_TSHUT_DISABLE            1

#define SC8571_TDIE_ALM_DIS_MASK        0x10
#define SC8571_TDIE_ALM_DIS_SHIFT       4
#define SC8571_TDIE_ALM_ENABLE          0
#define SC8571_TDIE_ALM_DISABLE         1

#define SC8571_TSBUS_DIS_MASK           0x08
#define SC8571_TSBUS_DIS_SHIFT          3
#define SC8571_TSBUS_ENABLE             0
#define SC8571_TSBUS_DISABLE            1

#define SC8571_TSBAT_DIS_MASK           0x04
#define SC8571_TSBAT_DIS_SHIFT          2
#define SC8571_TSBAT_ENABLE             0
#define SC8571_TSBAT_DISABLE            1

/* Register 0Bh */
#define SC8571_REG_0B                   0x0B
#define SC8571_TDIE_ALM_MASK            0xFF
#define SC8571_TDIE_ALM_SHIFT           0
#define SC8571_TDIE_ALM_BASE            25
#define SC8571_TDIE_ALM_LSB             5

/* Register 0Ch */
#define SC8571_REG_0C                   0x0C

/* Register 0Dh */
#define SC8571_REG_0D                   0x0D

/* Register 0Eh */
#define SC8571_REG_0E                   0x0E
#define SC8571_AC1_OVP_MASK             0xE0
#define SC8571_AC1_OVP_SHIFT            5
#define SC8571_AC1_OVP_BASE             6500
#define SC8571_AC1_OVP_LSB              2500

#define SC8571_AC2_OVP_MASK             0x1C
#define SC8571_AC2_OVP_SHIFT            2
#define SC8571_AC2_OVP_BASE             6500
#define SC8571_AC2_OVP_LSB              2500

#define SC8571_AC1_PD_EN_MASK           0x02
#define SC8571_AC1_PD_EN_SHIFT          1
#define SC8571_AC1_PD_ENABLE            1
#define SC8571_AC1_PD_DISABLE           0

#define SC8571_AC2_PD_EN_MASK           0x01
#define SC8571_AC2_PD_EN_SHIFT          0
#define SC8571_AC2_PD_ENABLE            1
#define SC8571_AC2_PD_DISABLE           0

/* Register 0Fh */
#define SC8571_REG_0F                   0x0F
#define SC8571_REG_RST_MASK             0x80
#define SC8571_REG_RST_SHIFT            7
#define SC8571_REG_RST_NOT_RESET        0
#define SC8571_REG_RST_RESET            1

#define SC8571_OTG_EN_MASK              0x20
#define SC8571_OTG_EN_SHIFT             5

#define SC8571_CHG_EN_MASK              0x10
#define SC8571_CHG_EN_SHIFT             4
#define SC8571_CHG_ENABLE               1
#define SC8571_CHG_DISABLE              0

#define SC8571_CHARGE_MODE_MASK         0x80
#define SC8571_CHARGE_MODE_SHIFT        3
#define SC8571_CHARGE_MODE_2_1          0
#define SC8571_CHARGE_MODE_1_1          1

#define SC8571_ACDRV1_STAT_MASK         0x02
#define SC8571_ACDRV1_STAT_SHIFT        1
#define SC8571_ACDRV1_OFF               0
#define SC8571_ACDRV1_ON                1

#define SC8571_ACDRV2_STAT_MASK         0x01
#define SC8571_ACDRV2_STAT_SHIFT        0
#define SC8571_ACDRV2_OFF               0
#define SC8571_ACDRV2_ON                1

/* Register 10h */
#define SC8571_REG_10                   0x10
#define SC8571_FSW_SET_MASK             0xE0
#define SC8571_FSW_SET_SHIFT            5
#define SC8571_FSW_SET_300KHZ           0
#define SC8571_FSW_SET_350KHZ           1
#define SC8571_FSW_SET_400KHZ           2
#define SC8571_FSW_SET_450KHZ           3
#define SC8571_FSW_SET_500KHZ           4
#define SC8571_FSW_SET_550KHZ           5
#define SC8571_FSW_SET_600KHZ           6
#define SC8571_FSW_SET_750KHZ           7

#define SC8571_WATCHDOG_MASK            0x18
#define SC8571_WATCHDOG_SHIFT           3
#define SC8571_WATCHDOG_0_65S           0
#define SC8571_WATCHDOG_1_3S            1
#define SC8571_WATCHDOG_6_5S            2
#define SC8571_WATCHDOG_39S             3

#define SC8571_WATCHDOG_DIS_MASK        0x04
#define SC8571_WATCHDOG_DIS_SHIFT       2
#define SC8571_WATCHDOG_ENABLE          0
#define SC8571_WATCHDOG_DISABLE         1

/* Register 11h */
#define SC8571_REG_11                   0x11
#define SC8571_IBAT_SNS_RES_MASK        0x08
#define SC8571_IBAT_SNS_RES_SHIFT       7
#define SC8571_IBAT_SNS_RES_2MHM        0
#define SC8571_IBAT_SNS_RES_5MHM        1

#define SC8571_SS_TIMEOUT_SET_MASK      0x70
#define SC8571_SS_TIMEOUT_SET_SHIFT     4
#define SC8571_SS_TIMEOUT_6P5MS         0
#define SC8571_SS_TIMEOUT_13MS          1
#define SC8571_SS_TIMEOUT_26MS          2
#define SC8571_SS_TIMEOUT_52MS          3
#define SC8571_SS_TIMEOUT_104MS         4
#define SC8571_SS_TIMEOUT_416MS         5
#define SC8571_SS_TIMEOUT_1600MS        6
#define SC8571_SS_TIMEOUT_13000MS       7

#define SC8571_IBUS_UCP_FALL_DEG_MASK   0x0C
#define SC8571_IBUS_UCP_FALL_DEG_SHIFT  2
#define SC8571_IBUS_UCP_FALL_10US       0
#define SC8571_IBUS_UCP_FALL_5MS        1
#define SC8571_IBUS_UCP_FALL_50MS       2
#define SC8571_IBUS_UCP_FALL_150MS      3

/* Register 12h */
#define SC8571_REG_12                   0x12
#define SC8571_VOUT_OVP_DIS_MASK        0x80
#define SC8571_VOUT_OVP_DIS_SHIFT       7
#define SC8571_VOUT_OVP_ENABLE          0
#define SC8571_VOUT_OVP_DISABLE         1

#define SC8571_VOUT_OVP_MASK            0x60
#define SC8571_VOUT_OVP_SHIFT           5
#define SC8571_VOUT_OVP_9_4V            0
#define SC8571_VOUT_OVP_9_6V            1
#define SC8571_VOUT_OVP_9_8V            2
#define SC8571_VOUT_OVP_10V             3

#define SC8571_FREQ_SHIFT_MASK              0x18
#define SC8571_FREQ_SHIFT_SHIFT             3
#define SC8571_FREQ_SHIFT_NORMINAL          0
#define SC8571_FREQ_SHIFT_POSITIVE10        1
#define SC8571_FREQ_SHIFT_NEGATIVE10        2
#define SC8571_FREQ_SHIFT_SPREAD_SPECTRUM   3

#define SC8571_MS_MASK                      0x03
#define SC8571_MS_SHIFT                     0
#define SC8571_MS_STANDALONE                0
#define SC8571_MS_SLAVE                     1
#define SC8571_MS_MASTER                    2

/* Register 13h */
#define SC8571_REG_13                       0x13
#define SC8571_BAT_OVP_STAT_MASK            0x80
#define SC8571_BAT_OVP_STAT_SHIFT           7

#define SC8571_BAT_OVP_ALM_STAT_MASK        0x40
#define SC8571_BAT_OVP_ALM_STAT_SHIFT       6

#define SC8571_OUT_OVP_STAT_MASK            0x20
#define SC8571_OUT_OVP_STAT_SHIFT           5

#define SC8571_BAT_OCP_STAT_MASK            0x10
#define SC8571_BAT_OCP_STAT_SHIFT           4

#define SC8571_BAT_OCP_ALM_STAT_MASK        0x08
#define SC8571_BAT_OCP_ALM_STAT_SHIFT       3

#define SC8571_BUS_OVP_STAT_MASK            0x02
#define SC8571_BUS_OVP_STAT_SHIFT           1

#define SC8571_BUS_OVP_ALM_STAT_MASK        0x01
#define SC8571_BUS_OVP_ALM_STAT_SHIFT       0

/* Register 14h */
#define SC8571_REG_14                       0x14
#define SC8571_BUS_OCP_STAT_MASK            0x80
#define SC8571_BUS_OCP_STAT_SHIFT           7

#define SC8571_BUS_UCP_FALL_STAT_MASK       0x20
#define SC8571_BUS_UCP_FALL_STAT_SHIFT      5

#define SC8571_PIN_DIAG_FALL_STAT_MASK      0x04
#define SC8571_PIN_DIAG_FALL_STAT_SHIFT     2

/* Register 15h */
#define SC8571_REG_15                       0x15
#define SC8571_AC1_OVP_STAT_MASK            0x80
#define SC8571_AC1_OVP_STAT_SHIFT           7

#define SC8571_AC2_OVP_ALM_STAT_MASK        0x40
#define SC8571_AC2_OVP_ALM_STAT_SHIFT       6

#define SC8571_VBAT_INSERT_STAT_MASK        0x20
#define SC8571_VBAT_INSERT_STAT_SHIFT       5

#define SC8571_VAC1_INSERT_STAT_MASK        0x10
#define SC8571_VAC1_INSERT_STAT_SHIFT       4

#define SC8571_VAC2_INSERT_STAT_MASK        0x08
#define SC8571_VAC2_INSERT_STAT_SHIFT       3

#define SC8571_VBUS_PRESENT_STAT_MASK       0x04
#define SC8571_VBUS_PRESENT_STAT_SHIFT      2

#define SC8571_ACRB1_CONFIG_STAT_MASK       0x02
#define SC8571_ACRB1_CONFIG_STAT_SHIFT      1

#define SC8571_ACRB2_CONFIG_STAT_MASK       0x01
#define SC8571_ACRB2_CONFIG_STAT_SHIFT      0

/* Register 16h */
#define SC8571_REG_16                       0x16
#define SC8571_SS_TIMEOUT_STAT_MASK         0x40
#define SC8571_SS_TIMEOUT_STAT_SHIFT        6

#define SC8571_TSBUS_TSBAT_ALM_STAT_MASK    0x20
#define SC8571_TSBUS_TSBAT_ALM_STAT_SHIFT   5

#define SC8571_TSBUS_FLT_STAT_MASK          0x10
#define SC8571_TSBUS_FLT_STAT_SHIFT         4

#define SC8571_TSBAT_FLT_STAT_MASK          0x08
#define SC8571_TSBAT_FLT_STAT_SHIFT         3

#define SC8571_TSHUT_FLT_STAT_MASK          0x04
#define SC8571_TSHUT_FLT_STAT_SHIFT         2

#define SC8571_TDIE_ALM_STAT_MASK           0x02
#define SC8571_TDIE_ALM_STAT_SHIFT          1

#define SC8571_WD_TIMEOUT_STAT_MASK         0x01
#define SC8571_WD_TIMEOUT_STAT_SHIFT        0

/* Register 17h */
#define SC8571_REG_17                       0x17
#define SC8571_CP_SWITCHING_STAT_MASK       0x40
#define SC8571_CP_SWITCHING_STAT_SHIFT      6

#define SC8571_VBUS_ERR_HI_STAT_MASK        0x10
#define SC8571_VBUS_ERR_HI_STAT_SHIFT       4

#define SC8571_VBUS_ERR_LO_STAT_MASK        0x08
#define SC8571_VBUS_ERR_LO_STAT_SHIFT       3

/* Register 18h */
#define SC8571_REG_18                       0x18
#define SC8571_BAT_OVP_FLAG_MASK            0x80
#define SC8571_BAT_OVP_FLAG_SHIFT           7

#define SC8571_BAT_OVP_ALM_FLAG_MASK        0x40
#define SC8571_BAT_OVP_ALM_FLAG_SHIFT       6

#define SC8571_OUT_OVP_FLAG_MASK            0x20
#define SC8571_OUT_OVP_FLAG_SHIFT           5

#define SC8571_BAT_OCP_FLAG_MASK            0x10
#define SC8571_BAT_OCP_FLAG_SHIFT           4

#define SC8571_BAT_OCP_ALM_FLAG_MASK        0x08
#define SC8571_BAT_OCP_ALM_FLAG_SHIFT       3

#define SC8571_BUS_OVP_FLAG_MASK            0x02
#define SC8571_BUS_OVP_FLAG_SHIFT           1

#define SC8571_BUS_OVP_ALM_FLAG_MASK        0x01
#define SC8571_BUS_OVP_ALM_FLAG_SHIFT       0

/* Register 19h */
#define SC8571_REG_19                       0x19
#define SC8571_BUS_OCP_FLAG_MASK            0x80
#define SC8571_BUS_OCP_FLAG_SHIFT           7

#define SC8571_BUS_UCP_FALL_FLAG_MASK       0x20
#define SC8571_BUS_UCP_FALL_FLAG_SHIFT      5

#define SC8571_PIN_DIAG_FALL_FLAG_MASK      0x04
#define SC8571_PIN_DIAG_FALL_FLAG_SHIFT     2

/* Register 1Ah */
#define SC8571_REG_1A                       0x1A
#define SC8571_AC1_OVP_FLAG_MASK            0x80
#define SC8571_AC1_OVP_FLAG_SHIFT           7

#define SC8571_AC2_OVP_FLAG_MASK            0x40
#define SC8571_AC2_OVP_FLAG_SHIFT           6

#define SC8571_VBAT_INSERT_FLAG_MASK        0x20
#define SC8571_VBAT_INSERT_FLAG_SHIFT       5

#define SC8571_VAC1_INSERT_FLAG_MASK        0x10
#define SC8571_VAC1_INSERT_FLAG_SHIFT       4

#define SC8571_VAC2_INSERT_FLAG_MASK        0x08
#define SC8571_VAC2_INSERT_FLAG_SHIFT       3

#define SC8571_VBUS_PRESENT_FLAG_MASK       0x04
#define SC8571_VBUS_PRESENT_FLAG_SHIFT      2

#define SC8571_ACRB1_CONFIG_FLAG_MASK       0x02
#define SC8571_ACRB1_CONFIG_FLAG_SHIFT      1

#define SC8571_ACRB2_CONFIG_FLAG_MASK       0x01
#define SC8571_ACRB2_CONFIG_FLAG_SHIFT      0

/* Register 1Bh */
#define SC8571_REG_1B                       0x1B
#define SC8571_SS_TIMEOUT_FLAG_MASK         0x40
#define SC8571_SS_TIMEOUT_FLAG_SHIFT        6

#define SC8571_TSBUS_TSBAT_ALM_FLAG_MASK    0x20
#define SC8571_TSBUS_TSBAT_ALM_FLAG_SHIFT   5

#define SC8571_TSBUS_FLT_FLAG_MASK          0x10
#define SC8571_TSBUS_FLT_FLAG_SHIFT         4

#define SC8571_TSBAT_FLT_FLAG_MASK          0x08
#define SC8571_TSBAT_FLT_FLAG_SHIFT         3

#define SC8571_TSHUT_FLT_FLAG_MASK          0x04
#define SC8571_TSHUT_FLT_FLAG_SHIFT         2

#define SC8571_TDIE_ALM_FLAG_MASK           0x02
#define SC8571_TDIE_ALM_FLAG_SHIFT          1

#define SC8571_WD_TIMEOUT_FLAG_MASK         0x01
#define SC8571_WD_TIMEOUT_FLAG_SHIFT        0

/* Register 1Ch */
#define SC8571_REG_1C                       0x1C
#define SC8571_VBUS_ERR_HI_FLAG_MASK        0x10
#define SC8571_VBUS_ERR_HI_FLAG_SHIFT       4

#define SC8571_VBUS_ERR_LO_FLAG_MASK        0x08
#define SC8571_VBUS_ERR_LO_FLAG_SHIFT       3

/* Register 1Dh */
#define SC8571_REG_1D                       0x1D
#define SC8571_BAT_OVP_MASK_MASK            0x80
#define SC8571_BAT_OVP_MASK_SHIFT           7

#define SC8571_BAT_OVP_ALM_MASK_MASK        0x40
#define SC8571_BAT_OVP_ALM_MASK_SHIFT       6

#define SC8571_OUT_OVP_MASK_MASK            0x20
#define SC8571_OUT_OVP_MASK_SHIFT           5

#define SC8571_BAT_OCP_MASK_MASK            0x10
#define SC8571_BAT_OCP_MASK_SHIFT           4

#define SC8571_BAT_OCP_ALM_MASK_MASK        0x08
#define SC8571_BAT_OCP_ALM_MASK_SHIFT       3

#define SC8571_BUS_OVP_MASK_MASK            0x02
#define SC8571_BUS_OVP_MASK_SHIFT           1

#define SC8571_BUS_OVP_ALM_MASK_MASK        0x01
#define SC8571_BUS_OVP_ALM_MASK_SHIFT       0

/* Register 1Eh */
#define SC8571_REG_1E                       0x1E
#define SC8571_BUS_OCP_MASK_MASK            0x80
#define SC8571_BUS_OCP_MASK_SHIFT           7

#define SC8571_BUS_UCP_FALL_MASK_MASK       0x20
#define SC8571_BUS_UCP_FALL_MASK_SHIFT      5

#define SC8571_PIN_DIAG_FALL_MASK_MASK      0x04
#define SC8571_PIN_DIAG_FALL_MASK_SHIFT     2

/* Register 1Fh */
#define SC8571_REG_1F                       0x1F
#define SC8571_AC1_OVP_MASK_MASK            0x80
#define SC8571_AC1_OVP_MASK_SHIFT           7

#define SC8571_AC2_OVP_ALM_MASK_MASK        0x40
#define SC8571_AC2_OVP_ALM_MASK_SHIFT       6

#define SC8571_VBAT_INSERT_MASK_MASK        0x20
#define SC8571_VBAT_INSERT_MASK_SHIFT       5

#define SC8571_VAC1_INSERT_MASK_MASK        0x10
#define SC8571_VAC1_INSERT_MASK_SHIFT       4

#define SC8571_VAC2_INSERT_MASK_MASK        0x08
#define SC8571_VAC2_INSERT_MASK_SHIFT       3

#define SC8571_VBUS_PRESENT_MASK_MASK       0x04
#define SC8571_VBUS_PRESENT_MASK_SHIFT      2

#define SC8571_ACRB1_CONFIG_MASK_MASK       0x02
#define SC8571_ACRB1_CONFIG_MASK_SHIFT      1

#define SC8571_ACRB2_CONFIG_MASK_MASK       0x01
#define SC8571_ACRB2_CONFIG_MASK_SHIFT      0

/* Register 20h */
#define SC8571_REG_20                       0x20
#define SC8571_SS_TIMEOUT_MASK_MASK         0x40
#define SC8571_SS_TIMEOUT_MASK_SHIFT        6

#define SC8571_TSBUS_TSBAT_ALM_MASK_MASK    0x20
#define SC8571_TSBUS_TSBAT_ALM_MASK_SHIFT   5

#define SC8571_TSBUS_FLT_MASK_MASK          0x10
#define SC8571_TSBUS_FLT_MASK_SHIFT         4

#define SC8571_TSBAT_FLT_MASK_MASK          0x08
#define SC8571_TSBAT_FLT_MASK_SHIFT         3

#define SC8571_TSHUT_FLT_MASK_MASK          0x04
#define SC8571_TSHUT_FLT_MASK_SHIFT         2

#define SC8571_TDIE_ALM_MASK_MASK           0x02
#define SC8571_TDIE_ALM_MASK_SHIFT          1

#define SC8571_WD_TIMEOUT_MASK_MASK         0x01
#define SC8571_WD_TIMEOUT_MASK_SHIFT        0

/* Register 21h */
#define SC8571_REG_21                       0x21
#define SC8571_VBUS_ERR_HI_MASK_MASK        0x10
#define SC8571_VBUS_ERR_HI_MASK_SHIFT       4

#define SC8571_VBUS_ERR_LO_MASK_MASK        0x08
#define SC8571_VBUS_ERR_LO_MASK_SHIFT       3

/* Register 22h */
#define SC8571_REG_22                       0x22
#define SC8571_DEVICE_ID                    0x41

/* Register 23h */
#define SC8571_REG_23                       0x23
#define SC8571_ADC_EN_MASK                  0x80
#define SC8571_ADC_EN_SHIFT                 7
#define SC8571_ADC_ENABLE                   1
#define SC8571_ADC_DISABLE                  0

#define SC8571_IBUS_ADC_DIS_MASK            0x02
#define SC8571_IBUS_ADC_DIS_SHIFT           1
#define SC8571_IBUS_ADC_ENABLE              0
#define SC8571_IBUS_ADC_DISABLE             1

#define SC8571_VBUS_ADC_DIS_MASK            0x01
#define SC8571_VBUS_ADC_DIS_SHIFT           0
#define SC8571_VBUS_ADC_ENABLE              0
#define SC8571_VBUS_ADC_DISABLE             1

/* Register 24h */
#define SC8571_REG_24                       0x24
#define SC8571_VAC1_ADC_DIS_MASK            0x80
#define SC8571_VAC1_ADC_DIS_SHIFT           7
#define SC8571_VAC1_ADC_ENABLE              0
#define SC8571_VAC1_ADC_DISABLE             1

#define SC8571_VAC2_ADC_DIS_MASK            0x40
#define SC8571_VAC2_ADC_DIS_SHIFT           6
#define SC8571_VAC2_ADC_ENABLE              0
#define SC8571_VAC2_ADC_DISABLE             1

#define SC8571_VOUT_ADC_DIS_MASK            0x20
#define SC8571_VOUT_ADC_DIS_SHIFT           5
#define SC8571_VOUT_ADC_ENABLE              0
#define SC8571_VOUT_ADC_DISABLE             1

#define SC8571_VBAT_ADC_DIS_MASK            0x10
#define SC8571_VBAT_ADC_DIS_SHIFT           4
#define SC8571_VBAT_ADC_ENABLE              0
#define SC8571_VBAT_ADC_DISABLE             1

#define SC8571_IBAT_ADC_DIS_MASK            0x08
#define SC8571_IBAT_ADC_DIS_SHIFT           3
#define SC8571_IBAT_ADC_ENABLE              0
#define SC8571_IBAT_ADC_DISABLE             1

#define SC8571_TSBUS_ADC_DIS_MASK           0x04
#define SC8571_TSBUS_ADC_DIS_SHIFT          2
#define SC8571_TSBUS_ADC_ENABLE             0
#define SC8571_TSBUS_ADC_DISABLE            1

#define SC8571_TSBAT_ADC_DIS_MASK           0x02
#define SC8571_TSBAT_ADC_DIS_SHIFT          1
#define SC8571_TSBAT_ADC_ENABLE             0
#define SC8571_TSBAT_ADC_DISABLE            1

#define SC8571_TDIE_ADC_DIS_MASK            0x01
#define SC8571_TDIE_ADC_DIS_SHIFT           0
#define SC8571_TDIE_ADC_ENABLE              0
#define SC8571_TDIE_ADC_DISABLE             1

/* Register 25h */
#define SC8571_REG_25                       0x25
#define SC8571_IBUS_POL_H_MASK              0x0F
#define SC8571_IBUS_ADC_LSB                 25 / 10

/* Register 26h */
#define SC8571_REG_26                       0x26
#define SC8571_IBUS_POL_L_MASK              0xFF

/* Register 27h */
#define SC8571_REG_27                       0x27
#define SC8571_VBUS_POL_H_MASK              0x0F
#define SC8571_VBUS_ADC_LSB                 625 / 100

/* Register 28h */
#define SC8571_REG_28                       0x28
#define SC8571_VBUS_POL_L_MASK              0xFF

/* Register 29h */
#define SC8571_REG_29                       0x29
#define SC8571_VAC1_POL_H_MASK              0x0F
#define SC8571_VAC1_ADC_LSB                 625 / 100

/* Register 2Ah */
#define SC8571_REG_2A						0x2A
#define SC8571_VAC1_POL_L_MASK				0xFF

/* Register 2Bh */
#define SC8571_REG_2B                       0x2B
#define SC8571_VAC2_POL_H_MASK              0x0F
#define SC8571_VAC2_ADC_LSB                 625 / 100

/* Register 2Ch */
#define SC8571_REG_2C                       0x2C
#define SC8571_VAC2_POL_L_MASK              0xFF

/* Register 2Dh */
#define SC8571_REG_2D                       0x2D
#define SC8571_VOUT_POL_H_MASK              0x0F
#define SC8571_VOUT_ADC_LSB                 25 / 10

/* Register 2Eh */
#define SC8571_REG_2E                       0x2E
#define SC8571_VOUT_POL_L_MASK              0xFF

/* Register 2Fh */
#define SC8571_REG_2F                       0x2F
#define SC8571_VBAT_POL_H_MASK              0x0F
#define SC8571_VBAT_ADC_LSB                 25 / 10

/* Register 30h */
#define SC8571_REG_30                       0x30
#define SC8571_VBAT_POL_L_MASK              0xFF

/* Register 31h */
#define SC8571_REG_31                       0x31
#define SC8571_IBAT_POL_H_MASK              0x0F
#define SC8571_IBAT_ADC_LSB                 3125 / 1000

/* Register 32h */
#define SC8571_REG_32                       0x32
#define SC8571_IBAT_POL_L_MASK              0xFF

/* Register 33h */
#define SC8571_REG_33                       0x33
#define SC8571_TSBUS_POL_H_MASK             0x03
#define SC8571_TSBUS_ADC_LSB                9766 / 100000

/* Register 34h */
#define SC8571_REG_34                       0x34
#define SC8571_TSBUS_POL_L_MASK             0xFF

/* Register 35h */
#define SC8571_REG_35                       0x35
#define SC8571_TSBAT_POL_H_MASK             0x03
#define SC8571_TSBAT_ADC_LSB                9766 / 100000

/* Register 36h */
#define SC8571_REG_36                       0x36
#define SC8571_TSBAT_POL_L_MASK             0xFF

/* Register 37h */
#define SC8571_REG_37                       0x37
#define SC8571_TDIE_POL_H_MASK              0x01
#define SC8571_TDIE_ADC_LSB                 5 / 10

/* Register 38h */
#define SC8571_REG_38                       0x38
#define SC8571_TDIE_POL_L_MASK              0xFF

/* Register 40h */
#define SC8571_REG_40                       0x40
#define SC8571_POR_FLAG_MASK                0x80
#define SC8571_POR_FLAG_SHIFT               7

#define SC8571_ACDRV_MANUAL_EN_MASK         0x40
#define SC8571_ACDRV_MANUAL_EN_SHIFT        6

#define SC8571_ACDRV1_EN_MASK               0x20
#define SC8571_ACDRV1_EN_SHIFT              5

#define SC8571_ACDRV2_EN_MASK               0x10
#define SC8571_ACDRV2_EN_SHIFT              4

#define SC8571_IBUS_UCP_RISE_FLAG_MASK      0x08
#define SC8571_IBUS_UCP_RISE_FLAG_SHIFT     3

#define SC8571_IBUS_UCP_RISE_MASK_MASK      0x04
#define SC8571_IBUS_UCP_RISE_MASK_SHIFT     2

#define SC8571_VOUTOK_CHG_FLAG_MASK         0x02
#define SC8571_VOUTOK_CHG_FLAG_SHIFT        1

#define SC8571_VOUTOK_CHG_MASK_MASK         0x01
#define SC8571_VOUTOK_CHG_MASK_SHIFT        0

/* Register 41h */
#define SC8571_REG_41                       0x41
#define SC8571_SS_TIMEOUT_DIS_MASK          0x80
#define SC8571_SS_TIMEOUT_DIS_SHIFT         7
#define SC8571_SS_TIMEOUT_DIS               1
#define SC8571_SS_TIMEOUT_EN                0

#define SC8571_VBUS_OVP_DIS_MASK            0x40
#define SC8571_VBUS_OVP_DIS_SHIFT           6
#define SC8571_VBUS_OVP_DISABLE             1
#define SC8571_VBUS_OVP_ENABLE              0

#define SC8571_PMID2OUT_OVP_DIS_MASK        0x20
#define SC8571_PMID2OUT_OVP_DIS_SHIFT       5
#define SC8571_PMID2OUT_OVP_DISABLE         1
#define SC8571_PMID2OUT_OVP_ENABLE          0

#define SC8571_PMID2OUT_UVP_DIS_MASK        0x10
#define SC8571_PMID2OUT_UVP_DIS_SHIFT       4
#define SC8571_PMID2OUT_UVP_DISABLE         1
#define SC8571_PMID2OUT_UVP_ENABLE          0

#define SC8571_ACRB1_DET_DIS_MASK           0x08
#define SC8571_ACRB1_DET_DIS_SHIFT          3
#define SC8571_ACRB1_DET_DIS                1
#define SC8571_ACRB1_DET_EN                 0

#define SC8571_ACRB2_DET_DIS_MASK           0x04
#define SC8571_ACRB2_DET_DIS_SHIFT          2
#define SC8571_ACRB2_DET_DIS                1
#define SC8571_ACRB2_DET_EN                 0

#define SC8571_IBAT_SNS_DIS_MASK            0x02
#define SC8571_IBAT_SNS_DIS_SHIFT           1
#define SC8571_IBAT_SNS_DIS                 1
#define SC8571_IBAT_SNS_EN                  0

#define SC8571_VBAT_SNS_DIS_MASK            0x01
#define SC8571_VBAT_SNS_DIS_SHIFT           0
#define SC8571_VBAT_SNS_DIS                 1
#define SC8571_VBAT_SNS_EN                  0

/* Register 42h */
#define SC8571_REG_42                       0x42
#define SC8571_PMID2OUT_UVP_MASK            0xE0
#define SC8571_PMID2OUT_UVP_SHIFT           5
#define SC8571_PMID2OUT_UVP_BASE            50
#define SC8571_PMID2OUT_UVP_LSB             25

#define SC8571_PMID2OUT_OVP_MASK            0x1C
#define SC8571_PMID2OUT_OVP_SHIFT           2
#define SC8571_PMID2OUT_OVP_BASE            125
#define SC8571_PMID2OUT_OVP_LSB             50

#define SC8571_PMID2OUT_UVP_FLAG_MASK       0x02
#define SC8571_PMID2OUT_UVP_FLAG_SHIFT      1

#define SC8571_PMID2OUT_OVP_FLAG_MASK       0x01
#define SC8571_PMID2OUT_OVP_FLAG_SHIFT      0

/* Register 43h */
#define SC8571_REG_43                       0x43
#define SC8571_PMID2OUT_UVP_MASK_MASK       0x08
#define SC8571_PMID2OUT_UVP_MASK_SHIFT      3

#define SC8571_PMID2OUT_OVP_MASK_MASK       0x04
#define SC8571_PMID2OUT_OVP_MASK_SHIFT      2

#define SC8571_VBUS_TH_CHG_EN_STAT_MASK     0x02
#define SC8571_VBUS_TH_CHG_EN_STAT_SHIFT    1

#define SC8571_VOUT_TH_CHG_REGN_STAT_MASK   0x01
#define SC8571_VOUT_TH_CHG_REGN_STAT_SHIFT  0

typedef enum
{
	PPS_CP_ID_NU2205 = 0x0,
	PPS_CP_ID_BQ25980 = 0x12,
	PPS_CP_ID_SC8571 = 0x41,
	PPS_CP_ID_UNKNOWN,
}PPS_CP_TYPE;


struct chip_sc8571 {
	struct i2c_client *master_client;
	struct device *master_dev;

	struct i2c_client *slave_client;
	struct device *slave_dev;
	int ucp_gpio;
	int ucp_irq;
	struct pinctrl *ucp_pinctrl;
	struct pinctrl_state *ucp_int_active;
	struct pinctrl_state *ucp_int_sleep;
};

int sc8571_master_get_tdie(void);
int sc8571_master_get_ucp_flag(void);
int sc8571_master_get_vac(void);
int sc8571_master_get_vbus(void);
int sc8571_master_get_ibus(void);
int sc8571_master_cp_enable(int enable);
bool sc8571_master_get_enable(void);
void sc8571_master_cfg_sc(void);
void sc8571_master_cfg_bypass(void);
void sc8571_master_hardware_init(void);
void sc8571_master_reset(void);
int sc8571_master_dump_registers(void);
int sc8571_master_get_vac(void);
int sc8571_master_get_vout(void);


int sc8571_slave_get_tdie(void);
int sc8571_slave_get_ucp_flag(void);
int sc8571_slave_get_vac(void);
int sc8571_slave_get_vbus(void);
int sc8571_slave_get_ibus(void);
int sc8571_slave_cp_enable(int enable);
bool sc8571_slave_get_enable(void);
void sc8571_slave_cfg_sc(void);
void sc8571_slave_cfg_bypass(void);
void sc8571_slave_hardware_init(void);
void sc8571_slave_reset(void);
int sc8571_slave_dump_registers(void);
int sc8571_slave_get_vout(void);
int sc8571_slave_get_vac(void);

#if (LINUX_VERSION_CODE >= KERNEL_VERSION(5, 4, 0))
int sc8571_master_subsys_init(void);
int sc8571_slave_subsys_init(void);
void sc8571_master_subsys_exit(void);
void sc8571_slave_subsys_exit(void);
#endif

#define GET_VBAT_PREDATA_DEFAULT (0x64 << SC8547_DATA_H_SHIFT) | 0x02;
#define EXEC_TIME_THR	1500
#endif/*__SC8571_HEADER__*/
