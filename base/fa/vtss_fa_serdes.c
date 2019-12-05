// Copyright (c) 2004-2020 Microchip Technology Inc. and its subsidiaries.
// SPDX-License-Identifier: MIT

#define VTSS_TRACE_GROUP VTSS_TRACE_GROUP_PORT
#include "vtss_fa_cil.h"
#include "vtss_fa_sd10g28_setup.h"
#include "vtss_fa_sd25g28_setup.h"

#if defined(VTSS_ARCH_FA)

u32 vtss_to_sd6g_lane(u32 indx)
{
    switch (indx) {
    case 0:  return VTSS_TO_SD6G_LANE_0;
    case 1:  return VTSS_TO_SD6G_LANE_1;
    case 2:  return VTSS_TO_SD6G_LANE_2;
    case 3:  return VTSS_TO_SD6G_LANE_3;
    case 4:  return VTSS_TO_SD6G_LANE_4;
    case 5:  return VTSS_TO_SD6G_LANE_5;
    case 6:  return VTSS_TO_SD6G_LANE_6;
    case 7:  return VTSS_TO_SD6G_LANE_7;
    case 8:  return VTSS_TO_SD6G_LANE_8;
    case 9:  return VTSS_TO_SD6G_LANE_9;
    case 10: return VTSS_TO_SD6G_LANE_10;
    case 11: return VTSS_TO_SD6G_LANE_11;
    case 12: return VTSS_TO_SD6G_LANE_12;
    default:
        VTSS_E("illegal 6G_lane index %d",indx);
        return 0;
    }
}

u32 vtss_to_sd10g_lane(u32 indx)
{
    switch (indx) {
    case 0:  return VTSS_TO_SD10G_LANE_0;
    case 1:  return VTSS_TO_SD10G_LANE_1;
    case 2:  return VTSS_TO_SD10G_LANE_2;
    case 3:  return VTSS_TO_SD10G_LANE_3;
    case 4:  return VTSS_TO_SD10G_LANE_4;
    case 5:  return VTSS_TO_SD10G_LANE_5;
    case 6:  return VTSS_TO_SD10G_LANE_6;
    case 7:  return VTSS_TO_SD10G_LANE_7;
    case 8:  return VTSS_TO_SD10G_LANE_8;
    case 9:  return VTSS_TO_SD10G_LANE_9;
    case 10: return VTSS_TO_SD10G_LANE_10;
    case 11: return VTSS_TO_SD10G_LANE_11;
    default:
        VTSS_E("illegal 10G_lane index %d",indx);
        return 0;
    }

}

u32 vtss_to_sd25g_lane(u32 indx)
{
    switch (indx) {
    case 0: return VTSS_TO_SD25G_LANE_0;
    case 1: return VTSS_TO_SD25G_LANE_1;
    case 2: return VTSS_TO_SD25G_LANE_2;
    case 3: return VTSS_TO_SD25G_LANE_3;
    case 4: return VTSS_TO_SD25G_LANE_4;
    case 5: return VTSS_TO_SD25G_LANE_5;
    case 6: return VTSS_TO_SD25G_LANE_6;
    case 7: return VTSS_TO_SD25G_LANE_7;
    default:
        VTSS_E("illegal 25G_lane index %d",indx);
        return 0;
    }
}

u32 vtss_to_sd_cmu(u32 indx)
{
    switch (indx) {
    case 0: return VTSS_TO_SD_CMU_0;
    case 1: return VTSS_TO_SD_CMU_1;
    case 2: return VTSS_TO_SD_CMU_2;
    case 3: return VTSS_TO_SD_CMU_3;
    case 4: return VTSS_TO_SD_CMU_4;
    case 5: return VTSS_TO_SD_CMU_5;
    case 6: return VTSS_TO_SD_CMU_6;
    case 7: return VTSS_TO_SD_CMU_7;
    case 8: return VTSS_TO_SD_CMU_8;
    case 9: return VTSS_TO_SD_CMU_9;
    case 10: return VTSS_TO_SD_CMU_10;
    case 11: return VTSS_TO_SD_CMU_11;
    case 12: return VTSS_TO_SD_CMU_12;
    case 13: return VTSS_TO_SD_CMU_13;
    default:
        VTSS_E("illegal sd_cmu index %d",indx);
        return 0;
    }
}

u32 vtss_to_sd_cmu_cfg(u32 indx)
{
    switch (indx) {
    case 0: return VTSS_TO_SD_CMU_CFG_0;
    case 1: return VTSS_TO_SD_CMU_CFG_1;
    case 2: return VTSS_TO_SD_CMU_CFG_2;
    case 3: return VTSS_TO_SD_CMU_CFG_3;
    case 4: return VTSS_TO_SD_CMU_CFG_4;
    case 5: return VTSS_TO_SD_CMU_CFG_5;
    case 6: return VTSS_TO_SD_CMU_CFG_6;
    case 7: return VTSS_TO_SD_CMU_CFG_7;
    case 8: return VTSS_TO_SD_CMU_CFG_8;
    case 9: return VTSS_TO_SD_CMU_CFG_9;
    case 10: return VTSS_TO_SD_CMU_CFG_10;
    case 11: return VTSS_TO_SD_CMU_CFG_11;
    case 12: return VTSS_TO_SD_CMU_CFG_12;
    case 13: return VTSS_TO_SD_CMU_CFG_13;
    default:
        VTSS_E("illegal sd_cmu index %d",indx);
        return 0;
    }
}

u32 vtss_to_sd_lane(u32 indx)
{
    switch (indx) {
    case 0: return VTSS_TO_SD_LANE_0;
    case 1: return VTSS_TO_SD_LANE_1;
    case 2: return VTSS_TO_SD_LANE_2;
    case 3: return VTSS_TO_SD_LANE_3;
    case 4: return VTSS_TO_SD_LANE_4;
    case 5: return VTSS_TO_SD_LANE_5;
    case 6: return VTSS_TO_SD_LANE_6;
    case 7: return VTSS_TO_SD_LANE_7;
    case 8: return VTSS_TO_SD_LANE_8;
    case 9: return VTSS_TO_SD_LANE_9;
    case 10: return VTSS_TO_SD_LANE_10;
    case 11: return VTSS_TO_SD_LANE_11;
    case 12: return VTSS_TO_SD_LANE_12;
    case 13: return VTSS_TO_SD_LANE_13;
    case 14: return VTSS_TO_SD_LANE_14;
    case 15: return VTSS_TO_SD_LANE_15;
    case 16: return VTSS_TO_SD_LANE_16;
    case 17: return VTSS_TO_SD_LANE_17;
    case 18: return VTSS_TO_SD_LANE_18;
    case 19: return VTSS_TO_SD_LANE_19;
    case 20: return VTSS_TO_SD_LANE_20;
    case 21: return VTSS_TO_SD_LANE_21;
    case 22: return VTSS_TO_SD_LANE_22;
    case 23: return VTSS_TO_SD_LANE_23;
    case 24: return VTSS_TO_SD_LANE_24;
    case 25: return VTSS_TO_SD_LANE_25;
    case 26: return VTSS_TO_SD_LANE_26;
    case 27: return VTSS_TO_SD_LANE_27;
    case 28: return VTSS_TO_SD_LANE_28;
    case 29: return VTSS_TO_SD_LANE_29;
    case 30: return VTSS_TO_SD_LANE_30;
    case 31: return VTSS_TO_SD_LANE_31;
    case 32: return VTSS_TO_SD_LANE_32;
    default:
        VTSS_E("illegal sd_lane index %d",indx);
        return 0;
    }
}

static vtss_sd10g28_preset_t serdes2preset(vtss_sd10g_media_type_t m)
{
    switch (m) {
    case VTSS_SD10G_MEDIA_SR:     return(VTSS_SD10G28_SR);
    case VTSS_SD10G_MEDIA_ZR:     return(VTSS_SD10G28_ZR);
    case VTSS_SD10G_MEDIA_DAC:    return(VTSS_SD10G28_DAC3M); // Default to 3m
    case VTSS_SD10G_MEDIA_DAC_1M: return(VTSS_SD10G28_DAC1M);
    case VTSS_SD10G_MEDIA_DAC_2M: return(VTSS_SD10G28_DAC2M);
    case VTSS_SD10G_MEDIA_DAC_3M: return(VTSS_SD10G28_DAC3M);
    case VTSS_SD10G_MEDIA_DAC_5M: return(VTSS_SD10G28_DAC5M);
    case VTSS_SD10G_MEDIA_BP:     return(VTSS_SD10G28_KR);
    case VTSS_SD10G_MEDIA_B2B:    return(VTSS_SD10G28_KR);
    case VTSS_SD10G_MEDIA_10G_KR: return(VTSS_SD10G28_KR);
    default:
    return(VTSS_SD10G28_PRESET_NONE);
    }
}

const char *vtss_serdes_preset_txt(vtss_sd10g28_preset_t pr)
{
    switch (pr) {
    case VTSS_SD10G28_ATE:         return "ATE";
    case VTSS_SD10G28_ZR:          return "ZR";
    case VTSS_SD10G28_DAC3M:       return "DAC3M";
    case VTSS_SD10G28_DAC5M:       return "DAC5M";
    case VTSS_SD10G28_DAC2M:       return "DAC2M";
    case VTSS_SD10G28_DAC1M:       return "DAC1M";
    case VTSS_SD10G28_DAC3M_PVT:   return "DAC3_PVT";
    case VTSS_SD10G28_SR:          return "SR";
    case VTSS_SD10G28_KR:          return "KR";
    case VTSS_SD10G28_PRESET_NONE: return "None";
    }
    return "?   ";
}

static vtss_sd25g28_preset_t serdes2preset_25g(vtss_sd10g_media_type_t m, vtss_port_speed_t speed)
{
    if (speed == VTSS_SPEED_10G) {
        switch (m) {
        case VTSS_SD10G_MEDIA_SR:     return(VTSS_SD25G28_10GSR);
        case VTSS_SD10G_MEDIA_ZR:     return(VTSS_SD25G28_ZR);
        case VTSS_SD10G_MEDIA_DAC:    return(VTSS_SD25G28_10GDAC3M); // Default to 3m
        case VTSS_SD10G_MEDIA_DAC_1M: return(VTSS_SD25G28_10GDAC1M);
        case VTSS_SD10G_MEDIA_DAC_2M: return(VTSS_SD25G28_10GDAC3M);
        case VTSS_SD10G_MEDIA_DAC_3M: return(VTSS_SD25G28_10GDAC3M);
        case VTSS_SD10G_MEDIA_DAC_5M: return(VTSS_SD25G28_10GDAC5M);
        case VTSS_SD10G_MEDIA_BP:     return(VTSS_SD25G28_KR_HW);
        case VTSS_SD10G_MEDIA_B2B:    return(VTSS_SD25G28_KR_HW);
        case VTSS_SD10G_MEDIA_10G_KR: return(VTSS_SD25G28_KR_HW);
        default:
            return(VTSS_SD25G28_PRESET_NONE);
        }
    } else {
        switch (m) {
        case VTSS_SD10G_MEDIA_SR:
        case VTSS_SD10G_MEDIA_ZR:     return(VTSS_SD25G28_25GSR);
        case VTSS_SD10G_MEDIA_DAC:
        case VTSS_SD10G_MEDIA_DAC_1M:
        case VTSS_SD10G_MEDIA_DAC_2M:
        case VTSS_SD10G_MEDIA_DAC_3M:
        case VTSS_SD10G_MEDIA_DAC_5M: return(VTSS_SD25G28_25GDAC2M);
        case VTSS_SD10G_MEDIA_BP:
        case VTSS_SD10G_MEDIA_B2B:
        case VTSS_SD10G_MEDIA_10G_KR:
        default:
            return(VTSS_SD25G28_PRESET_NONE);
        }
    }
}

const char *vtss_serdes25g_preset_txt(vtss_sd25g28_preset_t pr)
{
    switch (pr) {
    case VTSS_SD25G28_ATE:         return "ATE";
    case VTSS_SD25G28_ZR:          return "ZR";
    case VTSS_SD25G28_10GDAC3M:    return "10G-DAC3m";
    case VTSS_SD25G28_10GDAC5M:    return "10G-DAC5m";
    case VTSS_SD25G28_10GDAC1M:    return "10G-DAC1m";
    case VTSS_SD25G28_10GDAC3M_PVT:return "10G-DAC3m_PVT";
    case VTSS_SD25G28_10GSR:       return "10G-SR";
    case VTSS_SD25G28_KR_HW:       return "KR";
    case VTSS_SD25G28_25GSR:       return "25G-SR";
    case VTSS_SD25G28_25GDAC2M:    return "25G-DAC2m";
    case VTSS_SD25G28_PRESET_NONE: return "None";
    }
    return "?   ";
}



u32 vtss_fa_sd10g28_get_cmu (vtss_state_t *vtss_state, vtss_sd10g28_cmu_t cmu_type, vtss_port_no_t port_no) {

    u32 serdes_no;
    u32 sd_type;

    VTSS_RC(vtss_fa_port2sd(vtss_state, port_no, &serdes_no, &sd_type));

    if (cmu_type == 0) {
        // Main CMU of FA
        if (serdes_no < 8 ) {
            return 2;
        } else if (serdes_no < 16 ) {
            return 5;
        } else if (serdes_no == 16) {
            return 8;
        } else {
            return 11;
        }
    } else if ( cmu_type == 1) {
        // AUX1 CMU of FA
        if (serdes_no < 2 ) {
            return 0;
        } else if (serdes_no < 10 ) {
            return 3;
        } else if (serdes_no < 16) {
            return 6;
        } else if (serdes_no < 19) {
            return 9;
        } else {
            return 12;
        }
    } else {
        // AUX2 CMU of FA
        if (serdes_no < 4 ) {
            return 1;
        } else if (serdes_no < 12 ) {
            return 4;
        } else if (serdes_no < 17) {
            return 7;
        } else if (serdes_no < 21) {
            return 10;
        } else {
            return 13;
        }
    }
}

static void buf_set(char *buf, u32 *u_ptr)
{
    u32 num;
    buf[0] = '\0';
    for (int a = 8; a >= 0; a--) {
        num = u_ptr[a];
        for (int i = 7; i >= 0; i--) {
            sprintf(buf + strlen(buf), "%d",(num & (1 << i)) >> i);
        }
    }
}

static vtss_rc fa_port_10g_kr_tap_set(vtss_state_t *vtss_state, const vtss_port_no_t port_no, u16 tap_dly, u16 tap_adv, u16 ampl)
{
    u32 sd_indx, sd_type, sd_tgt;
    VTSS_RC(vtss_fa_port2sd(vtss_state, port_no, &sd_indx, &sd_type));
    sd_tgt = VTSS_TO_SD10G_LANE(sd_indx);

    REG_WRM(VTSS_SD10G_LANE_TARGET_LANE_04(sd_tgt),
            VTSS_F_SD10G_LANE_TARGET_LANE_04_CFG_TAP_DLY_4_0(tap_dly),
            VTSS_M_SD10G_LANE_TARGET_LANE_04_CFG_TAP_DLY_4_0);

    REG_WRM(VTSS_SD10G_LANE_TARGET_LANE_02(sd_tgt),
            VTSS_F_SD10G_LANE_TARGET_LANE_02_CFG_TAP_ADV_3_0(tap_adv),
            VTSS_M_SD10G_LANE_TARGET_LANE_02_CFG_TAP_ADV_3_0);

    REG_WRM(VTSS_SD10G_LANE_TARGET_LANE_33(sd_tgt),
            VTSS_F_SD10G_LANE_TARGET_LANE_33_CFG_ITX_IPDRIVER_BASE_2_0(ampl >> 6),
            VTSS_M_SD10G_LANE_TARGET_LANE_33_CFG_ITX_IPDRIVER_BASE_2_0);

    REG_WRM(VTSS_SD10G_LANE_TARGET_LANE_52(sd_tgt),
            VTSS_F_SD10G_LANE_TARGET_LANE_52_CFG_IBIAS_TUNE_RESERVE_5_0(ampl & 0x3F),
            VTSS_M_SD10G_LANE_TARGET_LANE_52_CFG_IBIAS_TUNE_RESERVE_5_0);

    return VTSS_RC_OK;

}

vtss_rc fa_port_10g_kr_tap_get(vtss_state_t *vtss_state, vtss_port_no_t port_no, u16 *tap_dly, u16 *tap_adv, u16 *ampl)
{
    u32 sd_indx = 0, sd_type, sd_tgt, val1, val2;
    VTSS_RC(vtss_fa_port2sd(vtss_state, port_no, &sd_indx, &sd_type));
    sd_tgt = VTSS_TO_SD10G_LANE(sd_indx);

    REG_RD(VTSS_SD10G_LANE_TARGET_LANE_04(sd_tgt), &val1);
    *tap_dly = (u16)VTSS_X_SD10G_LANE_TARGET_LANE_04_CFG_TAP_DLY_4_0(val1);

    REG_RD(VTSS_SD10G_LANE_TARGET_LANE_02(sd_tgt), &val1);
    *tap_adv = (u16)VTSS_X_SD10G_LANE_TARGET_LANE_02_CFG_TAP_ADV_3_0(val1);

    REG_RD(VTSS_SD10G_LANE_TARGET_LANE_33(sd_tgt), &val1);
    val1 = VTSS_X_SD10G_LANE_TARGET_LANE_33_CFG_ITX_IPDRIVER_BASE_2_0(val1) << 6;
    REG_RD(VTSS_SD10G_LANE_TARGET_LANE_52(sd_tgt), &val2);
    *ampl = (u16)(val1 + val2);

    return VTSS_RC_OK;
}

static vtss_rc fa_serdes_dfe_set(vtss_state_t *vtss_state, const vtss_debug_printf_t pr, u32 port_no, BOOL ena)
{
    u32 indx, type, sd_tgt, sd_lane_tgt = 0;
    /* Map API port to Serdes instance */
    VTSS_RC(vtss_fa_port2sd(vtss_state, port_no, &indx, &type));

    if (type == FA_SERDES_TYPE_6G) {
        sd_tgt = VTSS_TO_SD6G_LANE(indx);
    } else if (type == FA_SERDES_TYPE_10G) {
        sd_tgt = VTSS_TO_SD10G_LANE(indx);
        sd_lane_tgt = VTSS_TO_SD_LANE(indx+VTSS_SERDES_10G_START);
    } else {
        sd_tgt = VTSS_TO_SD25G_LANE(indx);
        sd_lane_tgt = VTSS_TO_SD_LANE(indx+VTSS_SERDES_25G_START);
    }

    if (type == FA_SERDES_TYPE_10G) {
        REG_WRM(VTSS_SD10G_LANE_TARGET_LANE_23(sd_tgt),
                VTSS_F_SD10G_LANE_TARGET_LANE_23_CFG_EN_DFEDIG(ena) |
                VTSS_F_SD10G_LANE_TARGET_LANE_23_CFG_DFECK_EN(ena) |
                VTSS_F_SD10G_LANE_TARGET_LANE_23_CFG_ERRAMP_PD(!ena) |
                VTSS_F_SD10G_LANE_TARGET_LANE_23_CFG_DFE_PD(!ena),
                VTSS_M_SD10G_LANE_TARGET_LANE_23_CFG_EN_DFEDIG |
                VTSS_M_SD10G_LANE_TARGET_LANE_23_CFG_DFECK_EN |
                VTSS_M_SD10G_LANE_TARGET_LANE_23_CFG_ERRAMP_PD |
                VTSS_M_SD10G_LANE_TARGET_LANE_23_CFG_DFE_PD);

        REG_WRM(VTSS_SD10G_LANE_TARGET_LANE_22(sd_tgt),
                VTSS_F_SD10G_LANE_TARGET_LANE_22_CFG_DFETAP_EN_5_1(ena ? 0x1f : 0),
                VTSS_M_SD10G_LANE_TARGET_LANE_22_CFG_DFETAP_EN_5_1);
        REG_WRM(VTSS_SD10G_LANE_TARGET_LANE_1A(sd_tgt),
                VTSS_F_SD10G_LANE_TARGET_LANE_1A_CFG_PI_DFE_EN(ena),
                VTSS_M_SD10G_LANE_TARGET_LANE_1A_CFG_PI_DFE_EN);

        REG_WRM_SET(VTSS_SD25G_TARGET_LANE_0D(sd_tgt),
                    VTSS_M_SD25G_TARGET_LANE_0D_LN_CFG_SUMMER_EN);

        REG_WRM(VTSS_SD10G_LANE_TARGET_LANE_31(sd_tgt),
                VTSS_F_SD10G_LANE_TARGET_LANE_31_CFG_RSTN_DFEDIG(ena),
                VTSS_M_SD10G_LANE_TARGET_LANE_31_CFG_RSTN_DFEDIG);

        if (!ena) {
            REG_WRM_SET(VTSS_SD_LANE_TARGET_SD_LANE_CFG(sd_lane_tgt),
                    VTSS_M_SD_LANE_TARGET_SD_LANE_CFG_LANE_RST);
            VTSS_MSLEEP(1);
            REG_WRM_CLR(VTSS_SD_LANE_TARGET_SD_LANE_CFG(sd_lane_tgt),
                        VTSS_M_SD_LANE_TARGET_SD_LANE_CFG_LANE_RST);
        }
        if (ena) {
            REG_WRM(VTSS_SD10G_LANE_TARGET_LANE_1C(sd_tgt),
                    VTSS_F_SD10G_LANE_TARGET_LANE_1C_CFG_DFEDIG_BYP_5_0(0),
                    VTSS_M_SD10G_LANE_TARGET_LANE_1C_CFG_DFEDIG_BYP_5_0);
        }

        REG_WRM(VTSS_SD10G_LANE_TARGET_LANE_31(sd_tgt),
                VTSS_F_SD10G_LANE_TARGET_LANE_31_CFG_RSTN_DFEDIG(ena),
                VTSS_M_SD10G_LANE_TARGET_LANE_31_CFG_RSTN_DFEDIG);


    } else {
        REG_WRM(VTSS_SD25G_TARGET_LANE_0E(sd_tgt),
                VTSS_F_SD25G_TARGET_LANE_0E_LN_CFG_EN_DFEDIG(ena),
                VTSS_M_SD25G_TARGET_LANE_0E_LN_CFG_EN_DFEDIG);
        REG_WRM_SET(VTSS_SD25G_TARGET_LANE_0D(sd_tgt),
                    VTSS_M_SD25G_TARGET_LANE_0D_LN_CFG_DFECK_EN);
        REG_WRM(VTSS_SD25G_TARGET_LANE_1C(sd_tgt),
                VTSS_F_SD25G_TARGET_LANE_1C_LN_CFG_DFE_PD(ena),
                VTSS_M_SD25G_TARGET_LANE_1C_LN_CFG_DFE_PD);
        REG_WRM(VTSS_SD25G_TARGET_LANE_0F(sd_tgt),
                VTSS_F_SD25G_TARGET_LANE_0F_LN_CFG_DFETAP_EN_5_1(ena ? 0x1F : 0),
                VTSS_M_SD25G_TARGET_LANE_0F_LN_CFG_DFETAP_EN_5_1);
        REG_WRM(VTSS_SD25G_TARGET_LANE_18(sd_tgt),
                VTSS_F_SD25G_TARGET_LANE_18_LN_CFG_ERRAMP_PD(!ena),
                    VTSS_M_SD25G_TARGET_LANE_18_LN_CFG_ERRAMP_PD);
        REG_WRM(VTSS_SD25G_TARGET_LANE_1D(sd_tgt),
                VTSS_F_SD25G_TARGET_LANE_1D_LN_CFG_PI_DFE_EN(ena),
                VTSS_M_SD25G_TARGET_LANE_1D_LN_CFG_PI_DFE_EN);
        REG_WRM_SET(VTSS_SD25G_TARGET_LANE_0D(sd_tgt),
                    VTSS_M_SD25G_TARGET_LANE_0D_LN_CFG_SUMMER_EN);
        REG_WRM(VTSS_SD25G_TARGET_LANE_2E(sd_tgt),
                VTSS_F_SD25G_TARGET_LANE_2E_LN_CFG_RSTN_DFEDIG(ena),
                VTSS_M_SD25G_TARGET_LANE_2E_LN_CFG_RSTN_DFEDIG);
        REG_WRM_SET(VTSS_SD25G_CFG_TARGET_SD_LANE_CFG(sd_lane_tgt),
                    VTSS_M_SD25G_CFG_TARGET_SD_LANE_CFG_LANE_RST);
        VTSS_MSLEEP(1);
        REG_WRM_CLR(VTSS_SD25G_CFG_TARGET_SD_LANE_CFG(sd_lane_tgt),
                    VTSS_M_SD25G_CFG_TARGET_SD_LANE_CFG_LANE_RST);
    }

    pr("DFE %s\n", ena ? "enabled" : "disabled");
    return VTSS_RC_OK;
}


static vtss_rc fa_serdes_oscal_set(vtss_state_t *vtss_state, u32 sd_tgt, u32 port_no)
{
    u32 val;
    REG_WRM_CLR(VTSS_SD25G_TARGET_CMU_FF(sd_tgt),
                VTSS_M_SD25G_TARGET_CMU_FF_REGISTER_TABLE_INDEX);
    REG_WRM_SET(VTSS_SD25G_TARGET_LANE_1C(sd_tgt),
                VTSS_M_SD25G_TARGET_LANE_1C_LN_CFG_DFE_PD);
    REG_RD(VTSS_SD25G_TARGET_LANE_44(sd_tgt), &val);
    u32 read_cfg_reserve = VTSS_X_SD25G_TARGET_LANE_44_LN_CFG_RX_RESERVE_7_0(val);
    REG_WRM(VTSS_SD25G_TARGET_LANE_44(sd_tgt),
            VTSS_F_SD25G_TARGET_LANE_44_LN_CFG_RX_RESERVE_7_0(read_cfg_reserve & 0xbf),
            VTSS_M_SD25G_TARGET_LANE_44_LN_CFG_RX_RESERVE_7_0);
    REG_WRM_CLR(VTSS_SD25G_TARGET_LANE_0D(sd_tgt),
                VTSS_M_SD25G_TARGET_LANE_0D_LN_CFG_DMUX_PD);
    REG_WRM_CLR(VTSS_SD25G_TARGET_LANE_0E(sd_tgt),
                VTSS_M_SD25G_TARGET_LANE_0E_LN_CFG_DMUX_CLK_PD);
    REG_WRM(VTSS_SD25G_TARGET_LANE_1C(sd_tgt),
            VTSS_F_SD25G_TARGET_LANE_1C_LN_CFG_DFEDMX_PD(0),
            VTSS_M_SD25G_TARGET_LANE_1C_LN_CFG_DFEDMX_PD);
    REG_WRM(VTSS_SD25G_TARGET_LANE_1C(sd_tgt),
            VTSS_F_SD25G_TARGET_LANE_1C_LN_CFG_DFEDMX_PD(1),
            VTSS_M_SD25G_TARGET_LANE_1C_LN_CFG_DFEDMX_PD);
    REG_WRM_CLR(VTSS_SD25G_TARGET_LANE_1C(sd_tgt),
                VTSS_M_SD25G_TARGET_LANE_1C_LN_CFG_DFE_PD);
    REG_WRM(VTSS_SD25G_TARGET_CMU_FF(sd_tgt),
            VTSS_F_SD25G_TARGET_CMU_FF_REGISTER_TABLE_INDEX(0xFF),
            VTSS_M_SD25G_TARGET_CMU_FF_REGISTER_TABLE_INDEX);

   return VTSS_RC_OK;
}

static vtss_rc fa_serdes_oscal_ena(vtss_state_t *vtss_state, const vtss_debug_printf_t pr, u32 port_no)
{
    u32 indx, type, sd_tgt;
    /* Map API port to Serdes instance */
    VTSS_RC(vtss_fa_port2sd(vtss_state, port_no, &indx, &type));

    if (type == FA_SERDES_TYPE_6G) {
        sd_tgt = VTSS_TO_SD6G_LANE(indx);
    } else if (type == FA_SERDES_TYPE_10G) {
        sd_tgt = VTSS_TO_SD10G_LANE(indx);
    } else {
        sd_tgt = VTSS_TO_SD25G_LANE(indx);
    }

    VTSS_RC(fa_serdes_oscal_set(vtss_state, sd_tgt, port_no));

    pr("Offset calibration done\n");
   return VTSS_RC_OK;
}

static vtss_rc fa_serdes_dfe_read(vtss_state_t *vtss_state, const vtss_debug_printf_t pr, u32 port_no)
{
    u32 indx, type, val, sd_tgt;
    /* Map API port to Serdes instance */
    VTSS_RC(vtss_fa_port2sd(vtss_state, port_no, &indx, &type));

    if (type == FA_SERDES_TYPE_6G) {
        sd_tgt = VTSS_TO_SD6G_LANE(indx);
    } else if (type == FA_SERDES_TYPE_10G) {
        sd_tgt = VTSS_TO_SD10G_LANE(indx);
    } else {
        sd_tgt = VTSS_TO_SD25G_LANE(indx);
    }

    if (type == FA_SERDES_TYPE_10G) {
        REG_RD(VTSS_SD10G_LANE_TARGET_LANE_C5(sd_tgt), &val);
        pr("ln_h1 (max 0x1F)  :0x%x\n", val);
        REG_RD(VTSS_SD10G_LANE_TARGET_LANE_C6(sd_tgt), &val);
        pr("ln_h2 (max 0x1F)  :0x%x\n", val);
        REG_RD(VTSS_SD10G_LANE_TARGET_LANE_C7(sd_tgt), &val);
        pr("ln_h3 (max 0xF)   :0x%x\n", val);
        REG_RD(VTSS_SD10G_LANE_TARGET_LANE_C8(sd_tgt), &val);
        pr("ln_h4 (max 0xF)   :0x%x\n", val);
        REG_RD(VTSS_SD10G_LANE_TARGET_LANE_C9(sd_tgt), &val);
        pr("ln_h5 (max 0xF)   :0x%x\n", val);
        REG_RD(VTSS_SD10G_LANE_TARGET_LANE_CA(sd_tgt), &val);
        pr("ln_dlev (max 0x7F):0x%x\n", val);
    } else {
        REG_RD(VTSS_SD25G_TARGET_LANE_CA(sd_tgt), &val);
        pr("ln_h1 (max 0x1F)  :0x%x\n", val);
        REG_RD(VTSS_SD25G_TARGET_LANE_CB(sd_tgt), &val);
        pr("ln_h2 (max 0x1F)  :0x%x\n", val);
        REG_RD(VTSS_SD25G_TARGET_LANE_CC(sd_tgt), &val);
        pr("ln_h3 (max 0xF)   :0x%x\n", val);
        REG_RD(VTSS_SD25G_TARGET_LANE_CD(sd_tgt), &val);
        pr("ln_h4 (max 0xF)   :0x%x\n", val);
        REG_RD(VTSS_SD25G_TARGET_LANE_CE(sd_tgt), &val);
        pr("ln_h5 (max 0xF)   :0x%x\n", val);
        REG_RD(VTSS_SD25G_TARGET_LANE_CF(sd_tgt), &val);
        pr("ln_dlev (max 0x7F):0x%x\n", val);

    }

   return VTSS_RC_OK;
}

static vtss_rc fa_serdes_ctle_read(vtss_state_t *vtss_state, const vtss_debug_printf_t pr, u32 port_no)
{
    u32 indx, type, val, sd_tgt;

    /* Map API port to Serdes instance */
    VTSS_RC(vtss_fa_port2sd(vtss_state, port_no, &indx, &type));

    if (type == FA_SERDES_TYPE_6G) {
        sd_tgt = VTSS_TO_SD6G_LANE(indx);
    } else if (type == FA_SERDES_TYPE_10G) {
        sd_tgt = VTSS_TO_SD10G_LANE(indx);
    } else {
        sd_tgt = VTSS_TO_SD25G_LANE(indx);
    }

    if (type == FA_SERDES_TYPE_10G) {
        REG_RD(VTSS_SD10G_LANE_TARGET_LANE_0D(sd_tgt), &val);
        pr("CTLE in manuel mode  :%d\n",VTSS_X_SD10G_LANE_TARGET_LANE_0D_CFG_EQR_BYP(val));
        REG_RD(VTSS_SD10G_LANE_TARGET_LANE_2F(sd_tgt), &val);
        pr("VGA resistor set to  :%d\n",VTSS_X_SD10G_LANE_TARGET_LANE_2F_CFG_VGA_CTRL_3_0(val));
        pr("VGA capacitor set to :%d\n",VTSS_X_SD10G_LANE_TARGET_LANE_2F_CFG_VGA_CP_2_0(val));
        REG_RD(VTSS_SD10G_LANE_TARGET_LANE_0E(sd_tgt), &val);
        pr("CTLE C set to        :%d\n",VTSS_X_SD10G_LANE_TARGET_LANE_0E_CFG_EQC_FORCE_3_0(val));
        REG_RD(VTSS_SD10G_LANE_TARGET_LANE_0B(sd_tgt), &val);
        pr("CTLE GAIN set to     :%d\n",VTSS_X_SD10G_LANE_TARGET_LANE_0B_CFG_EQ_RES_3_0(val));
    } else {
        REG_RD(VTSS_SD25G_TARGET_LANE_23(sd_tgt), &val);
        pr("VGA in manuel mode  :%d\n",VTSS_X_SD25G_TARGET_LANE_23_LN_CFG_VGA_BYP(val));
        REG_RD(VTSS_SD25G_TARGET_LANE_1F(sd_tgt), &val);
        pr("CTLE in manuel mode  :%d\n",VTSS_X_SD25G_TARGET_LANE_1F_LN_CFG_EQR_BYP(val));
        REG_RD(VTSS_SD25G_TARGET_LANE_21(sd_tgt), &val);
        pr("VGA set to           :%d\n",VTSS_X_SD25G_TARGET_LANE_21_LN_CFG_VGA_CTRL_BYP_4_0(val));
        REG_RD(VTSS_SD25G_TARGET_LANE_22(sd_tgt), &val);
        pr("CTLE R set to        :%d\n",VTSS_X_SD25G_TARGET_LANE_22_LN_CFG_EQR_FORCE_3_0(val));
        REG_RD(VTSS_SD25G_TARGET_LANE_1C(sd_tgt), &val);
        pr("CTLE C set to        :%d\n",VTSS_X_SD25G_TARGET_LANE_1C_LN_CFG_EQC_FORCE_3_0(val));
    }

    return VTSS_RC_OK;

}

static vtss_rc fa_serdes_10g_eye_dimension(vtss_state_t *vtss_state, u32 sd_tgt, const vtss_debug_printf_t pr, u32 action)
{
    u32 val, cnt = 0;

    while (cnt <= 500) {
        REG_RD(VTSS_SD10G_LANE_TARGET_LANE_D0(sd_tgt), &val);
        if (VTSS_X_SD10G_LANE_TARGET_LANE_D0_ISCAN_DONE(val)) {
            break;
        }
        VTSS_MSLEEP(1);
        cnt++;
    }
    if (VTSS_X_SD10G_LANE_TARGET_LANE_D0_ISCAN_DONE(val) == 0) {
        REG_WRM_CLR(VTSS_SD10G_LANE_TARGET_LANE_2B(sd_tgt),
                    VTSS_M_SD10G_LANE_TARGET_LANE_2B_CFG_ISCAN_EN);
        VTSS_E("Timed out after %d ms - bailing out",cnt);
        return VTSS_RC_ERROR;
    }

    REG_RD(VTSS_SD10G_LANE_TARGET_LANE_D0(sd_tgt), &val);

    if (VTSS_X_SD10G_LANE_TARGET_LANE_D0_FAST_EYE_SCAN_FAIL(val) > 0) {
        VTSS_E("Eye scan fails to complete");
        return VTSS_RC_ERROR;
    }
    REG_RD(VTSS_SD10G_LANE_TARGET_LANE_D1(sd_tgt), &val);
    pr("Eye height = %d\n",VTSS_X_SD10G_LANE_TARGET_LANE_D1_ISCAN_RESULTS_7_0(val));
    return VTSS_RC_OK;
}

static vtss_rc fa_serdes_10g_normal_eye(vtss_state_t *vtss_state, u32 sd_tgt, const vtss_debug_printf_t pr)
{
    u32 indx, vref, val, cnt = 0;
    u32 eye_res[140][10] = {0};
    u32 vref_cnt = 0;
    char buf[100];

    REG_RD(VTSS_SD10G_LANE_TARGET_LANE_DB(sd_tgt), &vref);

    while (TRUE) {
        while (cnt <= 500) {
            REG_RD(VTSS_SD10G_LANE_TARGET_LANE_D0(sd_tgt), &val);
            if (VTSS_X_SD10G_LANE_TARGET_LANE_D0_ISCAN_DONE(val)) {
                break;
            }
            VTSS_MSLEEP(1);
            cnt++;
        }
        if (VTSS_X_SD10G_LANE_TARGET_LANE_D0_ISCAN_DONE(val) == 0) {
            REG_WRM_CLR(VTSS_SD10G_LANE_TARGET_LANE_2B(sd_tgt),
                        VTSS_M_SD10G_LANE_TARGET_LANE_2B_CFG_ISCAN_EN);
            VTSS_E("Timed out after %d ms - bailing out",cnt);
            return VTSS_RC_ERROR;
        }
        indx = 0;
        REG_RD(VTSS_SD10G_LANE_TARGET_LANE_D1(sd_tgt), &eye_res[vref_cnt][indx++]);
        REG_RD(VTSS_SD10G_LANE_TARGET_LANE_D2(sd_tgt), &eye_res[vref_cnt][indx++]);
        REG_RD(VTSS_SD10G_LANE_TARGET_LANE_D3(sd_tgt), &eye_res[vref_cnt][indx++]);
        REG_RD(VTSS_SD10G_LANE_TARGET_LANE_D4(sd_tgt), &eye_res[vref_cnt][indx++]);
        REG_RD(VTSS_SD10G_LANE_TARGET_LANE_D5(sd_tgt), &eye_res[vref_cnt][indx++]);
        REG_RD(VTSS_SD10G_LANE_TARGET_LANE_D6(sd_tgt), &eye_res[vref_cnt][indx++]);
        REG_RD(VTSS_SD10G_LANE_TARGET_LANE_D7(sd_tgt), &eye_res[vref_cnt][indx++]);
        REG_RD(VTSS_SD10G_LANE_TARGET_LANE_D8(sd_tgt), &eye_res[vref_cnt][indx++]);
        REG_RD(VTSS_SD10G_LANE_TARGET_LANE_D9(sd_tgt), &eye_res[vref_cnt][indx++]);

        // EYE scan enable
        REG_WRM_CLR(VTSS_SD10G_LANE_TARGET_LANE_2B(sd_tgt),
                    VTSS_M_SD10G_LANE_TARGET_LANE_2B_CFG_ADD_VOLT);
        REG_WRM_SET(VTSS_SD10G_LANE_TARGET_LANE_2B(sd_tgt),
                    VTSS_M_SD10G_LANE_TARGET_LANE_2B_CFG_ADD_VOLT);
        REG_RD(VTSS_SD10G_LANE_TARGET_LANE_DB(sd_tgt), &vref);

        if (vref_cnt == 127) {
            break;
        }
        vref_cnt++;
    }

    for (int i = vref_cnt; i >= 0; i--) {
        if ((i % 8 == 0) || i == 127) {
            (void)buf_set(buf, eye_res[i]);
            pr("%-5d %s\n", i, buf);
        }
    }
    return VTSS_RC_OK;
}

static vtss_rc fa_serdes_10g_eye_setup(vtss_state_t *vtss_state,
                                       const vtss_debug_printf_t pr,
                                       u32 action,
                                       vtss_port_no_t port_no)
{
    u32 sd_type, indx, sd_tgt;
    u32 lane_1a, lane_23;

    /* Map API port to Serdes instance */
    VTSS_RC(vtss_fa_port2sd(vtss_state, port_no, &indx, &sd_type));

    if (sd_type == FA_SERDES_TYPE_6G) {
        sd_tgt = VTSS_TO_SD6G_LANE(indx);
    } else if (sd_type == FA_SERDES_TYPE_10G) {
        sd_tgt = VTSS_TO_SD10G_LANE(indx);
    } else {
        sd_tgt = VTSS_TO_SD25G_LANE(indx);
    }

    REG_RD(VTSS_SD10G_LANE_TARGET_LANE_23(sd_tgt), &lane_23);
    REG_RD(VTSS_SD10G_LANE_TARGET_LANE_1A(sd_tgt), &lane_1a);
    if (action == 2) {
        REG_WRM_SET(VTSS_SD10G_LANE_TARGET_LANE_93(sd_tgt),
                    VTSS_M_SD10G_LANE_TARGET_LANE_93_R_REG_MANUAL);
        REG_WRM_SET(VTSS_SD10G_LANE_TARGET_LANE_94(sd_tgt),
                    VTSS_M_SD10G_LANE_TARGET_LANE_94_R_ISCAN_REG);
        REG_WRM_SET(VTSS_SD10G_LANE_TARGET_LANE_9E(sd_tgt),
                    VTSS_M_SD10G_LANE_TARGET_LANE_9E_R_RXEQ_REG);
        REG_WRM_SET(VTSS_SD10G_LANE_TARGET_LANE_2B(sd_tgt),
                    VTSS_M_SD10G_LANE_TARGET_LANE_2B_CFG_FOM_SEL);
        REG_WRM_SET(VTSS_SD10G_LANE_TARGET_LANE_1B(sd_tgt),
                    VTSS_M_SD10G_LANE_TARGET_LANE_1B_CFG_VCM_SEL);
        REG_WRM_SET(VTSS_SD10G_LANE_TARGET_LANE_2B(sd_tgt),
                    VTSS_M_SD10G_LANE_TARGET_LANE_2B_CFG_ISCAN_SEL);
        REG_WRM_CLR(VTSS_SD10G_LANE_TARGET_LANE_23(sd_tgt),
                    VTSS_M_SD10G_LANE_TARGET_LANE_23_CFG_DFE_PD);
        REG_WRM_SET(VTSS_SD10G_LANE_TARGET_LANE_23(sd_tgt),
                    VTSS_M_SD10G_LANE_TARGET_LANE_23_CFG_DFECK_EN);
        REG_WRM_CLR(VTSS_SD10G_LANE_TARGET_LANE_23(sd_tgt),
                    VTSS_M_SD10G_LANE_TARGET_LANE_23_CFG_ERRAMP_PD);
        REG_WRM_SET(VTSS_SD10G_LANE_TARGET_LANE_1A(sd_tgt),
                    VTSS_M_SD10G_LANE_TARGET_LANE_1A_CFG_PI_DFE_EN);
    } else {
        REG_WRM_CLR(VTSS_SD10G_LANE_TARGET_LANE_49(sd_tgt),
                    VTSS_M_SD10G_LANE_TARGET_LANE_49_CFG_FIGMERIT_SEL);
        REG_WRM_CLR(VTSS_SD10G_LANE_TARGET_LANE_2B(sd_tgt),
                    VTSS_M_SD10G_LANE_TARGET_LANE_2B_CFG_FOM_SEL);
        REG_WRM_CLR(VTSS_SD10G_LANE_TARGET_LANE_2B(sd_tgt),
                    VTSS_M_SD10G_LANE_TARGET_LANE_2B_CFG_MAN_VOLT_EN);
        REG_WRM_CLR(VTSS_SD10G_LANE_TARGET_LANE_2D(sd_tgt),
                    VTSS_M_SD10G_LANE_TARGET_LANE_2D_CFG_MAN_VOLT_SEL_6_0);
        REG_WRM_CLR(VTSS_SD10G_LANE_TARGET_LANE_2C(sd_tgt),
                    VTSS_M_SD10G_LANE_TARGET_LANE_2C_CFG_OS_MAN_EN);
        REG_WRM_CLR(VTSS_SD10G_LANE_TARGET_LANE_2E(sd_tgt),
                    VTSS_M_SD10G_LANE_TARGET_LANE_2E_CFG_OS_5_0);
        REG_WRM(VTSS_SD10G_LANE_TARGET_LANE_1B(sd_tgt),
                VTSS_F_SD10G_LANE_TARGET_LANE_1B_CFG_VCM_SEL(3),
                VTSS_M_SD10G_LANE_TARGET_LANE_1B_CFG_VCM_SEL);
        REG_WRM_SET(VTSS_SD10G_LANE_TARGET_LANE_2B(sd_tgt),
                    VTSS_M_SD10G_LANE_TARGET_LANE_2B_CFG_ISCAN_SEL);
        REG_WRM(VTSS_SD10G_LANE_TARGET_LANE_23(sd_tgt),
                VTSS_F_SD10G_LANE_TARGET_LANE_23_CFG_DFE_PD(0) |
                VTSS_F_SD10G_LANE_TARGET_LANE_23_CFG_DFECK_EN(1) |
                VTSS_F_SD10G_LANE_TARGET_LANE_23_CFG_ERRAMP_PD(0),
                VTSS_M_SD10G_LANE_TARGET_LANE_23_CFG_DFE_PD |
                VTSS_M_SD10G_LANE_TARGET_LANE_23_CFG_DFECK_EN |
                VTSS_M_SD10G_LANE_TARGET_LANE_23_CFG_ERRAMP_PD);
        REG_WRM_SET(VTSS_SD10G_LANE_TARGET_LANE_1A(sd_tgt),
                    VTSS_M_SD10G_LANE_TARGET_LANE_1A_CFG_PI_DFE_EN);
    }
   VTSS_MSLEEP(1);
   REG_WRM_SET(VTSS_SD10G_LANE_TARGET_LANE_2B(sd_tgt),
               VTSS_M_SD10G_LANE_TARGET_LANE_2B_CFG_ISCAN_EN);

   if (action == 2) {
       VTSS_RC(fa_serdes_10g_normal_eye(vtss_state, sd_tgt, pr));
   } else {
       VTSS_RC(fa_serdes_10g_eye_dimension(vtss_state, sd_tgt, pr, action));
   }

   REG_WR(VTSS_SD10G_LANE_TARGET_LANE_23(sd_tgt), lane_23);
   REG_WR(VTSS_SD10G_LANE_TARGET_LANE_1A(sd_tgt), lane_1a);
   REG_WRM_CLR(VTSS_SD10G_LANE_TARGET_LANE_2B(sd_tgt),
               VTSS_M_SD10G_LANE_TARGET_LANE_2B_CFG_ISCAN_SEL);
   REG_WRM_CLR(VTSS_SD10G_LANE_TARGET_LANE_2B(sd_tgt),
               VTSS_M_SD10G_LANE_TARGET_LANE_2B_CFG_ISCAN_EN);

   return VTSS_RC_OK;
}

static vtss_rc fa_serdes_25g_normal_eye(vtss_state_t *vtss_state, u32 sd_tgt, const vtss_debug_printf_t pr)
{
    u32 vref = 0, indx, cnt = 0, val;
    u32 eye_res[140][10] = {0};
    char buf[100];
    u32 vref_cnt = 0;

    REG_RD(VTSS_SD25G_TARGET_LANE_DA(sd_tgt), &vref);
    while (TRUE) {
        while (cnt <= 500) {
            REG_RD(VTSS_SD25G_TARGET_LANE_DD(sd_tgt), &val);
            if (VTSS_X_SD25G_TARGET_LANE_DD_LN_ISCAN_DONE(val)) {
                break;
            }
            VTSS_MSLEEP(1);
            cnt++;
        }
        if (VTSS_X_SD25G_TARGET_LANE_DD_LN_ISCAN_DONE(val) == 0) {
            VTSS_E("Timed out after %d ms - bailing out",cnt);
            break;;
        }
        indx = 0;
        REG_RD(VTSS_SD25G_TARGET_LANE_D0(sd_tgt), &eye_res[vref_cnt][indx++]);
        REG_RD(VTSS_SD25G_TARGET_LANE_D1(sd_tgt), &eye_res[vref_cnt][indx++]);
        REG_RD(VTSS_SD25G_TARGET_LANE_D2(sd_tgt), &eye_res[vref_cnt][indx++]);
        REG_RD(VTSS_SD25G_TARGET_LANE_D3(sd_tgt), &eye_res[vref_cnt][indx++]);
        REG_RD(VTSS_SD25G_TARGET_LANE_D4(sd_tgt), &eye_res[vref_cnt][indx++]);
        REG_RD(VTSS_SD25G_TARGET_LANE_D5(sd_tgt), &eye_res[vref_cnt][indx++]);
        REG_RD(VTSS_SD25G_TARGET_LANE_D6(sd_tgt), &eye_res[vref_cnt][indx++]);
        REG_RD(VTSS_SD25G_TARGET_LANE_D7(sd_tgt), &eye_res[vref_cnt][indx++]);
        REG_RD(VTSS_SD25G_TARGET_LANE_D8(sd_tgt), &eye_res[vref_cnt][indx++]);

        REG_WRM_CLR(VTSS_SD25G_TARGET_LANE_18(sd_tgt),
                    VTSS_M_SD25G_TARGET_LANE_18_LN_CFG_ADD_VOLT);
        REG_WRM_SET(VTSS_SD25G_TARGET_LANE_18(sd_tgt),
                    VTSS_M_SD25G_TARGET_LANE_18_LN_CFG_ADD_VOLT);
        REG_RD(VTSS_SD25G_TARGET_LANE_DA(sd_tgt), &vref);

        if (vref_cnt == 127) {
            break;
        }
        vref_cnt++;
    }

    for (int i = vref_cnt; i >= 0; i--) {
        if ((i % 8 == 0) || i == 127) {
            (void)buf_set(buf, eye_res[i]);
            pr("%-5d %s\n", i, buf);
        }
    }
    return VTSS_RC_OK;
}


static vtss_rc fa_serdes_25g_eye_dimension(vtss_state_t *vtss_state, u32 sd_tgt, const vtss_debug_printf_t pr, u32 action)
{
    u32 val, cnt = 0;

    while (cnt <= 500) {
        REG_RD(VTSS_SD25G_TARGET_LANE_DD(sd_tgt), &val);
        if (VTSS_X_SD25G_TARGET_LANE_DD_LN_ISCAN_DONE(val)) {
            break;
        }
        VTSS_MSLEEP(1);
        cnt++;
    }
    if (VTSS_X_SD25G_TARGET_LANE_DD_LN_ISCAN_DONE(val) == 0) {
        VTSS_E("Timed out after %d ms - bailing out",cnt);
        return VTSS_RC_ERROR;
    }

    REG_RD(VTSS_SD25G_TARGET_LANE_C3(sd_tgt), &val);

    if (VTSS_X_SD25G_TARGET_LANE_C3_LN_FAST_EYE_SCAN_FAIL(val) > 0) {
        VTSS_E("Eye scan fails to completet");
        return VTSS_RC_ERROR;
    }
    REG_RD(VTSS_SD25G_TARGET_LANE_D0(sd_tgt), &val);
    if (action == 3) {
        pr("Eye height = %d\n",val);
    } else {
        pr("Eye area = %d\n",val);
    }
    return VTSS_RC_OK;
}

static vtss_rc fa_serdes_25g_eye_setup(vtss_state_t *vtss_state,
                                       const vtss_debug_printf_t pr,
                                       u32 action,
                                       vtss_port_no_t port_no)
{

    u32 sd_type, indx, sd_tgt, val, dfe_pd, dfedmx_pd;
    u32 rstn_dfedig;

    /* Map API port to Serdes instance */
    VTSS_RC(vtss_fa_port2sd(vtss_state, port_no, &indx, &sd_type));
    sd_tgt = VTSS_TO_SD25G_LANE(indx);
    REG_WRM_CLR(VTSS_SD25G_TARGET_CMU_FF(sd_tgt),
                VTSS_M_SD25G_TARGET_CMU_FF_REGISTER_TABLE_INDEX);
    REG_RD(VTSS_SD25G_TARGET_LANE_1C(sd_tgt), &val);
    dfe_pd = VTSS_X_SD25G_TARGET_LANE_1C_LN_CFG_DFE_PD(val);
    REG_WRM_CLR(VTSS_SD25G_TARGET_LANE_1C(sd_tgt),
                VTSS_M_SD25G_TARGET_LANE_1C_LN_CFG_DFE_PD);
    REG_WRM_SET(VTSS_SD25G_TARGET_LANE_19(sd_tgt),
                VTSS_M_SD25G_TARGET_LANE_19_LN_CFG_ISCAN_SEL);
    REG_WRM_CLR(VTSS_SD25G_TARGET_LANE_18(sd_tgt),
                VTSS_M_SD25G_TARGET_LANE_18_LN_CFG_ERRAMP_PD);

    if (action == 3 || action == 4) {
        REG_WRM_CLR(VTSS_SD25G_TARGET_LANE_18(sd_tgt),
                    VTSS_M_SD25G_TARGET_LANE_18_LN_CFG_MAN_VOLT_EN);
    }

    REG_RD(VTSS_SD25G_TARGET_LANE_1C(sd_tgt), &val);
    dfedmx_pd = VTSS_X_SD25G_TARGET_LANE_1C_LN_CFG_DFEDMX_PD(val);
    REG_WRM_CLR(VTSS_SD25G_TARGET_LANE_1C(sd_tgt),
                VTSS_M_SD25G_TARGET_LANE_1C_LN_CFG_DFEDMX_PD);
    REG_RD(VTSS_SD25G_TARGET_LANE_2E(sd_tgt), &val);
    rstn_dfedig = VTSS_X_SD25G_TARGET_LANE_2E_LN_CFG_RSTN_DFEDIG(val);

    if (action == 3 || action == 4) {
        REG_WRM_SET(VTSS_SD25G_TARGET_LANE_2E(sd_tgt),
                    VTSS_M_SD25G_TARGET_LANE_2E_LN_CFG_RSTN_DFEDIG);

        if (action == 3) {
            REG_WRM_CLR(VTSS_SD25G_TARGET_LANE_28(sd_tgt),
                        VTSS_F_SD25G_TARGET_LANE_28_LN_CFG_FIGMERIT_SEL(0));
        } else {
            REG_WRM_CLR(VTSS_SD25G_TARGET_LANE_28(sd_tgt),
                        VTSS_F_SD25G_TARGET_LANE_28_LN_CFG_FIGMERIT_SEL(1)); // Report eye area
        }
    } else {
        REG_WRM_CLR(VTSS_SD25G_TARGET_LANE_2E(sd_tgt),
                    VTSS_M_SD25G_TARGET_LANE_2E_LN_CFG_RSTN_DFEDIG);
    }

    REG_WRM(VTSS_SD25G_TARGET_CMU_FF(sd_tgt),
            VTSS_F_SD25G_TARGET_CMU_FF_REGISTER_TABLE_INDEX(0xff),
            VTSS_M_SD25G_TARGET_CMU_FF_REGISTER_TABLE_INDEX);
    REG_WRM_SET(VTSS_SD25G_TARGET_CMU_1A(sd_tgt),
                VTSS_M_SD25G_TARGET_CMU_1A_R_REG_MANUAL);
    REG_WRM(VTSS_SD25G_TARGET_CMU_FF(sd_tgt),
            VTSS_F_SD25G_TARGET_CMU_FF_REGISTER_TABLE_INDEX(0),
            VTSS_M_SD25G_TARGET_CMU_FF_REGISTER_TABLE_INDEX);
    VTSS_MSLEEP(1);

    if (action == 2 || action == 3) {
        REG_WRM_SET(VTSS_SD25G_TARGET_LANE_28(sd_tgt),
                    VTSS_M_SD25G_TARGET_LANE_28_LN_CFG_ISCAN_MODE_EN);
    }

    if (action == 2) {
        REG_WRM_SET(VTSS_SD25G_TARGET_LANE_0E(sd_tgt),
                    VTSS_M_SD25G_TARGET_LANE_0E_LN_CFG_ISCAN_EN);
    }
    if (action == 3 || action == 4) {
        REG_WRM_SET(VTSS_SD25G_TARGET_LANE_2E(sd_tgt),
                    VTSS_M_SD25G_TARGET_LANE_2E_LN_CFG_EN_FAST_ISCAN);
    }


    if (action == 2) {
        VTSS_RC(fa_serdes_25g_normal_eye(vtss_state, sd_tgt, pr));
    } else {
        VTSS_RC(fa_serdes_25g_eye_dimension(vtss_state, sd_tgt, pr, action));
    }

    // Disable eye scan
    REG_WRM(VTSS_SD25G_TARGET_LANE_1C(sd_tgt),
            VTSS_F_SD25G_TARGET_LANE_1C_LN_CFG_DFE_PD(dfe_pd) |
            VTSS_F_SD25G_TARGET_LANE_1C_LN_CFG_DFEDMX_PD(dfedmx_pd),
            VTSS_M_SD25G_TARGET_LANE_1C_LN_CFG_DFEDMX_PD |
            VTSS_M_SD25G_TARGET_LANE_1C_LN_CFG_DFE_PD);
    REG_WRM(VTSS_SD25G_TARGET_LANE_2E(sd_tgt),
            VTSS_F_SD25G_TARGET_LANE_2E_LN_CFG_RSTN_DFEDIG(rstn_dfedig),
            VTSS_M_SD25G_TARGET_LANE_2E_LN_CFG_RSTN_DFEDIG);
    REG_WRM_CLR(VTSS_SD25G_TARGET_LANE_28(sd_tgt),
                VTSS_M_SD25G_TARGET_LANE_28_LN_CFG_ISCAN_MODE_EN);
    REG_WRM_CLR(VTSS_SD25G_TARGET_LANE_19(sd_tgt),
                VTSS_M_SD25G_TARGET_LANE_19_LN_CFG_ISCAN_SEL);
    REG_WRM_CLR(VTSS_SD25G_TARGET_LANE_0E(sd_tgt),
                VTSS_M_SD25G_TARGET_LANE_0E_LN_CFG_ISCAN_EN);
    REG_WRM_CLR(VTSS_SD25G_TARGET_LANE_2E(sd_tgt),
                VTSS_M_SD25G_TARGET_LANE_2E_LN_CFG_EN_FAST_ISCAN);


    return VTSS_RC_OK;
}

#define FA_DEBUG_LANE(pr, addr, i, name) vtss_fa_debug_reg_inst(vtss_state, pr, VTSS_SD10G_LANE_TARGET_LANE_##addr, i,\
(sd_type == FA_SERDES_TYPE_10G) ? "VTSS_SD10G_LANE_TARGET_LANE_"name : "VTSS_SD6G_LANE_TARGET_LANE_"name)
#define FA_DEBUG_25G_LANE(pr, addr, i, name) vtss_fa_debug_reg_inst(vtss_state, pr, VTSS_SD25G_TARGET_CMU_##addr, i, "VTSS_SD25G_TARGET_CMU_"name)

static vtss_rc fa_serdes_dump(vtss_state_t *vtss_state,
                              const vtss_debug_printf_t pr,
                              vtss_port_no_t port_no)
{

    u32  sd_type, indx, sd_tgt;

    /* Map API port to Serdes instance */
    VTSS_RC(vtss_fa_port2sd(vtss_state, port_no, &indx, &sd_type));

    if (sd_type == FA_SERDES_TYPE_6G) {
        sd_tgt = VTSS_TO_SD6G_LANE(indx);
    } else if (sd_type == FA_SERDES_TYPE_10G) {
        sd_tgt = VTSS_TO_SD10G_LANE(indx);
    } else {
        sd_tgt = VTSS_TO_SD25G_LANE(indx);
    }

    if (sd_type == FA_SERDES_TYPE_25G) {
        FA_DEBUG_25G_LANE(pr, FF(sd_tgt), indx, "FF");
        FA_DEBUG_25G_LANE(pr, 31(sd_tgt), indx, "31");
        FA_DEBUG_25G_LANE(pr, 1A(sd_tgt), indx, "1A");
        FA_DEBUG_25G_LANE(pr, 40(sd_tgt), indx, "40");
        FA_DEBUG_25G_LANE(pr, 46(sd_tgt), indx, "46");
        FA_DEBUG_25G_LANE(pr, 45(sd_tgt), indx, "45");
        FA_DEBUG_25G_LANE(pr, 0B(sd_tgt), indx, "0B");
        FA_DEBUG_25G_LANE(pr, 19(sd_tgt), indx, "19");
        FA_DEBUG_25G_LANE(pr, 18(sd_tgt), indx, "18");
        FA_DEBUG_25G_LANE(pr, 1A(sd_tgt), indx, "1A");
        FA_DEBUG_25G_LANE(pr, 30(sd_tgt), indx, "30");
        FA_DEBUG_25G_LANE(pr, 0C(sd_tgt), indx, "0C");
        FA_DEBUG_25G_LANE(pr, 0D(sd_tgt), indx, "0D");
        FA_DEBUG_25G_LANE(pr, 0E(sd_tgt), indx, "0E");
        FA_DEBUG_25G_LANE(pr, 01(sd_tgt), indx, "01");
        FA_DEBUG_25G_LANE(pr, 18(sd_tgt), indx, "18");
        FA_DEBUG_25G_LANE(pr, 2C(sd_tgt), indx, "2C");
        FA_DEBUG_25G_LANE(pr, 28(sd_tgt), indx, "28");
        FA_DEBUG_25G_LANE(pr, 01(sd_tgt), indx, "01");
        FA_DEBUG_25G_LANE(pr, 0F(sd_tgt), indx, "0F");
        FA_DEBUG_25G_LANE(pr, 1D(sd_tgt), indx, "1D");
        FA_DEBUG_25G_LANE(pr, 19(sd_tgt), indx, "19");
        FA_DEBUG_25G_LANE(pr, 01(sd_tgt), indx, "01");
        FA_DEBUG_25G_LANE(pr, 03(sd_tgt), indx, "03");
        FA_DEBUG_25G_LANE(pr, 06(sd_tgt), indx, "06");
        FA_DEBUG_25G_LANE(pr, 07(sd_tgt), indx, "07");
        FA_DEBUG_25G_LANE(pr, 43(sd_tgt), indx, "43");
        FA_DEBUG_25G_LANE(pr, 43(sd_tgt), indx, "42");
        FA_DEBUG_25G_LANE(pr, 05(sd_tgt), indx, "05");
        FA_DEBUG_25G_LANE(pr, 0A(sd_tgt), indx, "0A");
        FA_DEBUG_25G_LANE(pr, 09(sd_tgt), indx, "09");
        FA_DEBUG_25G_LANE(pr, 1B(sd_tgt), indx, "09");
        FA_DEBUG_25G_LANE(pr, 2E(sd_tgt), indx, "2E");
        FA_DEBUG_25G_LANE(pr, 44(sd_tgt), indx, "44");
        FA_DEBUG_25G_LANE(pr, 22(sd_tgt), indx, "22");
        FA_DEBUG_25G_LANE(pr, 1C(sd_tgt), indx, "1C");
        FA_DEBUG_25G_LANE(pr, 1E(sd_tgt), indx, "1E");
        FA_DEBUG_25G_LANE(pr, 25(sd_tgt), indx, "25");
        FA_DEBUG_25G_LANE(pr, 26(sd_tgt), indx, "26");
        FA_DEBUG_25G_LANE(pr, 18(sd_tgt), indx, "18");
        FA_DEBUG_25G_LANE(pr, 40(sd_tgt), indx, "40");
        FA_DEBUG_25G_LANE(pr, 04(sd_tgt), indx, "04");
        FA_DEBUG_25G_LANE(pr, 1E(sd_tgt), indx, "1E");
        FA_DEBUG_25G_LANE(pr, 2E(sd_tgt), indx, "2E");
        FA_DEBUG_25G_LANE(pr, 1C(sd_tgt), indx, "1C");
        FA_DEBUG_25G_LANE(pr, C0(sd_tgt), indx, "C0");

    } else {

        FA_DEBUG_LANE(pr, 93(sd_tgt), indx, "93");
        FA_DEBUG_LANE(pr, 94(sd_tgt), indx, "94");
        FA_DEBUG_LANE(pr, 9E(sd_tgt), indx, "9E");
        FA_DEBUG_LANE(pr, A1(sd_tgt), indx, "A1");
        FA_DEBUG_LANE(pr, 50(sd_tgt), indx, "50");
        FA_DEBUG_LANE(pr, 35(sd_tgt), indx, "35");
        FA_DEBUG_LANE(pr, 01(sd_tgt), indx, "01");
        FA_DEBUG_LANE(pr, 30(sd_tgt), indx, "30");
        FA_DEBUG_LANE(pr, A2(sd_tgt), indx, "A2");
        FA_DEBUG_LANE(pr, 13(sd_tgt), indx, "13");
        FA_DEBUG_LANE(pr, 23(sd_tgt), indx, "23");
        FA_DEBUG_LANE(pr, 22(sd_tgt), indx, "22");
        FA_DEBUG_LANE(pr, 1A(sd_tgt), indx, "1A");
        FA_DEBUG_LANE(pr, 02(sd_tgt), indx, "02");
        FA_DEBUG_LANE(pr, 03(sd_tgt), indx, "03");
        FA_DEBUG_LANE(pr, 04(sd_tgt), indx, "04");
        FA_DEBUG_LANE(pr, 2F(sd_tgt), indx, "2F");
        FA_DEBUG_LANE(pr, 0B(sd_tgt), indx, "0B");
        FA_DEBUG_LANE(pr, 0D(sd_tgt), indx, "0D");
        FA_DEBUG_LANE(pr, 0E(sd_tgt), indx, "0E");
        FA_DEBUG_LANE(pr, 23(sd_tgt), indx, "23");
        FA_DEBUG_LANE(pr, 06(sd_tgt), indx, "06");
        FA_DEBUG_LANE(pr, 33(sd_tgt), indx, "33");
        FA_DEBUG_LANE(pr, 52(sd_tgt), indx, "52");
        FA_DEBUG_LANE(pr, 37(sd_tgt), indx, "37");
        FA_DEBUG_LANE(pr, 3C(sd_tgt), indx, "3C");
        FA_DEBUG_LANE(pr, 39(sd_tgt), indx, "39");
        FA_DEBUG_LANE(pr, 1A(sd_tgt), indx, "1A");
        FA_DEBUG_LANE(pr, 16(sd_tgt), indx, "16");
        FA_DEBUG_LANE(pr, 15(sd_tgt), indx, "15");
        FA_DEBUG_LANE(pr, 26(sd_tgt), indx, "26");
        FA_DEBUG_LANE(pr, 42(sd_tgt), indx, "42");
        FA_DEBUG_LANE(pr, 0F(sd_tgt), indx, "0F");
        FA_DEBUG_LANE(pr, 24(sd_tgt), indx, "24");
        FA_DEBUG_LANE(pr, 14(sd_tgt), indx, "14");
        FA_DEBUG_LANE(pr, 3A(sd_tgt), indx, "3A");
        FA_DEBUG_LANE(pr, 31(sd_tgt), indx, "31");
        FA_DEBUG_LANE(pr, 48(sd_tgt), indx, "48");
        FA_DEBUG_LANE(pr, 36(sd_tgt), indx, "36");
        FA_DEBUG_LANE(pr, 32(sd_tgt), indx, "32");
        FA_DEBUG_LANE(pr, 37(sd_tgt), indx, "37");
        FA_DEBUG_LANE(pr, 41(sd_tgt), indx, "41");
        FA_DEBUG_LANE(pr, 9E(sd_tgt), indx, "9E");
        FA_DEBUG_LANE(pr, 0C(sd_tgt), indx, "0C");
        FA_DEBUG_LANE(pr, 0B(sd_tgt), indx, "0B");
        FA_DEBUG_LANE(pr, 83(sd_tgt), indx, "83");
        FA_DEBUG_LANE(pr, 06(sd_tgt), indx, "06");
        FA_DEBUG_LANE(pr, 9E(sd_tgt), indx, "9E");
        FA_DEBUG_LANE(pr, 83(sd_tgt), indx, "83");
        FA_DEBUG_LANE(pr, 50(sd_tgt), indx, "50");
        FA_DEBUG_LANE(pr, 34(sd_tgt), indx, "34");
    }
    return VTSS_RC_OK;
}

vtss_rc fa_debug_serdes_set(vtss_state_t *vtss_state, const vtss_port_no_t port_no,
                            const vtss_port_serdes_debug_t *const conf)

{
    u32  sd_type, indx, sd_tgt, sd_lane_tgt = 0, dfe_rstn;
    /* Map API port to Serdes instance */
    VTSS_RC(vtss_fa_port2sd(vtss_state, port_no, &indx, &sd_type));

    if (sd_type == FA_SERDES_TYPE_6G) {
        sd_tgt = VTSS_TO_SD6G_LANE(indx);
    } else if (sd_type == FA_SERDES_TYPE_10G) {
        sd_tgt = VTSS_TO_SD10G_LANE(indx);
        sd_lane_tgt = VTSS_TO_SD_LANE(indx+VTSS_SERDES_10G_START);
    } else {
        sd_tgt = VTSS_TO_SD25G_LANE(indx);
        sd_lane_tgt = VTSS_TO_SD_LANE(indx+VTSS_SERDES_25G_START);
    }

    if (conf->debug_type == VTSS_SERDES_DFE_PRM) {

        if (sd_type == FA_SERDES_TYPE_10G) {
            REG_WRM(VTSS_SD10G_LANE_TARGET_LANE_1D(sd_tgt),
                    VTSS_F_SD10G_LANE_TARGET_LANE_1D_CFG_DFE_BYP_H1_4_0(conf->serdes_prm[0]),
                    VTSS_M_SD10G_LANE_TARGET_LANE_1D_CFG_DFE_BYP_H1_4_0);
            REG_WRM(VTSS_SD10G_LANE_TARGET_LANE_1E(sd_tgt),
                    VTSS_F_SD10G_LANE_TARGET_LANE_1E_CFG_DFE_BYP_H2_4_0(conf->serdes_prm[1]),
                    VTSS_M_SD10G_LANE_TARGET_LANE_1E_CFG_DFE_BYP_H2_4_0);
            REG_WRM(VTSS_SD10G_LANE_TARGET_LANE_1F(sd_tgt),
                    VTSS_F_SD10G_LANE_TARGET_LANE_1F_CFG_DFE_BYP_H3_3_0(conf->serdes_prm[2]),
                    VTSS_M_SD10G_LANE_TARGET_LANE_1F_CFG_DFE_BYP_H3_3_0);
            REG_WRM(VTSS_SD10G_LANE_TARGET_LANE_1F(sd_tgt),
                    VTSS_F_SD10G_LANE_TARGET_LANE_1F_CFG_DFE_BYP_H4_3_0(conf->serdes_prm[3]),
                    VTSS_M_SD10G_LANE_TARGET_LANE_1F_CFG_DFE_BYP_H3_3_0);
            REG_WRM(VTSS_SD10G_LANE_TARGET_LANE_20(sd_tgt),
                    VTSS_F_SD10G_LANE_TARGET_LANE_20_CFG_DFE_BYP_H5_3_0(conf->serdes_prm[4]),
                    VTSS_M_SD10G_LANE_TARGET_LANE_20_CFG_DFE_BYP_H5_3_0);
            REG_WRM(VTSS_SD10G_LANE_TARGET_LANE_1C(sd_tgt),
                    VTSS_F_SD10G_LANE_TARGET_LANE_1C_CFG_DFEDIG_BYP_5_0(0x3E),
                    VTSS_M_SD10G_LANE_TARGET_LANE_1C_CFG_DFEDIG_BYP_5_0);
            REG_WRM_SET(VTSS_SD10G_LANE_TARGET_LANE_83(sd_tgt),
                        VTSS_M_SD10G_LANE_TARGET_LANE_83_R_DFE_RSTN);
        } else {
            REG_WRM(VTSS_SD25G_TARGET_LANE_14(sd_tgt),
                    VTSS_F_SD25G_TARGET_LANE_14_LN_CFG_DFE_BYP_H1_4_0(conf->serdes_prm[0]),
                    VTSS_M_SD25G_TARGET_LANE_14_LN_CFG_DFE_BYP_H1_4_0);
            REG_WRM(VTSS_SD25G_TARGET_LANE_13(sd_tgt),
                    VTSS_F_SD25G_TARGET_LANE_13_LN_CFG_DFE_BYP_H2_4_0(conf->serdes_prm[1]),
                    VTSS_M_SD25G_TARGET_LANE_13_LN_CFG_DFE_BYP_H2_4_0);
            REG_WRM(VTSS_SD25G_TARGET_LANE_12(sd_tgt),
                    VTSS_F_SD25G_TARGET_LANE_12_LN_CFG_DFE_BYP_H3_3_0(conf->serdes_prm[2]),
                    VTSS_M_SD25G_TARGET_LANE_12_LN_CFG_DFE_BYP_H3_3_0);
            REG_WRM(VTSS_SD25G_TARGET_LANE_11(sd_tgt),
                    VTSS_F_SD25G_TARGET_LANE_11_LN_CFG_DFE_BYP_H4_3_0(conf->serdes_prm[3]) |
                    VTSS_F_SD25G_TARGET_LANE_11_LN_CFG_DFE_BYP_H5_3_0(conf->serdes_prm[4]),
                    VTSS_M_SD25G_TARGET_LANE_11_LN_CFG_DFE_BYP_H5_3_0 |
                    VTSS_M_SD25G_TARGET_LANE_11_LN_CFG_DFE_BYP_H4_3_0);
            REG_WRM(VTSS_SD25G_TARGET_LANE_10(sd_tgt),
                    VTSS_F_SD25G_TARGET_LANE_10_LN_CFG_DFE_DLEV_6_0(conf->serdes_prm[5]),
                    VTSS_M_SD25G_TARGET_LANE_10_LN_CFG_DFE_DLEV_6_0);
            REG_WRM(VTSS_SD25G_TARGET_LANE_15(sd_tgt),
                    VTSS_F_SD25G_TARGET_LANE_15_LN_CFG_DFEDIG_BYP_7_0(0x3E),
                    VTSS_M_SD25G_TARGET_LANE_15_LN_CFG_DFEDIG_BYP_7_0);
            REG_WRM_SET(VTSS_SD25G_TARGET_LANE_40(sd_tgt),
                        VTSS_M_SD25G_TARGET_LANE_40_LN_R_DFE_RSTN);
            REG_WRM_SET(VTSS_SD25G_CFG_TARGET_SD_LANE_CFG(sd_lane_tgt),
                        VTSS_M_SD25G_CFG_TARGET_SD_LANE_CFG_LANE_RST);
            VTSS_MSLEEP(1);
            REG_WRM_CLR(VTSS_SD25G_CFG_TARGET_SD_LANE_CFG(sd_lane_tgt),
                        VTSS_M_SD25G_CFG_TARGET_SD_LANE_CFG_LANE_RST);
        }
    } else if (conf->debug_type == VTSS_SERDES_CTLE_PRM) {
        if (sd_type == FA_SERDES_TYPE_10G) {
            REG_WRM_SET(VTSS_SD10G_LANE_TARGET_LANE_0D(sd_tgt),
                        VTSS_M_SD10G_LANE_TARGET_LANE_0D_CFG_EQR_BYP);
            REG_WRM(VTSS_SD10G_LANE_TARGET_LANE_2F(sd_tgt),
                    VTSS_F_SD10G_LANE_TARGET_LANE_2F_CFG_VGA_CTRL_3_0(conf->serdes_prm[0]),
                    VTSS_M_SD10G_LANE_TARGET_LANE_2F_CFG_VGA_CTRL_3_0);
            REG_WRM(VTSS_SD10G_LANE_TARGET_LANE_2F(sd_tgt),
                    VTSS_F_SD10G_LANE_TARGET_LANE_2F_CFG_VGA_CP_2_0(conf->serdes_prm[1]),
                    VTSS_M_SD10G_LANE_TARGET_LANE_2F_CFG_VGA_CP_2_0);
            REG_WRM(VTSS_SD10G_LANE_TARGET_LANE_0E(sd_tgt),
                    VTSS_F_SD10G_LANE_TARGET_LANE_0E_CFG_EQC_FORCE_3_0(conf->serdes_prm[2]),
                    VTSS_M_SD10G_LANE_TARGET_LANE_0E_CFG_EQC_FORCE_3_0);
            REG_WRM(VTSS_SD10G_LANE_TARGET_LANE_0B(sd_tgt),
                    VTSS_F_SD10G_LANE_TARGET_LANE_0B_CFG_EQ_RES_3_0(conf->serdes_prm[3]),
                    VTSS_M_SD10G_LANE_TARGET_LANE_0B_CFG_EQ_RES_3_0);
            REG_RD(VTSS_SD10G_LANE_TARGET_LANE_83(sd_tgt), &dfe_rstn);
            dfe_rstn = (VTSS_X_SD10G_LANE_TARGET_LANE_83_R_DFE_RSTN(dfe_rstn));
            REG_WRM(VTSS_SD10G_LANE_TARGET_LANE_83(sd_tgt),
                    VTSS_F_SD10G_LANE_TARGET_LANE_83_R_DFE_RSTN(1),
                    VTSS_M_SD10G_LANE_TARGET_LANE_83_R_DFE_RSTN);
            REG_WRM(VTSS_SD10G_LANE_TARGET_LANE_83(sd_tgt),
                    VTSS_F_SD10G_LANE_TARGET_LANE_83_R_DFE_RSTN(dfe_rstn),
                    VTSS_M_SD10G_LANE_TARGET_LANE_83_R_DFE_RSTN);
        } else {
            REG_WRM_CLR(VTSS_SD25G_TARGET_CMU_FF(sd_tgt),
                        VTSS_M_SD25G_TARGET_CMU_FF_REGISTER_TABLE_INDEX);
            REG_WRM_SET(VTSS_SD25G_TARGET_LANE_23(sd_tgt),
                        VTSS_M_SD25G_TARGET_LANE_23_LN_CFG_VGA_BYP);
            REG_WRM_SET(VTSS_SD25G_TARGET_LANE_1F(sd_tgt),
                        VTSS_M_SD25G_TARGET_LANE_1F_LN_CFG_EQR_BYP);
            REG_WRM(VTSS_SD25G_TARGET_LANE_22(sd_tgt),
                    VTSS_F_SD25G_TARGET_LANE_22_LN_CFG_EQR_FORCE_3_0(conf->serdes_prm[0]),
                    VTSS_M_SD25G_TARGET_LANE_22_LN_CFG_EQR_FORCE_3_0);
            REG_WRM(VTSS_SD25G_TARGET_LANE_1C(sd_tgt),
                    VTSS_F_SD25G_TARGET_LANE_1C_LN_CFG_EQC_FORCE_3_0(conf->serdes_prm[1]),
                    VTSS_M_SD25G_TARGET_LANE_1C_LN_CFG_EQC_FORCE_3_0);
            REG_WRM(VTSS_SD25G_TARGET_LANE_21(sd_tgt),
                    VTSS_F_SD25G_TARGET_LANE_21_LN_CFG_VGA_CTRL_BYP_4_0(conf->serdes_prm[2]),
                    VTSS_M_SD25G_TARGET_LANE_21_LN_CFG_VGA_CTRL_BYP_4_0);
            REG_RD(VTSS_SD25G_TARGET_LANE_40(sd_tgt), &dfe_rstn);
            dfe_rstn = VTSS_X_SD25G_TARGET_LANE_40_LN_R_DFE_RSTN(dfe_rstn);
            REG_WRM(VTSS_SD25G_TARGET_LANE_40(sd_tgt),
                    VTSS_F_SD25G_TARGET_LANE_40_LN_R_DFE_RSTN(1),
                    VTSS_M_SD25G_TARGET_LANE_40_LN_R_DFE_RSTN);
            REG_WRM(VTSS_SD25G_TARGET_LANE_40(sd_tgt),
                    VTSS_F_SD25G_TARGET_LANE_40_LN_R_DFE_RSTN(dfe_rstn),
                    VTSS_M_SD25G_TARGET_LANE_40_LN_R_DFE_RSTN);

//            VTSS_RC(fa_serdes_oscal_set(vtss_state, sd_tgt, port_no));
        }
    } else if (conf->debug_type == VTSS_SERDES_TXEQ_PRM) {
        VTSS_RC(fa_port_10g_kr_tap_set(vtss_state, port_no, conf->serdes_prm[0], conf->serdes_prm[1], conf->serdes_prm[2])); // TxEQ set
    }

    return VTSS_RC_OK;
}


vtss_rc fa_debug_chip_serdes(vtss_state_t *vtss_state,
                             const vtss_debug_printf_t pr,
                             const vtss_debug_info_t   *const info,
                             vtss_port_no_t port_no)
{
    u32            port, indx = 0, sd_type = 0;
    char           buf[32] = {0};
    char           buf2[32] = {0};

    port = VTSS_CHIP_PORT(port_no);

    (void)vtss_fa_port2sd(vtss_state, port_no, &indx, &sd_type);
    if (sd_type == FA_SERDES_TYPE_10G) {
        indx += VTSS_SERDES_10G_START;
    } else if (sd_type == FA_SERDES_TYPE_25G) {
        indx += VTSS_SERDES_25G_START;
    }
    if (vtss_fa_port_is_high_speed(vtss_state, port)) {
        if (sd_type == FA_SERDES_TYPE_10G) {
            sprintf(buf2,"Serdes preset: %s",vtss_serdes_preset_txt(serdes2preset(vtss_state->port.conf[port_no].serdes.media_type)));
        } else if (sd_type == FA_SERDES_TYPE_25G) {
            sprintf(buf2,"Serdes preset: %s",vtss_serdes25g_preset_txt(serdes2preset_25g(vtss_state->port.conf[port_no].serdes.media_type, vtss_state->port.conf[port_no].speed)));
        } else {
            sprintf(buf2,"Serdes preset: %s",vtss_serdes_preset_txt(serdes2preset(vtss_state->port.serdes_mode[port_no])));
        }
    } else {
        sprintf(buf2,"Serdes preset: None");
    }
    if (vtss_fa_port_is_high_speed(vtss_state, port)) {
        sprintf(buf, "Port %u (%u) Dev%s_%d", port, port_no, VTSS_PORT_IS_25G(port) ? "25G" :  VTSS_PORT_IS_10G(port)\
                ? "10G": VTSS_PORT_IS_5G(port) ? "5G" : "2G5", VTSS_PORT_DEV_INDX(port));
    } else {
        sprintf(buf, "Port %u (%u) Dev%s_%d", port, port_no, "2G5", port);
    }
    sprintf(buf + strlen(buf)," -> SD%d", indx);
    if (info->action == 1) {
        vtss_fa_debug_reg_header(pr, buf);
    } else {
        pr("%s",buf);
        pr("  %s\n",buf2);
    }

    if (info->action == 1) {
        VTSS_RC(fa_serdes_dump(vtss_state, pr, port_no));
    } else if (info->action >= 2 && info->action <= 4) {
        if (VTSS_PORT_IS_10G(VTSS_CHIP_PORT(port_no))) {
            VTSS_RC(fa_serdes_10g_eye_setup(vtss_state, pr, info->action, port_no));
        } else if (VTSS_PORT_IS_25G(VTSS_CHIP_PORT(port_no))) {
            VTSS_RC(fa_serdes_25g_eye_setup(vtss_state, pr, info->action, port_no));
        } else {
            pr("port %d  not supported",port_no);
            return VTSS_RC_OK;
        }
    } else if (info->action == 5) {
        // Read DFE settings
        VTSS_RC(fa_serdes_dfe_read(vtss_state, pr, port_no));
    } else if (info->action == 6) {
        VTSS_RC(fa_serdes_ctle_read(vtss_state, pr, port_no));
    } else if (info->action == 7) {
        VTSS_RC(fa_serdes_oscal_ena(vtss_state, pr, port_no));
    } else if (info->action == 8) {
        VTSS_RC(fa_serdes_dfe_set(vtss_state, pr, port_no, FALSE));// DFE Disable
    } else if (info->action == 9) {
        VTSS_RC(fa_serdes_dfe_set(vtss_state, pr, port_no, TRUE)); // DFE Enable
    } else if (info->action == 10) {
        u16 tap_dly=0, tap_adv=0, ampl=0;
        VTSS_RC(fa_port_10g_kr_tap_get(vtss_state, port_no, &tap_dly, &tap_adv, &ampl)); // TxEQ read
        pr("Tap_dly:%d\n",tap_dly);
        pr("Tap_adv:%d\n",tap_adv);
        pr("Amplitude:%d\n",ampl);
    }
    return VTSS_RC_OK;
}


vtss_rc vtss_fa_port2sd(vtss_state_t *vtss_state, vtss_port_no_t port_no, u32 *sd_indx, u32 *sd_type)
{
    u32 p = VTSS_CHIP_PORT(port_no);

    switch (vtss_state->port.conf[port_no].if_type) {
    case VTSS_PORT_INTERFACE_QSGMII:
        if (p <= 47) {
            u32 Q = (p -  p % 4) / 4;
            *sd_indx = Q;
            *sd_type = FA_SERDES_TYPE_10G;
            VTSS_N("(Q QUAD 1G SD) QSGMII p:%d SD10G_LANE index: %d",p, *sd_indx);
        }
        break;
    case VTSS_PORT_INTERFACE_USGMII:
        if (p <= 47) {
            u32 X = (p - p % 8) / 8;
            *sd_indx = X + 4;
            *sd_type = FA_SERDES_TYPE_10G;
            VTSS_N("(X OCTAL 1G SD) USGMII p:%d SD10G_LANE index: %d",p, *sd_indx);
        }
        break;
    case VTSS_PORT_INTERFACE_QXGMII: /* QXGMII:    4x2G5 devices. Mode 'R'. */
        if (p <= 63) {
            int R = (p < 16) ? p : (p < 32) ? p - 16 : (p < 48) ? p - 32 : p - 48;
            if (R < 8) {
                *sd_indx = R + 4;
                *sd_type = FA_SERDES_TYPE_10G;
                VTSS_N("(R QUAD 2G5 SD) 10USXGMII p:%d SD10G_LANE index: %d",p, *sd_indx);
            } else {
                *sd_indx = R - 8;
                *sd_type = FA_SERDES_TYPE_25G;
                VTSS_N("(R QUAD 2G5 SD) 10USXGMII p:%d SD25G_LANE index: %d",p, *sd_indx);
            }
        }
        break;
    case VTSS_PORT_INTERFACE_DXGMII_10G: /* DXGMII_10G: 2x5G devices. Mode 'U'.*/
        if (p <= 63 && (p <= 15 || p >= 48)) {
            int U = (p < 16) ? p : p - 48;
            if (U < 8) {
                *sd_indx = U + 4;
                *sd_type = FA_SERDES_TYPE_10G;
                VTSS_N("(U DUAL 5G SD) 10USXGMII p:%d SD10G_LANE index: %d",p, *sd_indx);
            } else {
                *sd_indx = U - 8;
                *sd_type = FA_SERDES_TYPE_25G;
                VTSS_N("(U DUAL 5G SD) 10USXGMII p:%d SD25G_LANE index: %d",p, *sd_indx);
            }
        }
        break;
    case VTSS_PORT_INTERFACE_DXGMII_5G: /* DXGMII_5G: 2x2G5 devices. Mode 'F'.*/
        if (p <= 63) {
            int F = (p < 32) ? p :  p - 32;
            if (F < 12) {
                *sd_indx = F + 1;
                *sd_type = FA_SERDES_TYPE_6G;
                VTSS_N("(F DUAL 2G5 SD) 5USXGMII p:%d SD6G_LANE index: %d",p, *sd_indx);
            } else if (F < 24) {
                *sd_indx = F - 12;
                *sd_type = FA_SERDES_TYPE_10G;
                VTSS_N("(F DUAL 2G5 SD) 5USXGMII p:%d SD10G_LANE index: %d",p, *sd_indx);
            } else {
                *sd_indx = F - 24;
                *sd_type = FA_SERDES_TYPE_25G;
                VTSS_N("(F DUAL 2G5 SD) 5USXGMII p:%d SD25G_LANE index: %d",p, *sd_indx);
            }
        }
        break;
    default:
        if (p < 12) {
            *sd_indx = p + 1;
            *sd_type = FA_SERDES_TYPE_6G;
            VTSS_N("Single Serdes p:%d SD6G_LANE index: %d",p, *sd_indx);
            return VTSS_TO_SD6G_LANE(p + 1);
        } else if (p >= 12 && p < 16) {
            *sd_indx = p - 12;
            *sd_type = FA_SERDES_TYPE_10G;
            VTSS_N("Single Serdes p:%d SD10_LANE index: %d",p, *sd_indx);
        } else if (p >= 48 && p < 56) {
            *sd_indx = p - 44;
            *sd_type = FA_SERDES_TYPE_10G;
            VTSS_N("Single Serdes p:%d SD10_LANE index: %d",p, *sd_indx);
        } else if (p >= 56 && p < 64) {
            *sd_indx = p - 56;
            *sd_type = FA_SERDES_TYPE_25G;
            VTSS_N("Single Serdes p:%d SD25_LANE index: %d",p, *sd_indx);
        } else if (p == 64) {
            *sd_indx = 0;
            *sd_type = FA_SERDES_TYPE_6G;
            VTSS_N("Single Serdes p:%d SD6G_LANE index: %d",p, *sd_indx);
        } else {
            VTSS_E("illegal port/interface mode");
            return VTSS_RC_ERROR;
        }
    }
    return VTSS_RC_OK;
}

/* Returns index 0-12 for 6G ports  */
/* Returns index 0-11 for 10G ports */
/* Returns index 0-7  for 25G ports  */
u32 vtss_fa_port2sd_indx(vtss_state_t *vtss_state, vtss_port_no_t port_no)
{
    u32 sd_indx = 0, sd_type;
    (void)vtss_fa_port2sd(vtss_state, port_no, &sd_indx, &sd_type);
    return sd_indx;
}


static vtss_rc fa_sd25g_cfg(vtss_state_t *vtss_state, vtss_port_no_t port_no, vtss_serdes_mode_t mode)
{
    vtss_port_speed_t speed = vtss_state->port.conf[port_no].speed;
    vtss_sd25g28_setup_args_t sd_cfg = {0};

    sd_cfg.chip_name = VTSS_SD25G28_CHIP_ANT;
    sd_cfg.txinvert = 0;
    sd_cfg.rxinvert = 1;
    sd_cfg.txswing = 240;
    sd_cfg.reg_ctrl = 1;
    sd_cfg.preset = VTSS_SD25G28_PRESET_NONE;

     /* Apply the serdes mode */
    switch (mode) {
        case VTSS_SERDES_MODE_IDLE:
        case VTSS_SERDES_MODE_SFI_DAC:
        case VTSS_SERDES_MODE_SFI_SR:
        case VTSS_SERDES_MODE_SFI_ZR:
        case VTSS_SERDES_MODE_SFI_BP:
        case VTSS_SERDES_MODE_SFI_B2B:
        case VTSS_SERDES_MODE_SFI_PR_NONE:
        case VTSS_SERDES_MODE_SFI_KR:
        case VTSS_SERDES_MODE_SFI: {
            sd_cfg.preset = serdes2preset_25g(vtss_state->port.conf[port_no].serdes.media_type, speed);
            if (speed == VTSS_SPEED_25G) {
                sd_cfg.mode = VTSS_SD25G28_MODE_25G_LAN;
            } else if (speed == VTSS_SPEED_10G) {
                sd_cfg.mode = VTSS_SD25G28_MODE_10G_LAN;
            } else if (speed == VTSS_SPEED_5G) {
                sd_cfg.mode = VTSS_SD25G28_MODE_5G_LAN;
            } else {
                VTSS_E("Illegal speed");
            }
            break;
        }
        case VTSS_SERDES_MODE_DXGMII_10G: { // 2x5G, mode 'U'
            sd_cfg.mode = VTSS_SD25G28_MODE_10G_DSXGMII;
            break;
        }
        case VTSS_SERDES_MODE_USGMII: { // 8x1G, mode 'X'
            sd_cfg.mode = VTSS_SD10G28_MODE_10G_USGMII;
            break;
        }
        case VTSS_SERDES_MODE_QXGMII: { // 4x2G5, mode 'R'
            sd_cfg.mode = VTSS_SD25G28_MODE_10G_QSXGMII;
            break;
        }
        case VTSS_SERDES_MODE_DXGMII_5G: { // 2x2G5, mode 'F'
            sd_cfg.mode = VTSS_SD25G28_MODE_5G_USXGMII;
            break;
        }
        case VTSS_SERDES_MODE_2G5: {
            sd_cfg.mode = VTSS_SD25G28_MODE_SGMII2G5;
            break;
        }
        case VTSS_SERDES_MODE_SGMII:
        case VTSS_SERDES_MODE_1000BaseX: {
            sd_cfg.mode = VTSS_SD25G28_MODE_SGMII;
            break;
        }

        case VTSS_SERDES_MODE_QSGMII: {
            sd_cfg.mode = VTSS_SD25G28_MODE_10G_QSXGMII;
            break;
        }
        case VTSS_SERDES_MODE_100FX: {
            sd_cfg.mode = VTSS_SD25G28_MODE_FX100;
            break;
        }
        default: {
            VTSS_E("Serdes mode (%d) not supported",mode);
            return VTSS_RC_ERROR;
        }
    }

    if (vtss_ant_sd25g28_setup_lane(vtss_state, sd_cfg, port_no) != VTSS_RC_OK) {
        VTSS_E("Could not configure Serdes mode (%d) at port:%d",mode,port_no);
        return VTSS_RC_ERROR;
    }

    return VTSS_RC_OK;
}

static vtss_rc fa_sd10g_cfg(vtss_state_t *vtss_state, vtss_port_no_t port_no,  vtss_serdes_mode_t mode, u32 sd_type)
{
    vtss_port_speed_t speed = vtss_state->port.conf[port_no].speed;
    vtss_sd10g28_setup_args_t sd_cfg = {0};

    sd_cfg.chip_name = VTSS_SD10G28_CHIP_ANT;
    sd_cfg.is_6g =  sd_type == FA_SERDES_TYPE_6G ? TRUE : FALSE;
    sd_cfg.txinvert = 0;
    sd_cfg.rxinvert = 1;
    sd_cfg.txswing = 240;
    sd_cfg.preset = VTSS_SD10G28_PRESET_NONE;

    /* Apply the serdes mode */
    switch (mode) {
        case VTSS_SERDES_MODE_IDLE:
        case VTSS_SERDES_MODE_SFI_DAC:
        case VTSS_SERDES_MODE_SFI_SR:
        case VTSS_SERDES_MODE_SFI_ZR:
        case VTSS_SERDES_MODE_SFI_BP:
        case VTSS_SERDES_MODE_SFI_B2B:
        case VTSS_SERDES_MODE_SFI_PR_NONE:
        case VTSS_SERDES_MODE_SFI_KR:
        case VTSS_SERDES_MODE_SFI: {
            sd_cfg.preset = serdes2preset(vtss_state->port.conf[port_no].serdes.media_type);
            if (speed == VTSS_SPEED_10G) {
                sd_cfg.mode = VTSS_SD10G28_MODE_10G_LAN;
                 } else if (speed == VTSS_SPEED_5G) {
                sd_cfg.mode = VTSS_SD10G28_MODE_5G_LAN;
            } else {
                VTSS_E("Illegal speed");
            }
            break;
        }
        case VTSS_SERDES_MODE_2G5: {
            sd_cfg.mode = VTSS_SD10G28_MODE_SGMII2G5;
            break;
        }
        case VTSS_SERDES_MODE_SGMII:
        case VTSS_SERDES_MODE_1000BaseX: {
            sd_cfg.mode = VTSS_SD10G28_MODE_SGMII;
            break;
        }
        case VTSS_SERDES_MODE_DXGMII_10G: { // 2x5G, mode 'U'
            sd_cfg.mode = VTSS_SD10G28_MODE_10G_DSXGMII;
            break;
        }
       case VTSS_SERDES_MODE_USGMII: { // 8x1G, mode 'X'
            sd_cfg.mode = VTSS_SD10G28_MODE_10G_USGMII;
            break;
        }
        case VTSS_SERDES_MODE_QXGMII: { // 4x2G5, mode 'R'
            sd_cfg.mode = VTSS_SD10G28_MODE_10G_QSXGMII;
            break;
        }
        case VTSS_SERDES_MODE_DXGMII_5G: { // 2x2G5, mode 'F'
            sd_cfg.mode = VTSS_SD10G28_MODE_5G_USXGMII;
            break;
        }
        case VTSS_SERDES_MODE_QSGMII: {
            sd_cfg.mode = VTSS_SD10G28_MODE_QSGMII;
            break;
        }
        case VTSS_SERDES_MODE_100FX: {
            sd_cfg.mode = VTSS_SD10G28_MODE_FX100;
            break;
        }
        default: {
            VTSS_E("Serdes mode (%d) not supported",mode);
            return VTSS_RC_ERROR;
        }
    }
    if (vtss_ant_sd10g28_setup_lane(vtss_state, sd_cfg, port_no) != VTSS_RC_OK) {
        VTSS_E("Could not configure Serdes mode (%d) at port:%d",mode,port_no);
        return VTSS_RC_ERROR;
    }

    return VTSS_RC_OK;
}
// Apply board specific TX equalizer settings
static vtss_rc vtss_fa_sd_board_settings(vtss_state_t *vtss_state, vtss_port_no_t port_no, u32 sd_indx, u32 sd_type)
{
    vtss_rc rc = VTSS_RC_OK;
    vtss_port_speed_t speed = vtss_state->port.conf[port_no].speed;
    u32 value, sd_tgt;

    if (vtss_state->init_conf.serdes_tap_get == NULL) {
        return VTSS_RC_OK; // Not available
    }

    // Get the port post-cursor settings neeeded on the specific board
    rc = vtss_state->init_conf.serdes_tap_get(NULL, port_no, speed, VTSS_SERDES_POST_CURSOR, &value);

    if (rc == VTSS_RC_OK) {
        if (sd_type == FA_SERDES_TYPE_25G) {
            sd_tgt = VTSS_TO_SD25G_LANE(sd_indx);
            REG_WRM(VTSS_SD25G_TARGET_LANE_07(sd_tgt),
                    VTSS_F_SD25G_TARGET_LANE_07_LN_CFG_EN_DLY(1),
                    VTSS_M_SD25G_TARGET_LANE_07_LN_CFG_EN_DLY);

            REG_WRM(VTSS_SD25G_TARGET_LANE_03(sd_tgt),
                    VTSS_F_SD25G_TARGET_LANE_03_LN_CFG_TAP_DLY_4_0(value),
                    VTSS_M_SD25G_TARGET_LANE_03_LN_CFG_TAP_DLY_4_0);

        } else {
            sd_tgt = VTSS_TO_SD10G_LANE(sd_indx);
            REG_WRM(VTSS_SD10G_LANE_TARGET_LANE_04(sd_tgt),
                    VTSS_F_SD10G_LANE_TARGET_LANE_04_CFG_TAP_DLY_4_0(value),
                    VTSS_M_SD10G_LANE_TARGET_LANE_04_CFG_TAP_DLY_4_0);
        }
    }

    return VTSS_RC_OK;
}

vtss_rc vtss_fa_sd_cfg(vtss_state_t *vtss_state, vtss_port_no_t port_no,  vtss_serdes_mode_t mode)
{
    u32 sd_indx, sd_type;

    /* Map API port to Serdes instance */
    VTSS_RC(vtss_fa_port2sd(vtss_state, port_no, &sd_indx, &sd_type));

    if (sd_type == FA_SERDES_TYPE_25G) {
        VTSS_RC(fa_sd25g_cfg(vtss_state, port_no,  mode));
    } else {
        VTSS_RC(fa_sd10g_cfg(vtss_state, port_no,  mode, sd_type));
    }

    /*  Apply board specific TX equalizer settings */
    VTSS_RC(vtss_fa_sd_board_settings(vtss_state, port_no, sd_indx, sd_type));

    return VTSS_RC_OK;
}

vtss_rc vtss_fa_cmu_init(vtss_state_t *vtss_state)
{
    for (u32 cmu = 0; cmu < 14; cmu++) {
        vtss_ant_sd10g28_cmu_reg_cfg(vtss_state, cmu);
    }

    return VTSS_RC_OK;
}

#endif /* VTSS_ARCH_FA */