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

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "H:/3. CUC/0. Docencia/1. S. Embebidos II/2. Programas/104.BIN8toBCD/BIN8toBCD/BIN8toBCD.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_2546454082_3965413181(char *, char *, char *, int );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_0093227576_3212880686_p_0(char *t0)
{
    char t13[16];
    char t18[16];
    char t20[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    int t11;
    int t12;
    char *t14;
    char *t15;
    int t16;
    unsigned char t17;
    char *t19;
    char *t21;
    char *t22;
    int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    int t32;

LAB0:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = (7 - 7);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 1808U);
    t7 = *((char **)t6);
    t8 = (11 - 2);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t6 = (t7 + t10);
    memcpy(t6, t1, 3U);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 5532);
    *((int *)t1) = 4;
    t2 = (t0 + 5536);
    *((int *)t2) = 0;
    t11 = 4;
    t12 = 0;

LAB2:    if (t11 >= t12)
        goto LAB3;

LAB5:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 1808U);
    t2 = *((char **)t1);
    t3 = (11 - 3);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 3192);
    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    t15 = (t14 + 56U);
    t19 = *((char **)t15);
    memcpy(t19, t1, 4U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(69, ng0);
    t1 = (t0 + 1808U);
    t2 = *((char **)t1);
    t3 = (11 - 7);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 3256);
    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    t15 = (t14 + 56U);
    t19 = *((char **)t15);
    memcpy(t19, t1, 4U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1808U);
    t2 = *((char **)t1);
    t3 = (11 - 11);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 3320);
    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    t15 = (t14 + 56U);
    t19 = *((char **)t15);
    memcpy(t19, t1, 4U);
    xsi_driver_first_trans_fast_port(t6);
    t1 = (t0 + 3112);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(52, ng0);
    t6 = (t0 + 1808U);
    t7 = *((char **)t6);
    t3 = (11 - 3);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t6 = (t7 + t5);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 3;
    t15 = (t14 + 4U);
    *((int *)t15) = 0;
    t15 = (t14 + 8U);
    *((int *)t15) = -1;
    t16 = (0 - 3);
    t8 = (t16 * -1);
    t8 = (t8 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t8;
    t17 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t6, t13, 4);
    if (t17 != 0)
        goto LAB6;

LAB8:
LAB7:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1808U);
    t2 = *((char **)t1);
    t3 = (11 - 7);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t13 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 7;
    t7 = (t6 + 4U);
    *((int *)t7) = 4;
    t7 = (t6 + 8U);
    *((int *)t7) = -1;
    t16 = (4 - 7);
    t8 = (t16 * -1);
    t8 = (t8 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t8;
    t17 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t1, t13, 4);
    if (t17 != 0)
        goto LAB9;

LAB11:
LAB10:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 1808U);
    t2 = *((char **)t1);
    t3 = (11 - 11);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t13 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 11;
    t7 = (t6 + 4U);
    *((int *)t7) = 8;
    t7 = (t6 + 8U);
    *((int *)t7) = -1;
    t16 = (8 - 11);
    t8 = (t16 * -1);
    t8 = (t8 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t8;
    t17 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t1, t13, 4);
    if (t17 != 0)
        goto LAB12;

LAB14:
LAB13:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1808U);
    t2 = *((char **)t1);
    t3 = (11 - 10);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = xsi_get_transient_memory(11U);
    memcpy(t6, t1, 11U);
    t7 = (t0 + 1808U);
    t14 = *((char **)t7);
    t8 = (11 - 11);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t7 = (t14 + t10);
    memcpy(t7, t6, 11U);
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5532);
    t16 = *((int *)t1);
    t23 = (t16 - 7);
    t3 = (t23 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, *((int *)t1));
    t4 = (1U * t3);
    t5 = (0 + t4);
    t6 = (t2 + t5);
    t17 = *((unsigned char *)t6);
    t7 = (t0 + 1808U);
    t14 = *((char **)t7);
    t32 = (0 - 11);
    t8 = (t32 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t7 = (t14 + t10);
    *((unsigned char *)t7) = t17;

LAB4:    t1 = (t0 + 5532);
    t11 = *((int *)t1);
    t2 = (t0 + 5536);
    t12 = *((int *)t2);
    if (t11 == t12)
        goto LAB5;

LAB15:    t16 = (t11 + -1);
    t11 = t16;
    t6 = (t0 + 5532);
    *((int *)t6) = t11;
    goto LAB2;

LAB6:    xsi_set_current_line(53, ng0);
    t15 = (t0 + 1808U);
    t19 = *((char **)t15);
    t8 = (11 - 3);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t15 = (t19 + t10);
    t21 = (t20 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 3;
    t22 = (t21 + 4U);
    *((int *)t22) = 0;
    t22 = (t21 + 8U);
    *((int *)t22) = -1;
    t23 = (0 - 3);
    t24 = (t23 * -1);
    t24 = (t24 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t24;
    t22 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t18, t15, t20, 3);
    t25 = (t0 + 1808U);
    t26 = *((char **)t25);
    t24 = (11 - 3);
    t27 = (t24 * 1U);
    t28 = (0 + t27);
    t25 = (t26 + t28);
    t29 = (t18 + 12U);
    t30 = *((unsigned int *)t29);
    t31 = (1U * t30);
    memcpy(t25, t22, t31);
    goto LAB7;

LAB9:    xsi_set_current_line(57, ng0);
    t7 = (t0 + 1808U);
    t14 = *((char **)t7);
    t8 = (11 - 7);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t7 = (t14 + t10);
    t15 = (t20 + 0U);
    t19 = (t15 + 0U);
    *((int *)t19) = 7;
    t19 = (t15 + 4U);
    *((int *)t19) = 4;
    t19 = (t15 + 8U);
    *((int *)t19) = -1;
    t23 = (4 - 7);
    t24 = (t23 * -1);
    t24 = (t24 + 1);
    t19 = (t15 + 12U);
    *((unsigned int *)t19) = t24;
    t19 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t18, t7, t20, 3);
    t21 = (t0 + 1808U);
    t22 = *((char **)t21);
    t24 = (11 - 7);
    t27 = (t24 * 1U);
    t28 = (0 + t27);
    t21 = (t22 + t28);
    t25 = (t18 + 12U);
    t30 = *((unsigned int *)t25);
    t31 = (1U * t30);
    memcpy(t21, t19, t31);
    goto LAB10;

LAB12:    xsi_set_current_line(61, ng0);
    t7 = (t0 + 1808U);
    t14 = *((char **)t7);
    t8 = (11 - 11);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t7 = (t14 + t10);
    t15 = (t20 + 0U);
    t19 = (t15 + 0U);
    *((int *)t19) = 11;
    t19 = (t15 + 4U);
    *((int *)t19) = 8;
    t19 = (t15 + 8U);
    *((int *)t19) = -1;
    t23 = (8 - 11);
    t24 = (t23 * -1);
    t24 = (t24 + 1);
    t19 = (t15 + 12U);
    *((unsigned int *)t19) = t24;
    t19 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t18, t7, t20, 3);
    t21 = (t0 + 1808U);
    t22 = *((char **)t21);
    t24 = (11 - 11);
    t27 = (t24 * 1U);
    t28 = (0 + t27);
    t21 = (t22 + t28);
    t25 = (t18 + 12U);
    t30 = *((unsigned int *)t25);
    t31 = (1U * t30);
    memcpy(t21, t19, t31);
    goto LAB13;

}


extern void work_a_0093227576_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0093227576_3212880686_p_0};
	xsi_register_didat("work_a_0093227576_3212880686", "isim/TestBench_isim_beh.exe.sim/work/a_0093227576_3212880686.didat");
	xsi_register_executes(pe);
}
