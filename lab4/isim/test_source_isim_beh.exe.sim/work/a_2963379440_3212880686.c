/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "Function hex ended without a return statement";
static const char *ng1 = "/home/kuba/isp/lab4/source.vhd";
extern char *IEEE_P_2592010699;



char *work_a_2963379440_3212880686_sub_16682841994384476982_3057020925(char *t1, char *t2, char *t3)
{
    char t5[24];
    char t6[16];
    char *t0;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    char *t16;
    int t18;
    char *t19;
    int t21;
    char *t22;
    int t24;
    char *t25;
    int t27;
    char *t28;
    int t30;
    char *t31;
    int t33;
    char *t34;
    int t36;
    char *t37;
    int t39;
    char *t40;
    int t42;
    char *t43;
    int t45;
    char *t46;
    int t48;
    char *t49;
    int t51;
    char *t52;
    int t54;
    char *t55;
    int t57;
    char *t58;
    int t60;
    char *t61;
    char *t63;
    char *t64;
    int t65;

LAB0:    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 3;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (0 - 3);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t5 + 4U);
    t11 = (t3 != 0);
    if (t11 == 1)
        goto LAB3;

LAB2:    t12 = (t5 + 12U);
    *((char **)t12) = t6;
    t13 = (t1 + 8476);
    t15 = xsi_mem_cmp(t13, t3, 4U);
    if (t15 == 1)
        goto LAB5;

LAB22:    t16 = (t1 + 8480);
    t18 = xsi_mem_cmp(t16, t3, 4U);
    if (t18 == 1)
        goto LAB6;

LAB23:    t19 = (t1 + 8484);
    t21 = xsi_mem_cmp(t19, t3, 4U);
    if (t21 == 1)
        goto LAB7;

LAB24:    t22 = (t1 + 8488);
    t24 = xsi_mem_cmp(t22, t3, 4U);
    if (t24 == 1)
        goto LAB8;

LAB25:    t25 = (t1 + 8492);
    t27 = xsi_mem_cmp(t25, t3, 4U);
    if (t27 == 1)
        goto LAB9;

LAB26:    t28 = (t1 + 8496);
    t30 = xsi_mem_cmp(t28, t3, 4U);
    if (t30 == 1)
        goto LAB10;

LAB27:    t31 = (t1 + 8500);
    t33 = xsi_mem_cmp(t31, t3, 4U);
    if (t33 == 1)
        goto LAB11;

LAB28:    t34 = (t1 + 8504);
    t36 = xsi_mem_cmp(t34, t3, 4U);
    if (t36 == 1)
        goto LAB12;

LAB29:    t37 = (t1 + 8508);
    t39 = xsi_mem_cmp(t37, t3, 4U);
    if (t39 == 1)
        goto LAB13;

LAB30:    t40 = (t1 + 8512);
    t42 = xsi_mem_cmp(t40, t3, 4U);
    if (t42 == 1)
        goto LAB14;

LAB31:    t43 = (t1 + 8516);
    t45 = xsi_mem_cmp(t43, t3, 4U);
    if (t45 == 1)
        goto LAB15;

LAB32:    t46 = (t1 + 8520);
    t48 = xsi_mem_cmp(t46, t3, 4U);
    if (t48 == 1)
        goto LAB16;

LAB33:    t49 = (t1 + 8524);
    t51 = xsi_mem_cmp(t49, t3, 4U);
    if (t51 == 1)
        goto LAB17;

LAB34:    t52 = (t1 + 8528);
    t54 = xsi_mem_cmp(t52, t3, 4U);
    if (t54 == 1)
        goto LAB18;

LAB35:    t55 = (t1 + 8532);
    t57 = xsi_mem_cmp(t55, t3, 4U);
    if (t57 == 1)
        goto LAB19;

LAB36:    t58 = (t1 + 8536);
    t60 = xsi_mem_cmp(t58, t3, 4U);
    if (t60 == 1)
        goto LAB20;

LAB37:
LAB21:    t7 = (t1 + 8668);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t7, 8U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 8;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (8 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:    xsi_error(ng0);
    t0 = 0;
    goto LAB1;

LAB5:    t61 = (t1 + 8540);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t61, 8U);
    t63 = (t2 + 0U);
    t64 = (t63 + 0U);
    *((int *)t64) = 1;
    t64 = (t63 + 4U);
    *((int *)t64) = 8;
    t64 = (t63 + 8U);
    *((int *)t64) = 1;
    t65 = (8 - 1);
    t10 = (t65 * 1);
    t10 = (t10 + 1);
    t64 = (t63 + 12U);
    *((unsigned int *)t64) = t10;
    goto LAB1;

LAB6:    t7 = (t1 + 8548);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t7, 8U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 8;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (8 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB7:    t7 = (t1 + 8556);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t7, 8U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 8;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (8 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB8:    t7 = (t1 + 8564);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t7, 8U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 8;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (8 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB9:    t7 = (t1 + 8572);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t7, 8U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 8;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (8 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB10:    t7 = (t1 + 8580);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t7, 8U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 8;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (8 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB11:    t7 = (t1 + 8588);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t7, 8U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 8;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (8 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB12:    t7 = (t1 + 8596);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t7, 8U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 8;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (8 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB13:    t7 = (t1 + 8604);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t7, 8U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 8;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (8 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB14:    t7 = (t1 + 8612);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t7, 8U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 8;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (8 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB15:    t7 = (t1 + 8620);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t7, 8U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 8;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (8 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB16:    t7 = (t1 + 8628);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t7, 8U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 8;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (8 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB17:    t7 = (t1 + 8636);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t7, 8U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 8;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (8 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB18:    t7 = (t1 + 8644);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t7, 8U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 8;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (8 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB19:    t7 = (t1 + 8652);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t7, 8U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 8;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (8 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB20:    t7 = (t1 + 8660);
    t0 = xsi_get_transient_memory(8U);
    memcpy(t0, t7, 8U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 8;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (8 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB38:;
LAB39:    goto LAB4;

LAB40:    goto LAB4;

LAB41:    goto LAB4;

LAB42:    goto LAB4;

LAB43:    goto LAB4;

LAB44:    goto LAB4;

LAB45:    goto LAB4;

LAB46:    goto LAB4;

LAB47:    goto LAB4;

LAB48:    goto LAB4;

LAB49:    goto LAB4;

LAB50:    goto LAB4;

LAB51:    goto LAB4;

LAB52:    goto LAB4;

LAB53:    goto LAB4;

LAB54:    goto LAB4;

LAB55:    goto LAB4;

}

static void work_a_2963379440_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    int t11;
    int t12;
    unsigned char t13;
    int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;

LAB0:    xsi_set_current_line(125, ng1);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 5192);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(126, ng1);
    t1 = (t0 + 5288);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(127, ng1);
    t1 = (t0 + 5352);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(129, ng1);
    t2 = (t0 + 2312U);
    t6 = *((char **)t2);
    t11 = *((int *)t6);
    t2 = (t0 + 3408U);
    t7 = *((char **)t2);
    t12 = *((int *)t7);
    t13 = (t11 == t12);
    if (t13 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(153, ng1);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t11 = *((int *)t2);
    t12 = (t11 + 1);
    t1 = (t0 + 5288);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t12;
    xsi_driver_first_trans_fast(t1);

LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(130, ng1);
    t2 = (t0 + 2472U);
    t8 = *((char **)t2);
    t14 = *((int *)t8);
    if (t14 == 0)
        goto LAB14;

LAB18:    if (t14 == 1)
        goto LAB15;

LAB19:    if (t14 == 2)
        goto LAB16;

LAB20:
LAB17:    xsi_set_current_line(141, ng1);
    t1 = (t0 + 8688);
    t5 = (t0 + 5416);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    memcpy(t15, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(142, ng1);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t21 = (31 - 7);
    t22 = (t21 * 1U);
    t23 = (0 + t22);
    t1 = (t2 + t23);
    t5 = (t0 + 5480);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    memcpy(t15, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);

LAB13:    xsi_set_current_line(145, ng1);
    t1 = (t0 + 5288);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(147, ng1);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t11 = *((int *)t2);
    t3 = (t11 == 3);
    if (t3 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(150, ng1);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t11 = *((int *)t2);
    t12 = (t11 + 1);
    t1 = (t0 + 5352);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t12;
    xsi_driver_first_trans_fast(t1);

LAB23:    goto LAB11;

LAB14:    xsi_set_current_line(132, ng1);
    t2 = (t0 + 8676);
    t16 = (t0 + 5416);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t2, 4U);
    xsi_driver_first_trans_fast_port(t16);
    xsi_set_current_line(133, ng1);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t21 = (31 - 31);
    t22 = (t21 * 1U);
    t23 = (0 + t22);
    t1 = (t2 + t23);
    t5 = (t0 + 5480);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    memcpy(t15, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB13;

LAB15:    xsi_set_current_line(135, ng1);
    t1 = (t0 + 8680);
    t5 = (t0 + 5416);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    memcpy(t15, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(136, ng1);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t21 = (31 - 23);
    t22 = (t21 * 1U);
    t23 = (0 + t22);
    t1 = (t2 + t23);
    t5 = (t0 + 5480);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    memcpy(t15, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB13;

LAB16:    xsi_set_current_line(138, ng1);
    t1 = (t0 + 8684);
    t5 = (t0 + 5416);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    memcpy(t15, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(139, ng1);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t21 = (31 - 15);
    t22 = (t21 * 1U);
    t23 = (0 + t22);
    t1 = (t2 + t23);
    t5 = (t0 + 5480);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    memcpy(t15, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB13;

LAB21:;
LAB22:    xsi_set_current_line(148, ng1);
    t1 = (t0 + 5352);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB23;

}

static void work_a_2963379440_3212880686_p_1(char *t0)
{
    char t48[16];
    char t49[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    int t20;
    int t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    unsigned char t25;
    unsigned char t26;
    char *t27;
    int t28;
    char *t29;
    int t30;
    unsigned char t31;
    unsigned char t32;
    char *t33;
    unsigned char t34;
    unsigned char t35;
    char *t36;
    int t37;
    char *t38;
    int t39;
    unsigned char t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t50;
    static char *nl0[] = {&&LAB32, &&LAB33, &&LAB34, &&LAB35};

LAB0:    xsi_set_current_line(160, ng1);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 5208);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(161, ng1);
    t1 = (t0 + 5544);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(162, ng1);
    t1 = (t0 + 5608);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(163, ng1);
    t1 = (t0 + 5672);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(164, ng1);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)3, 32U);
    t5 = (t0 + 5736);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(166, ng1);
    t1 = (t0 + 5800);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(167, ng1);
    t1 = (t0 + 5864);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(169, ng1);
    t2 = (t0 + 2152U);
    t6 = *((char **)t2);
    t15 = *((unsigned char *)t6);
    t16 = (t15 == (unsigned char)0);
    if (t16 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 2152U);
    t7 = *((char **)t2);
    t18 = *((unsigned char *)t7);
    t19 = (t18 == (unsigned char)1);
    if (t19 == 1)
        goto LAB22;

LAB23:    t17 = (unsigned char)0;

LAB24:    t14 = t17;

LAB21:    if (t14 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 2152U);
    t24 = *((char **)t2);
    t25 = *((unsigned char *)t24);
    t26 = (t25 == (unsigned char)2);
    if (t26 == 1)
        goto LAB25;

LAB26:    t23 = (unsigned char)0;

LAB27:    t13 = t23;

LAB18:    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 2152U);
    t33 = *((char **)t2);
    t34 = *((unsigned char *)t33);
    t35 = (t34 == (unsigned char)3);
    if (t35 == 1)
        goto LAB28;

LAB29:    t32 = (unsigned char)0;

LAB30:    t12 = t32;

LAB15:    if (t12 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(213, ng1);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t20 = *((int *)t2);
    t21 = (t20 + 1);
    t1 = (t0 + 5608);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t21;
    xsi_driver_first_trans_fast(t1);

LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    t3 = t11;
    goto LAB9;

LAB10:    xsi_set_current_line(175, ng1);
    t2 = (t0 + 5608);
    t41 = (t2 + 56U);
    t42 = *((char **)t41);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    *((int *)t44) = 0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(177, ng1);
    t1 = (t0 + 5736);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 31U, 1, 0LL);
    xsi_set_current_line(178, ng1);
    t1 = (t0 + 5736);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 23U, 1, 0LL);
    xsi_set_current_line(179, ng1);
    t1 = (t0 + 5736);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 15U, 1, 0LL);
    xsi_set_current_line(180, ng1);
    t1 = (t0 + 5736);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 7U, 1, 0LL);
    xsi_set_current_line(182, ng1);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB13:    t12 = (unsigned char)1;
    goto LAB15;

LAB16:    t13 = (unsigned char)1;
    goto LAB18;

LAB19:    t14 = (unsigned char)1;
    goto LAB21;

LAB22:    t2 = (t0 + 2792U);
    t8 = *((char **)t2);
    t20 = *((int *)t8);
    t2 = (t0 + 3648U);
    t9 = *((char **)t2);
    t21 = *((int *)t9);
    t22 = (t20 == t21);
    t17 = t22;
    goto LAB24;

LAB25:    t2 = (t0 + 2792U);
    t27 = *((char **)t2);
    t28 = *((int *)t27);
    t2 = (t0 + 3528U);
    t29 = *((char **)t2);
    t30 = *((int *)t29);
    t31 = (t28 == t30);
    t23 = t31;
    goto LAB27;

LAB28:    t2 = (t0 + 2792U);
    t36 = *((char **)t2);
    t37 = *((int *)t36);
    t2 = (t0 + 3528U);
    t38 = *((char **)t2);
    t39 = *((int *)t38);
    t40 = (t37 == t39);
    t32 = t40;
    goto LAB30;

LAB31:    goto LAB11;

LAB32:    xsi_set_current_line(184, ng1);
    t5 = (t0 + 5736);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_delta(t5, 31U, 1, 0LL);
    xsi_set_current_line(185, ng1);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB37;

LAB39:
LAB38:    goto LAB31;

LAB33:    xsi_set_current_line(189, ng1);
    t1 = (t0 + 5736);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 23U, 1, 0LL);
    xsi_set_current_line(190, ng1);
    t1 = (t0 + 5544);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB31;

LAB34:    xsi_set_current_line(192, ng1);
    t1 = (t0 + 5736);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 15U, 1, 0LL);
    xsi_set_current_line(193, ng1);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3112U);
    t5 = *((char **)t1);
    t45 = (7 - 7);
    t46 = (t45 * 1U);
    t47 = (0 + t46);
    t1 = (t5 + t47);
    t7 = ((IEEE_P_2592010699) + 4000);
    t8 = (t49 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 7;
    t9 = (t8 + 4U);
    *((int *)t9) = 1;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t20 = (1 - 7);
    t50 = (t20 * -1);
    t50 = (t50 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t50;
    t6 = xsi_base_array_concat(t6, t48, t7, (char)99, t3, (char)97, t1, t49, (char)101);
    t50 = (1U + 7U);
    t4 = (8U != t50);
    if (t4 == 1)
        goto LAB40;

LAB41:    t9 = (t0 + 5928);
    t24 = (t9 + 56U);
    t27 = *((char **)t24);
    t29 = (t27 + 56U);
    t33 = *((char **)t29);
    memcpy(t33, t6, 8U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(195, ng1);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t20 = *((int *)t2);
    t3 = (t20 == 7);
    if (t3 != 0)
        goto LAB42;

LAB44:    xsi_set_current_line(199, ng1);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t20 = *((int *)t2);
    t21 = (t20 + 1);
    t1 = (t0 + 5672);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t21;
    xsi_driver_first_trans_fast(t1);

LAB43:    goto LAB31;

LAB35:    xsi_set_current_line(202, ng1);
    t1 = (t0 + 5736);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 7U, 1, 0LL);
    xsi_set_current_line(203, ng1);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t45 = (7 - 3);
    t46 = (t45 * 1U);
    t47 = (0 + t46);
    t1 = (t2 + t47);
    t5 = work_a_2963379440_3212880686_sub_16682841994384476982_3057020925(t0, t48, t1);
    t6 = (t48 + 12U);
    t50 = *((unsigned int *)t6);
    t50 = (t50 * 1U);
    t3 = (8U != t50);
    if (t3 == 1)
        goto LAB45;

LAB46:    t7 = (t0 + 5736);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t24 = (t9 + 56U);
    t27 = *((char **)t24);
    memcpy(t27, t5, 8U);
    xsi_driver_first_trans_delta(t7, 24U, 8U, 0LL);
    xsi_set_current_line(204, ng1);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t45 = (7 - 7);
    t46 = (t45 * 1U);
    t47 = (0 + t46);
    t1 = (t2 + t47);
    t5 = work_a_2963379440_3212880686_sub_16682841994384476982_3057020925(t0, t48, t1);
    t6 = (t48 + 12U);
    t50 = *((unsigned int *)t6);
    t50 = (t50 * 1U);
    t3 = (8U != t50);
    if (t3 == 1)
        goto LAB47;

LAB48:    t7 = (t0 + 5736);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t24 = (t9 + 56U);
    t27 = *((char **)t24);
    memcpy(t27, t5, 8U);
    xsi_driver_first_trans_delta(t7, 16U, 8U, 0LL);
    xsi_set_current_line(206, ng1);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB49;

LAB51:
LAB50:    goto LAB31;

LAB36:    xsi_set_current_line(210, ng1);
    goto LAB31;

LAB37:    xsi_set_current_line(186, ng1);
    t1 = (t0 + 5544);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB38;

LAB40:    xsi_size_not_matching(8U, t50, 0);
    goto LAB41;

LAB42:    xsi_set_current_line(196, ng1);
    t1 = (t0 + 5544);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(197, ng1);
    t1 = (t0 + 5672);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB43;

LAB45:    xsi_size_not_matching(8U, t50, 0);
    goto LAB46;

LAB47:    xsi_size_not_matching(8U, t50, 0);
    goto LAB48;

LAB49:    xsi_set_current_line(207, ng1);
    t1 = (t0 + 5544);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB50;

}


extern void work_a_2963379440_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2963379440_3212880686_p_0,(void *)work_a_2963379440_3212880686_p_1};
	static char *se[] = {(void *)work_a_2963379440_3212880686_sub_16682841994384476982_3057020925};
	xsi_register_didat("work_a_2963379440_3212880686", "isim/test_source_isim_beh.exe.sim/work/a_2963379440_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
