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
extern char *IEEE_P_1242562249;
static const char *ng1 = "/home/kuba/code/isp/lab5x/source.vhd";
extern char *IEEE_P_2592010699;
extern char *STD_TEXTIO;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);


char *work_a_2963379440_3212880686_sub_17161299100477005907_3057020925(char *t1, char *t2, int t3)
{
    char t5[8];
    char t7[16];
    char *t0;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    char *t11;
    int t12;
    char *t13;
    int t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;

LAB0:    t6 = (t5 + 4U);
    *((int *)t6) = t3;
    t8 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t7, t3, 4);
    t9 = (t7 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t8, t10);
    t11 = (t7 + 0U);
    t12 = *((int *)t11);
    t13 = (t7 + 4U);
    t14 = *((int *)t13);
    t15 = (t7 + 8U);
    t16 = *((int *)t15);
    t17 = (t2 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t12;
    t18 = (t17 + 4U);
    *((int *)t18) = t14;
    t18 = (t17 + 8U);
    *((int *)t18) = t16;
    t19 = (t14 - t12);
    t20 = (t19 * t16);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;

LAB1:    return t0;
LAB2:;
}

char *work_a_2963379440_3212880686_sub_17161299100477010263_3057020925(char *t1, char *t2, int t3)
{
    char t5[8];
    char t7[16];
    char *t0;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    char *t11;
    int t12;
    char *t13;
    int t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;

LAB0:    t6 = (t5 + 4U);
    *((int *)t6) = t3;
    t8 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t7, t3, 8);
    t9 = (t7 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t8, t10);
    t11 = (t7 + 0U);
    t12 = *((int *)t11);
    t13 = (t7 + 4U);
    t14 = *((int *)t13);
    t15 = (t7 + 8U);
    t16 = *((int *)t15);
    t17 = (t2 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t12;
    t18 = (t17 + 4U);
    *((int *)t18) = t14;
    t18 = (t17 + 8U);
    *((int *)t18) = t16;
    t19 = (t14 - t12);
    t20 = (t19 * t16);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;

LAB1:    return t0;
LAB2:;
}

static void work_a_2963379440_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(174, ng1);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9256);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 9112);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2963379440_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(175, ng1);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9320);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 9128);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2963379440_3212880686_p_2(char *t0)
{
    char t42[16];
    char t43[16];
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
    char *t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    int t16;
    int t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    unsigned char t21;
    int t22;
    char *t23;
    int t24;
    unsigned char t25;
    unsigned char t26;
    char *t27;
    unsigned char t28;
    unsigned char t29;
    char *t30;
    int t31;
    char *t32;
    int t33;
    unsigned char t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t44;
    static char *nl0[] = {&&LAB32, &&LAB33, &&LAB34, &&LAB35};

LAB0:    xsi_set_current_line(179, ng1);
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
LAB3:    t1 = (t0 + 9144);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(180, ng1);
    t1 = (t0 + 9384);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(181, ng1);
    t1 = (t0 + 9448);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(182, ng1);
    t1 = (t0 + 9512);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(183, ng1);
    t1 = (t0 + 9576);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(184, ng1);
    t1 = (t0 + 9640);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(186, ng1);
    t2 = (t0 + 9640);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(188, ng1);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t12 = (t10 == (unsigned char)0);
    if (t12 == 1)
        goto LAB19;

LAB20:    t1 = (t0 + 3112U);
    t5 = *((char **)t1);
    t14 = *((unsigned char *)t5);
    t15 = (t14 == (unsigned char)1);
    if (t15 == 1)
        goto LAB22;

LAB23:    t13 = (unsigned char)0;

LAB24:    t9 = t13;

LAB21:    if (t9 == 1)
        goto LAB16;

LAB17:    t1 = (t0 + 3112U);
    t8 = *((char **)t1);
    t20 = *((unsigned char *)t8);
    t21 = (t20 == (unsigned char)2);
    if (t21 == 1)
        goto LAB25;

LAB26:    t19 = (unsigned char)0;

LAB27:    t4 = t19;

LAB18:    if (t4 == 1)
        goto LAB13;

LAB14:    t1 = (t0 + 3112U);
    t27 = *((char **)t1);
    t28 = *((unsigned char *)t27);
    t29 = (t28 == (unsigned char)3);
    if (t29 == 1)
        goto LAB28;

LAB29:    t26 = (unsigned char)0;

LAB30:    t3 = t26;

LAB15:    if (t3 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(224, ng1);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t16 = *((int *)t2);
    t17 = (t16 + 1);
    t1 = (t0 + 9448);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t17;
    xsi_driver_first_trans_fast(t1);

LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(194, ng1);
    t1 = (t0 + 9448);
    t35 = (t1 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    *((int *)t38) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(196, ng1);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB13:    t3 = (unsigned char)1;
    goto LAB15;

LAB16:    t4 = (unsigned char)1;
    goto LAB18;

LAB19:    t9 = (unsigned char)1;
    goto LAB21;

LAB22:    t1 = (t0 + 3272U);
    t6 = *((char **)t1);
    t16 = *((int *)t6);
    t1 = (t0 + 6528U);
    t7 = *((char **)t1);
    t17 = *((int *)t7);
    t18 = (t16 == t17);
    t13 = t18;
    goto LAB24;

LAB25:    t1 = (t0 + 3272U);
    t11 = *((char **)t1);
    t22 = *((int *)t11);
    t1 = (t0 + 6408U);
    t23 = *((char **)t1);
    t24 = *((int *)t23);
    t25 = (t22 == t24);
    t19 = t25;
    goto LAB27;

LAB28:    t1 = (t0 + 3272U);
    t30 = *((char **)t1);
    t31 = *((int *)t30);
    t1 = (t0 + 6408U);
    t32 = *((char **)t1);
    t33 = *((int *)t32);
    t34 = (t31 == t33);
    t26 = t34;
    goto LAB30;

LAB31:    goto LAB11;

LAB32:    xsi_set_current_line(198, ng1);
    t5 = (t0 + 1352U);
    t6 = *((char **)t5);
    t4 = *((unsigned char *)t6);
    t9 = (t4 == (unsigned char)2);
    if (t9 != 0)
        goto LAB37;

LAB39:
LAB38:    goto LAB31;

LAB33:    xsi_set_current_line(202, ng1);
    t1 = (t0 + 9384);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB31;

LAB34:    xsi_set_current_line(204, ng1);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3592U);
    t5 = *((char **)t1);
    t39 = (7 - 7);
    t40 = (t39 * 1U);
    t41 = (0 + t40);
    t1 = (t5 + t41);
    t7 = ((IEEE_P_2592010699) + 4000);
    t8 = (t43 + 0U);
    t11 = (t8 + 0U);
    *((int *)t11) = 7;
    t11 = (t8 + 4U);
    *((int *)t11) = 1;
    t11 = (t8 + 8U);
    *((int *)t11) = -1;
    t16 = (1 - 7);
    t44 = (t16 * -1);
    t44 = (t44 + 1);
    t11 = (t8 + 12U);
    *((unsigned int *)t11) = t44;
    t6 = xsi_base_array_concat(t6, t42, t7, (char)99, t3, (char)97, t1, t43, (char)101);
    t44 = (1U + 7U);
    t4 = (8U != t44);
    if (t4 == 1)
        goto LAB40;

LAB41:    t11 = (t0 + 9704);
    t23 = (t11 + 56U);
    t27 = *((char **)t23);
    t30 = (t27 + 56U);
    t32 = *((char **)t30);
    memcpy(t32, t6, 8U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(206, ng1);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t16 = *((int *)t2);
    t3 = (t16 == 7);
    if (t3 != 0)
        goto LAB42;

LAB44:    xsi_set_current_line(210, ng1);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t16 = *((int *)t2);
    t17 = (t16 + 1);
    t1 = (t0 + 9512);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t17;
    xsi_driver_first_trans_fast(t1);

LAB43:    goto LAB31;

LAB35:    xsi_set_current_line(213, ng1);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB45;

LAB47:
LAB46:    goto LAB31;

LAB36:    xsi_set_current_line(221, ng1);
    goto LAB31;

LAB37:    xsi_set_current_line(199, ng1);
    t5 = (t0 + 9384);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t23 = *((char **)t11);
    *((unsigned char *)t23) = (unsigned char)1;
    xsi_driver_first_trans_fast(t5);
    goto LAB38;

LAB40:    xsi_size_not_matching(8U, t44, 0);
    goto LAB41;

LAB42:    xsi_set_current_line(207, ng1);
    t1 = (t0 + 9384);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(208, ng1);
    t1 = (t0 + 9512);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB43;

LAB45:    xsi_set_current_line(214, ng1);
    t1 = (t0 + 9640);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(215, ng1);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t1 = (t0 + 9768);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(216, ng1);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t16 = *((int *)t2);
    t17 = (t16 + 1);
    t1 = (t0 + 9576);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t17;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(218, ng1);
    t1 = (t0 + 9384);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB46;

}

static void work_a_2963379440_3212880686_p_3(char *t0)
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
    unsigned char t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    static char *nl0[] = {&&LAB14, &&LAB15, &&LAB16, &&LAB17};

LAB0:    xsi_set_current_line(231, ng1);
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
LAB3:    t1 = (t0 + 9160);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(232, ng1);
    t1 = (t0 + 9832);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(233, ng1);
    t1 = (t0 + 9896);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(234, ng1);
    t1 = (t0 + 9960);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(235, ng1);
    t1 = (t0 + 10024);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(237, ng1);
    t1 = (t0 + 10088);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(240, ng1);
    t2 = (t0 + 4712U);
    t6 = *((char **)t2);
    t11 = *((int *)t6);
    t12 = (t11 == 0);
    if (t12 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(272, ng1);
    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    t11 = *((int *)t2);
    t13 = (t11 - 1);
    t1 = (t0 + 9896);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t13;
    xsi_driver_first_trans_fast(t1);

LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(241, ng1);
    t2 = (t0 + 6408U);
    t7 = *((char **)t2);
    t13 = *((int *)t7);
    t2 = (t0 + 9896);
    t8 = (t2 + 56U);
    t14 = *((char **)t8);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((int *)t16) = t13;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(243, ng1);
    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB13:    goto LAB11;

LAB14:    xsi_set_current_line(245, ng1);
    t5 = (t0 + 10024);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t14 = *((char **)t8);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(246, ng1);
    t1 = (t0 + 10088);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(247, ng1);
    t1 = (t0 + 9896);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(249, ng1);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB19;

LAB21:
LAB20:    goto LAB13;

LAB15:    xsi_set_current_line(254, ng1);
    t1 = (t0 + 9960);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(255, ng1);
    t1 = (t0 + 10088);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(256, ng1);
    t1 = (t0 + 9832);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB13;

LAB16:    xsi_set_current_line(258, ng1);
    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t1 = (t0 + 4872U);
    t5 = *((char **)t1);
    t11 = *((int *)t5);
    t13 = (t11 - 7);
    t17 = (t13 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, t11);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t1 = (t2 + t19);
    t3 = *((unsigned char *)t1);
    t6 = (t0 + 10088);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t3;
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(260, ng1);
    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t11 = *((int *)t2);
    t3 = (t11 == 7);
    if (t3 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(263, ng1);
    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t11 = *((int *)t2);
    t13 = (t11 + 1);
    t1 = (t0 + 9960);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t13;
    xsi_driver_first_trans_fast(t1);

LAB23:    goto LAB13;

LAB17:    xsi_set_current_line(266, ng1);
    t1 = (t0 + 10088);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(267, ng1);
    t1 = (t0 + 9832);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB13;

LAB18:    xsi_set_current_line(269, ng1);
    goto LAB13;

LAB19:    xsi_set_current_line(250, ng1);
    t1 = (t0 + 10024);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(251, ng1);
    t1 = (t0 + 9832);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB20;

LAB22:    xsi_set_current_line(261, ng1);
    t1 = (t0 + 9832);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB23;

}

static void work_a_2963379440_3212880686_p_4(char *t0)
{
    char t14[16];
    char t19[16];
    char t20[16];
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
    char *t11;
    int t12;
    int t13;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    int t18;
    char *t21;
    char *t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned char t31;
    unsigned char t32;
    unsigned char t33;
    int t34;
    unsigned int t35;
    static char *nl0[] = {&&LAB14, &&LAB15, &&LAB16, &&LAB17, &&LAB18, &&LAB19, &&LAB20, &&LAB21};

LAB0:    xsi_set_current_line(280, ng1);
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
LAB3:    t1 = (t0 + 9176);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(281, ng1);
    t1 = (t0 + 10152);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(282, ng1);
    t1 = (t0 + 10216);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(283, ng1);
    t1 = (t0 + 10280);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(284, ng1);
    t1 = (t0 + 10344);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(285, ng1);
    t1 = (t0 + 10408);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(286, ng1);
    t1 = (t0 + 10472);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(288, ng1);
    t2 = (t0 + 10536);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(289, ng1);
    t1 = (t0 + 10472);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(291, ng1);
    t1 = (t0 + 5832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(294, ng1);
    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(292, ng1);
    t1 = (t0 + 10408);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB11:    goto LAB3;

LAB13:    goto LAB11;

LAB14:    xsi_set_current_line(296, ng1);
    t5 = (t0 + 10152);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(297, ng1);
    t1 = (t0 + 10216);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(298, ng1);
    t1 = (t0 + 10280);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(300, ng1);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t1 = (t0 + 6648U);
    t5 = *((char **)t1);
    t13 = *((int *)t5);
    t3 = (t12 >= t13);
    if (t3 != 0)
        goto LAB22;

LAB24:
LAB23:    goto LAB13;

LAB15:    xsi_set_current_line(308, ng1);
    t1 = (t0 + 10472);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(309, ng1);
    t1 = (t0 + 10408);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(310, ng1);
    t1 = (t0 + 10344);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB13;

LAB16:    xsi_set_current_line(312, ng1);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t13 = (t12 + 1);
    t1 = (t0 + 10280);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t13;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(313, ng1);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 5512U);
    t5 = *((char **)t1);
    t12 = *((int *)t5);
    t13 = (t12 - 1);
    t15 = (t13 * -1);
    t16 = (8U * t15);
    t17 = (0U + t16);
    t1 = (t0 + 10600);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    memcpy(t11, t2, 8U);
    xsi_driver_first_trans_delta(t1, t17, 8U, 0LL);
    xsi_set_current_line(314, ng1);
    t1 = (t0 + 10344);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(316, ng1);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t1 = (t0 + 6648U);
    t5 = *((char **)t1);
    t13 = *((int *)t5);
    t18 = (t13 - 1);
    t3 = (t12 == t18);
    if (t3 != 0)
        goto LAB25;

LAB27:
LAB26:    goto LAB13;

LAB17:    xsi_set_current_line(321, ng1);
    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    t1 = (t0 + 5512U);
    t5 = *((char **)t1);
    t12 = *((int *)t5);
    t13 = (t12 - 1);
    t15 = (t13 * -1);
    xsi_vhdl_check_range_of_index(1, 0, -1, t12);
    t16 = (8U * t15);
    t17 = (0 + t16);
    t1 = (t2 + t17);
    t6 = (t0 + 5192U);
    t7 = *((char **)t6);
    t18 = *((int *)t7);
    t6 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t14, t18, 4);
    t11 = ((IEEE_P_2592010699) + 4000);
    t21 = (t20 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 7;
    t22 = (t21 + 4U);
    *((int *)t22) = 0;
    t22 = (t21 + 8U);
    *((int *)t22) = -1;
    t23 = (0 - 7);
    t24 = (t23 * -1);
    t24 = (t24 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t24;
    t8 = xsi_base_array_concat(t8, t19, t11, (char)97, t1, t20, (char)97, t6, t14, (char)101);
    t22 = (t14 + 12U);
    t24 = *((unsigned int *)t22);
    t24 = (t24 * 1U);
    t25 = (8U + t24);
    t3 = (12U != t25);
    if (t3 == 1)
        goto LAB28;

LAB29:    t26 = (t0 + 10664);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t8, 12U);
    xsi_driver_first_trans_fast(t26);
    xsi_set_current_line(322, ng1);
    t1 = (t0 + 10408);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(323, ng1);
    t1 = (t0 + 10344);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB13;

LAB18:    xsi_set_current_line(325, ng1);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t1 = (t0 + 10728);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(326, ng1);
    t1 = (t0 + 10344);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB13;

LAB19:    xsi_set_current_line(328, ng1);
    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t9 = (t4 == (unsigned char)2);
    if (t9 == 1)
        goto LAB33;

LAB34:    t3 = (unsigned char)0;

LAB35:    if (t3 != 0)
        goto LAB30;

LAB32:
LAB31:    goto LAB13;

LAB20:    xsi_set_current_line(358, ng1);
    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t9 = (t4 == (unsigned char)2);
    if (t9 == 1)
        goto LAB50;

LAB51:    t3 = (unsigned char)0;

LAB52:    if (t3 != 0)
        goto LAB47;

LAB49:
LAB48:    goto LAB13;

LAB21:    xsi_set_current_line(364, ng1);
    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t9 = (t4 == (unsigned char)2);
    if (t9 == 1)
        goto LAB58;

LAB59:    t3 = (unsigned char)0;

LAB60:    if (t3 != 0)
        goto LAB55;

LAB57:
LAB56:    goto LAB13;

LAB22:    xsi_set_current_line(301, ng1);
    t1 = (t0 + 10344);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(304, ng1);
    t1 = (t0 + 6976U);
    t2 = (t0 + 15832);
    t6 = (t14 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 10;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t12 = (10 - 1);
    t15 = (t12 * 1);
    t15 = (t15 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t15;
    std_textio_file_open1(t1, t2, t14, (unsigned char)1);
    goto LAB23;

LAB25:    xsi_set_current_line(317, ng1);
    t1 = (t0 + 10280);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(318, ng1);
    t1 = (t0 + 10344);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB26;

LAB28:    xsi_size_not_matching(12U, t25, 0);
    goto LAB29;

LAB30:    xsi_set_current_line(329, ng1);
    t1 = (t0 + 5992U);
    t6 = *((char **)t1);
    t1 = (t0 + 5352U);
    t7 = *((char **)t1);
    t12 = *((int *)t7);
    t13 = (7 - t12);
    t18 = (t13 - 7);
    t15 = (t18 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, t13);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t1 = (t6 + t17);
    t32 = *((unsigned char *)t1);
    t33 = (t32 == (unsigned char)3);
    if (t33 != 0)
        goto LAB36;

LAB38:    xsi_set_current_line(336, ng1);
    t1 = work_a_2963379440_3212880686_sub_17161299100477010263_3057020925(t0, t14, 32);
    t2 = (t14 + 12U);
    t15 = *((unsigned int *)t2);
    t15 = (t15 * 1U);
    t3 = (8U != t15);
    if (t3 == 1)
        goto LAB39;

LAB40:    t5 = (t0 + 10792);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(339, ng1);
    t1 = (t0 + 8600);
    t2 = (t0 + 7152U);
    std_textio_write4(STD_TEXTIO, t1, t2, (unsigned char)46, (unsigned char)0, 0);

LAB37:    xsi_set_current_line(344, ng1);
    t1 = (t0 + 10536);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(345, ng1);
    t1 = (t0 + 5352U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t13 = (t12 + 1);
    t1 = (t0 + 10216);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t13;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(347, ng1);
    t1 = (t0 + 5352U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t3 = (t12 == 7);
    if (t3 != 0)
        goto LAB41;

LAB43:
LAB42:    goto LAB31;

LAB33:    t1 = (t0 + 4072U);
    t5 = *((char **)t1);
    t10 = *((unsigned char *)t5);
    t31 = (t10 == (unsigned char)2);
    t3 = t31;
    goto LAB35;

LAB36:    xsi_set_current_line(330, ng1);
    t8 = (t0 + 5672U);
    t11 = *((char **)t8);
    t8 = (t0 + 5512U);
    t21 = *((char **)t8);
    t23 = *((int *)t21);
    t34 = (t23 - 1);
    t24 = (t34 * -1);
    xsi_vhdl_check_range_of_index(1, 0, -1, t23);
    t25 = (8U * t24);
    t35 = (0 + t25);
    t8 = (t11 + t35);
    t22 = (t0 + 10792);
    t26 = (t22 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t8, 8U);
    xsi_driver_first_trans_fast(t22);
    xsi_set_current_line(333, ng1);
    t1 = (t0 + 8600);
    t2 = (t0 + 7152U);
    t5 = (t0 + 5672U);
    t6 = *((char **)t5);
    t5 = (t0 + 5512U);
    t7 = *((char **)t5);
    t12 = *((int *)t7);
    t13 = (t12 - 1);
    t15 = (t13 * -1);
    xsi_vhdl_check_range_of_index(1, 0, -1, t12);
    t16 = (8U * t15);
    t17 = (0 + t16);
    t5 = (t6 + t17);
    t8 = (t14 + 0U);
    t11 = (t8 + 0U);
    *((int *)t11) = 7;
    t11 = (t8 + 4U);
    *((int *)t11) = 0;
    t11 = (t8 + 8U);
    *((int *)t11) = -1;
    t18 = (0 - 7);
    t24 = (t18 * -1);
    t24 = (t24 + 1);
    t11 = (t8 + 12U);
    *((unsigned int *)t11) = t24;
    t23 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t5, t14);
    t3 = ((unsigned char)(t23));
    std_textio_write4(STD_TEXTIO, t1, t2, t3, (unsigned char)0, 0);
    goto LAB37;

LAB39:    xsi_size_not_matching(8U, t15, 0);
    goto LAB40;

LAB41:    xsi_set_current_line(348, ng1);
    t1 = (t0 + 10216);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(349, ng1);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t1 = (t0 + 6648U);
    t5 = *((char **)t1);
    t13 = *((int *)t5);
    t18 = (t13 - 1);
    t3 = (t12 == t18);
    if (t3 != 0)
        goto LAB44;

LAB46:    xsi_set_current_line(352, ng1);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t13 = (t12 + 1);
    t1 = (t0 + 10280);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t13;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(353, ng1);
    t1 = (t0 + 10344);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB45:    goto LAB42;

LAB44:    xsi_set_current_line(350, ng1);
    t1 = (t0 + 10344);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    goto LAB45;

LAB47:    xsi_set_current_line(359, ng1);
    t1 = work_a_2963379440_3212880686_sub_17161299100477010263_3057020925(t0, t14, 13);
    t6 = (t14 + 12U);
    t15 = *((unsigned int *)t6);
    t15 = (t15 * 1U);
    t32 = (8U != t15);
    if (t32 == 1)
        goto LAB53;

LAB54:    t7 = (t0 + 10792);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t21 = (t11 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t1, 8U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(360, ng1);
    t1 = (t0 + 10536);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(361, ng1);
    t1 = (t0 + 10344);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB48;

LAB50:    t1 = (t0 + 4072U);
    t5 = *((char **)t1);
    t10 = *((unsigned char *)t5);
    t31 = (t10 == (unsigned char)2);
    t3 = t31;
    goto LAB52;

LAB53:    xsi_size_not_matching(8U, t15, 0);
    goto LAB54;

LAB55:    xsi_set_current_line(365, ng1);
    t1 = work_a_2963379440_3212880686_sub_17161299100477010263_3057020925(t0, t14, 10);
    t6 = (t14 + 12U);
    t15 = *((unsigned int *)t6);
    t15 = (t15 * 1U);
    t32 = (8U != t15);
    if (t32 == 1)
        goto LAB61;

LAB62:    t7 = (t0 + 10792);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t21 = (t11 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t1, 8U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(368, ng1);
    t1 = (t0 + 8600);
    t2 = (t0 + 6976U);
    t5 = (t0 + 7152U);
    std_textio_writeline(STD_TEXTIO, t1, t2, t5);
    xsi_set_current_line(371, ng1);
    t1 = (t0 + 10536);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(373, ng1);
    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t3 = (t12 == 15);
    if (t3 != 0)
        goto LAB63;

LAB65:    xsi_set_current_line(380, ng1);
    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t13 = (t12 + 1);
    t1 = (t0 + 10152);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t13;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(381, ng1);
    t1 = (t0 + 10280);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(382, ng1);
    t1 = (t0 + 10344);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB64:    goto LAB56;

LAB58:    t1 = (t0 + 4072U);
    t5 = *((char **)t1);
    t10 = *((unsigned char *)t5);
    t31 = (t10 == (unsigned char)2);
    t3 = t31;
    goto LAB60;

LAB61:    xsi_size_not_matching(8U, t15, 0);
    goto LAB62;

LAB63:    xsi_set_current_line(374, ng1);
    t1 = (t0 + 10344);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(377, ng1);
    t1 = (t0 + 6976U);
    std_textio_file_close(t1);
    goto LAB64;

}


extern void work_a_2963379440_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2963379440_3212880686_p_0,(void *)work_a_2963379440_3212880686_p_1,(void *)work_a_2963379440_3212880686_p_2,(void *)work_a_2963379440_3212880686_p_3,(void *)work_a_2963379440_3212880686_p_4};
	static char *se[] = {(void *)work_a_2963379440_3212880686_sub_17161299100477005907_3057020925,(void *)work_a_2963379440_3212880686_sub_17161299100477010263_3057020925};
	xsi_register_didat("work_a_2963379440_3212880686", "isim/test_source_isim_beh.exe.sim/work/a_2963379440_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
