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

/* This file is designed for use with ISim build 0x1048c146 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/SEII/201.7SEG_Equals/Seg_Equals/Seg_Equals.vhd";
extern char *IEEE_P_2592010699;



static void work_a_0588597522_3212880686_p_0(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 592U);
    t4 = *((char **)t3);
    t3 = (t0 + 4221);
    t6 = ((IEEE_P_2592010699) + 2332);
    t7 = xsi_vhdl_greater(t6, t4, 4U, t3, 4U);
    if (t7 == 1)
        goto LAB8;

LAB9:    t8 = (t0 + 684U);
    t9 = *((char **)t8);
    t8 = (t0 + 4225);
    t11 = ((IEEE_P_2592010699) + 2332);
    t12 = xsi_vhdl_greater(t11, t9, 4U, t8, 4U);
    t2 = t12;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 776U);
    t14 = *((char **)t13);
    t13 = (t0 + 4229);
    t16 = ((IEEE_P_2592010699) + 2332);
    t17 = xsi_vhdl_greater(t16, t14, 4U, t13, 4U);
    t1 = t17;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB11:    t23 = (t0 + 2500);
    t24 = (t23 + 32U);
    t25 = *((char **)t24);
    t26 = (t25 + 40U);
    t27 = *((char **)t26);
    *((unsigned char *)t27) = (unsigned char)2;
    xsi_driver_first_trans_fast(t23);

LAB2:    t28 = (t0 + 2432);
    *((int *)t28) = 1;

LAB1:    return;
LAB3:    t18 = (t0 + 2500);
    t19 = (t18 + 32U);
    t20 = *((char **)t19);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)3;
    xsi_driver_first_trans_fast(t18);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB12:    goto LAB2;

}

static void work_a_0588597522_3212880686_p_1(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned char t19;
    char *t20;
    char *t21;
    unsigned char t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    unsigned char t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned char t37;
    char *t38;
    char *t39;
    unsigned char t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned char t47;
    unsigned char t48;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    unsigned char t55;
    char *t56;
    char *t57;
    unsigned char t59;
    unsigned int t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned char t65;
    unsigned char t66;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned char t73;
    char *t74;
    char *t75;
    unsigned char t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    unsigned char t83;
    unsigned char t84;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    unsigned char t91;
    char *t92;
    char *t93;
    unsigned char t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    unsigned char t101;
    unsigned char t102;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    unsigned char t109;
    char *t110;
    char *t111;
    unsigned char t113;
    unsigned int t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    unsigned char t119;
    unsigned char t120;
    char *t122;
    char *t123;
    char *t124;
    char *t125;
    char *t126;
    unsigned char t127;
    char *t128;
    char *t129;
    unsigned char t131;
    unsigned int t132;
    char *t133;
    char *t134;
    char *t135;
    char *t136;
    unsigned char t137;
    unsigned char t138;
    char *t140;
    char *t141;
    char *t142;
    char *t143;
    char *t144;
    unsigned char t145;
    char *t146;
    char *t147;
    unsigned char t149;
    unsigned int t150;
    char *t151;
    char *t152;
    char *t153;
    char *t154;
    unsigned char t155;
    unsigned char t156;
    char *t158;
    char *t159;
    char *t160;
    char *t161;
    char *t162;
    unsigned char t163;
    char *t164;
    char *t165;
    unsigned char t167;
    unsigned int t168;
    char *t169;
    char *t170;
    char *t171;
    char *t172;
    unsigned char t173;
    unsigned char t174;
    char *t176;
    char *t177;
    char *t178;
    char *t179;
    char *t180;
    char *t181;
    char *t183;
    char *t184;
    char *t185;
    char *t186;
    char *t187;
    char *t188;

LAB0:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 592U);
    t3 = *((char **)t2);
    t2 = (t0 + 4233);
    t5 = 1;
    if (4U == 4U)
        goto LAB8;

LAB9:    t5 = 0;

LAB10:    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t20 = (t0 + 592U);
    t21 = *((char **)t20);
    t20 = (t0 + 4244);
    t23 = 1;
    if (4U == 4U)
        goto LAB19;

LAB20:    t23 = 0;

LAB21:    if (t23 == 1)
        goto LAB16;

LAB17:    t19 = (unsigned char)0;

LAB18:    if (t19 != 0)
        goto LAB14;

LAB15:    t38 = (t0 + 592U);
    t39 = *((char **)t38);
    t38 = (t0 + 4255);
    t41 = 1;
    if (4U == 4U)
        goto LAB30;

LAB31:    t41 = 0;

LAB32:    if (t41 == 1)
        goto LAB27;

LAB28:    t37 = (unsigned char)0;

LAB29:    if (t37 != 0)
        goto LAB25;

LAB26:    t56 = (t0 + 592U);
    t57 = *((char **)t56);
    t56 = (t0 + 4266);
    t59 = 1;
    if (4U == 4U)
        goto LAB41;

LAB42:    t59 = 0;

LAB43:    if (t59 == 1)
        goto LAB38;

LAB39:    t55 = (unsigned char)0;

LAB40:    if (t55 != 0)
        goto LAB36;

LAB37:    t74 = (t0 + 592U);
    t75 = *((char **)t74);
    t74 = (t0 + 4277);
    t77 = 1;
    if (4U == 4U)
        goto LAB52;

LAB53:    t77 = 0;

LAB54:    if (t77 == 1)
        goto LAB49;

LAB50:    t73 = (unsigned char)0;

LAB51:    if (t73 != 0)
        goto LAB47;

LAB48:    t92 = (t0 + 592U);
    t93 = *((char **)t92);
    t92 = (t0 + 4288);
    t95 = 1;
    if (4U == 4U)
        goto LAB63;

LAB64:    t95 = 0;

LAB65:    if (t95 == 1)
        goto LAB60;

LAB61:    t91 = (unsigned char)0;

LAB62:    if (t91 != 0)
        goto LAB58;

LAB59:    t110 = (t0 + 592U);
    t111 = *((char **)t110);
    t110 = (t0 + 4299);
    t113 = 1;
    if (4U == 4U)
        goto LAB74;

LAB75:    t113 = 0;

LAB76:    if (t113 == 1)
        goto LAB71;

LAB72:    t109 = (unsigned char)0;

LAB73:    if (t109 != 0)
        goto LAB69;

LAB70:    t128 = (t0 + 592U);
    t129 = *((char **)t128);
    t128 = (t0 + 4310);
    t131 = 1;
    if (4U == 4U)
        goto LAB85;

LAB86:    t131 = 0;

LAB87:    if (t131 == 1)
        goto LAB82;

LAB83:    t127 = (unsigned char)0;

LAB84:    if (t127 != 0)
        goto LAB80;

LAB81:    t146 = (t0 + 592U);
    t147 = *((char **)t146);
    t146 = (t0 + 4321);
    t149 = 1;
    if (4U == 4U)
        goto LAB96;

LAB97:    t149 = 0;

LAB98:    if (t149 == 1)
        goto LAB93;

LAB94:    t145 = (unsigned char)0;

LAB95:    if (t145 != 0)
        goto LAB91;

LAB92:    t164 = (t0 + 592U);
    t165 = *((char **)t164);
    t164 = (t0 + 4332);
    t167 = 1;
    if (4U == 4U)
        goto LAB107;

LAB108:    t167 = 0;

LAB109:    if (t167 == 1)
        goto LAB104;

LAB105:    t163 = (unsigned char)0;

LAB106:    if (t163 != 0)
        goto LAB102;

LAB103:
LAB113:    t181 = (t0 + 4343);
    t183 = (t0 + 2536);
    t184 = (t183 + 32U);
    t185 = *((char **)t184);
    t186 = (t185 + 40U);
    t187 = *((char **)t186);
    memcpy(t187, t181, 7U);
    xsi_driver_first_trans_fast_port(t183);

LAB2:    t188 = (t0 + 2440);
    *((int *)t188) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 4237);
    t14 = (t0 + 2536);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 7U);
    xsi_driver_first_trans_fast_port(t14);
    goto LAB2;

LAB5:    t9 = (t0 + 1144U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)2);
    t1 = t12;
    goto LAB7;

LAB8:    t6 = 0;

LAB11:    if (t6 < 4U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t7 = (t3 + t6);
    t8 = (t2 + t6);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB9;

LAB13:    t6 = (t6 + 1);
    goto LAB11;

LAB14:    t27 = (t0 + 4248);
    t32 = (t0 + 2536);
    t33 = (t32 + 32U);
    t34 = *((char **)t33);
    t35 = (t34 + 40U);
    t36 = *((char **)t35);
    memcpy(t36, t27, 7U);
    xsi_driver_first_trans_fast_port(t32);
    goto LAB2;

LAB16:    t27 = (t0 + 1144U);
    t28 = *((char **)t27);
    t29 = *((unsigned char *)t28);
    t30 = (t29 == (unsigned char)2);
    t19 = t30;
    goto LAB18;

LAB19:    t24 = 0;

LAB22:    if (t24 < 4U)
        goto LAB23;
    else
        goto LAB21;

LAB23:    t25 = (t21 + t24);
    t26 = (t20 + t24);
    if (*((unsigned char *)t25) != *((unsigned char *)t26))
        goto LAB20;

LAB24:    t24 = (t24 + 1);
    goto LAB22;

LAB25:    t45 = (t0 + 4259);
    t50 = (t0 + 2536);
    t51 = (t50 + 32U);
    t52 = *((char **)t51);
    t53 = (t52 + 40U);
    t54 = *((char **)t53);
    memcpy(t54, t45, 7U);
    xsi_driver_first_trans_fast_port(t50);
    goto LAB2;

LAB27:    t45 = (t0 + 1144U);
    t46 = *((char **)t45);
    t47 = *((unsigned char *)t46);
    t48 = (t47 == (unsigned char)2);
    t37 = t48;
    goto LAB29;

LAB30:    t42 = 0;

LAB33:    if (t42 < 4U)
        goto LAB34;
    else
        goto LAB32;

LAB34:    t43 = (t39 + t42);
    t44 = (t38 + t42);
    if (*((unsigned char *)t43) != *((unsigned char *)t44))
        goto LAB31;

LAB35:    t42 = (t42 + 1);
    goto LAB33;

LAB36:    t63 = (t0 + 4270);
    t68 = (t0 + 2536);
    t69 = (t68 + 32U);
    t70 = *((char **)t69);
    t71 = (t70 + 40U);
    t72 = *((char **)t71);
    memcpy(t72, t63, 7U);
    xsi_driver_first_trans_fast_port(t68);
    goto LAB2;

LAB38:    t63 = (t0 + 1144U);
    t64 = *((char **)t63);
    t65 = *((unsigned char *)t64);
    t66 = (t65 == (unsigned char)2);
    t55 = t66;
    goto LAB40;

LAB41:    t60 = 0;

LAB44:    if (t60 < 4U)
        goto LAB45;
    else
        goto LAB43;

LAB45:    t61 = (t57 + t60);
    t62 = (t56 + t60);
    if (*((unsigned char *)t61) != *((unsigned char *)t62))
        goto LAB42;

LAB46:    t60 = (t60 + 1);
    goto LAB44;

LAB47:    t81 = (t0 + 4281);
    t86 = (t0 + 2536);
    t87 = (t86 + 32U);
    t88 = *((char **)t87);
    t89 = (t88 + 40U);
    t90 = *((char **)t89);
    memcpy(t90, t81, 7U);
    xsi_driver_first_trans_fast_port(t86);
    goto LAB2;

LAB49:    t81 = (t0 + 1144U);
    t82 = *((char **)t81);
    t83 = *((unsigned char *)t82);
    t84 = (t83 == (unsigned char)2);
    t73 = t84;
    goto LAB51;

LAB52:    t78 = 0;

LAB55:    if (t78 < 4U)
        goto LAB56;
    else
        goto LAB54;

LAB56:    t79 = (t75 + t78);
    t80 = (t74 + t78);
    if (*((unsigned char *)t79) != *((unsigned char *)t80))
        goto LAB53;

LAB57:    t78 = (t78 + 1);
    goto LAB55;

LAB58:    t99 = (t0 + 4292);
    t104 = (t0 + 2536);
    t105 = (t104 + 32U);
    t106 = *((char **)t105);
    t107 = (t106 + 40U);
    t108 = *((char **)t107);
    memcpy(t108, t99, 7U);
    xsi_driver_first_trans_fast_port(t104);
    goto LAB2;

LAB60:    t99 = (t0 + 1144U);
    t100 = *((char **)t99);
    t101 = *((unsigned char *)t100);
    t102 = (t101 == (unsigned char)2);
    t91 = t102;
    goto LAB62;

LAB63:    t96 = 0;

LAB66:    if (t96 < 4U)
        goto LAB67;
    else
        goto LAB65;

LAB67:    t97 = (t93 + t96);
    t98 = (t92 + t96);
    if (*((unsigned char *)t97) != *((unsigned char *)t98))
        goto LAB64;

LAB68:    t96 = (t96 + 1);
    goto LAB66;

LAB69:    t117 = (t0 + 4303);
    t122 = (t0 + 2536);
    t123 = (t122 + 32U);
    t124 = *((char **)t123);
    t125 = (t124 + 40U);
    t126 = *((char **)t125);
    memcpy(t126, t117, 7U);
    xsi_driver_first_trans_fast_port(t122);
    goto LAB2;

LAB71:    t117 = (t0 + 1144U);
    t118 = *((char **)t117);
    t119 = *((unsigned char *)t118);
    t120 = (t119 == (unsigned char)2);
    t109 = t120;
    goto LAB73;

LAB74:    t114 = 0;

LAB77:    if (t114 < 4U)
        goto LAB78;
    else
        goto LAB76;

LAB78:    t115 = (t111 + t114);
    t116 = (t110 + t114);
    if (*((unsigned char *)t115) != *((unsigned char *)t116))
        goto LAB75;

LAB79:    t114 = (t114 + 1);
    goto LAB77;

LAB80:    t135 = (t0 + 4314);
    t140 = (t0 + 2536);
    t141 = (t140 + 32U);
    t142 = *((char **)t141);
    t143 = (t142 + 40U);
    t144 = *((char **)t143);
    memcpy(t144, t135, 7U);
    xsi_driver_first_trans_fast_port(t140);
    goto LAB2;

LAB82:    t135 = (t0 + 1144U);
    t136 = *((char **)t135);
    t137 = *((unsigned char *)t136);
    t138 = (t137 == (unsigned char)2);
    t127 = t138;
    goto LAB84;

LAB85:    t132 = 0;

LAB88:    if (t132 < 4U)
        goto LAB89;
    else
        goto LAB87;

LAB89:    t133 = (t129 + t132);
    t134 = (t128 + t132);
    if (*((unsigned char *)t133) != *((unsigned char *)t134))
        goto LAB86;

LAB90:    t132 = (t132 + 1);
    goto LAB88;

LAB91:    t153 = (t0 + 4325);
    t158 = (t0 + 2536);
    t159 = (t158 + 32U);
    t160 = *((char **)t159);
    t161 = (t160 + 40U);
    t162 = *((char **)t161);
    memcpy(t162, t153, 7U);
    xsi_driver_first_trans_fast_port(t158);
    goto LAB2;

LAB93:    t153 = (t0 + 1144U);
    t154 = *((char **)t153);
    t155 = *((unsigned char *)t154);
    t156 = (t155 == (unsigned char)2);
    t145 = t156;
    goto LAB95;

LAB96:    t150 = 0;

LAB99:    if (t150 < 4U)
        goto LAB100;
    else
        goto LAB98;

LAB100:    t151 = (t147 + t150);
    t152 = (t146 + t150);
    if (*((unsigned char *)t151) != *((unsigned char *)t152))
        goto LAB97;

LAB101:    t150 = (t150 + 1);
    goto LAB99;

LAB102:    t171 = (t0 + 4336);
    t176 = (t0 + 2536);
    t177 = (t176 + 32U);
    t178 = *((char **)t177);
    t179 = (t178 + 40U);
    t180 = *((char **)t179);
    memcpy(t180, t171, 7U);
    xsi_driver_first_trans_fast_port(t176);
    goto LAB2;

LAB104:    t171 = (t0 + 1144U);
    t172 = *((char **)t171);
    t173 = *((unsigned char *)t172);
    t174 = (t173 == (unsigned char)2);
    t163 = t174;
    goto LAB106;

LAB107:    t168 = 0;

LAB110:    if (t168 < 4U)
        goto LAB111;
    else
        goto LAB109;

LAB111:    t169 = (t165 + t168);
    t170 = (t164 + t168);
    if (*((unsigned char *)t169) != *((unsigned char *)t170))
        goto LAB108;

LAB112:    t168 = (t168 + 1);
    goto LAB110;

LAB114:    goto LAB2;

}

static void work_a_0588597522_3212880686_p_2(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned char t19;
    char *t20;
    char *t21;
    unsigned char t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    unsigned char t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned char t37;
    char *t38;
    char *t39;
    unsigned char t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned char t47;
    unsigned char t48;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    unsigned char t55;
    char *t56;
    char *t57;
    unsigned char t59;
    unsigned int t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned char t65;
    unsigned char t66;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned char t73;
    char *t74;
    char *t75;
    unsigned char t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    unsigned char t83;
    unsigned char t84;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    unsigned char t91;
    char *t92;
    char *t93;
    unsigned char t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    unsigned char t101;
    unsigned char t102;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    unsigned char t109;
    char *t110;
    char *t111;
    unsigned char t113;
    unsigned int t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    unsigned char t119;
    unsigned char t120;
    char *t122;
    char *t123;
    char *t124;
    char *t125;
    char *t126;
    unsigned char t127;
    char *t128;
    char *t129;
    unsigned char t131;
    unsigned int t132;
    char *t133;
    char *t134;
    char *t135;
    char *t136;
    unsigned char t137;
    unsigned char t138;
    char *t140;
    char *t141;
    char *t142;
    char *t143;
    char *t144;
    unsigned char t145;
    char *t146;
    char *t147;
    unsigned char t149;
    unsigned int t150;
    char *t151;
    char *t152;
    char *t153;
    char *t154;
    unsigned char t155;
    unsigned char t156;
    char *t158;
    char *t159;
    char *t160;
    char *t161;
    char *t162;
    unsigned char t163;
    char *t164;
    char *t165;
    unsigned char t167;
    unsigned int t168;
    char *t169;
    char *t170;
    char *t171;
    char *t172;
    unsigned char t173;
    unsigned char t174;
    char *t176;
    char *t177;
    char *t178;
    char *t179;
    char *t180;
    char *t181;
    char *t183;
    char *t184;
    char *t185;
    char *t186;
    char *t187;
    char *t188;

LAB0:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 684U);
    t3 = *((char **)t2);
    t2 = (t0 + 4350);
    t5 = 1;
    if (4U == 4U)
        goto LAB8;

LAB9:    t5 = 0;

LAB10:    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t20 = (t0 + 684U);
    t21 = *((char **)t20);
    t20 = (t0 + 4361);
    t23 = 1;
    if (4U == 4U)
        goto LAB19;

LAB20:    t23 = 0;

LAB21:    if (t23 == 1)
        goto LAB16;

LAB17:    t19 = (unsigned char)0;

LAB18:    if (t19 != 0)
        goto LAB14;

LAB15:    t38 = (t0 + 684U);
    t39 = *((char **)t38);
    t38 = (t0 + 4372);
    t41 = 1;
    if (4U == 4U)
        goto LAB30;

LAB31:    t41 = 0;

LAB32:    if (t41 == 1)
        goto LAB27;

LAB28:    t37 = (unsigned char)0;

LAB29:    if (t37 != 0)
        goto LAB25;

LAB26:    t56 = (t0 + 684U);
    t57 = *((char **)t56);
    t56 = (t0 + 4383);
    t59 = 1;
    if (4U == 4U)
        goto LAB41;

LAB42:    t59 = 0;

LAB43:    if (t59 == 1)
        goto LAB38;

LAB39:    t55 = (unsigned char)0;

LAB40:    if (t55 != 0)
        goto LAB36;

LAB37:    t74 = (t0 + 684U);
    t75 = *((char **)t74);
    t74 = (t0 + 4394);
    t77 = 1;
    if (4U == 4U)
        goto LAB52;

LAB53:    t77 = 0;

LAB54:    if (t77 == 1)
        goto LAB49;

LAB50:    t73 = (unsigned char)0;

LAB51:    if (t73 != 0)
        goto LAB47;

LAB48:    t92 = (t0 + 684U);
    t93 = *((char **)t92);
    t92 = (t0 + 4405);
    t95 = 1;
    if (4U == 4U)
        goto LAB63;

LAB64:    t95 = 0;

LAB65:    if (t95 == 1)
        goto LAB60;

LAB61:    t91 = (unsigned char)0;

LAB62:    if (t91 != 0)
        goto LAB58;

LAB59:    t110 = (t0 + 684U);
    t111 = *((char **)t110);
    t110 = (t0 + 4416);
    t113 = 1;
    if (4U == 4U)
        goto LAB74;

LAB75:    t113 = 0;

LAB76:    if (t113 == 1)
        goto LAB71;

LAB72:    t109 = (unsigned char)0;

LAB73:    if (t109 != 0)
        goto LAB69;

LAB70:    t128 = (t0 + 684U);
    t129 = *((char **)t128);
    t128 = (t0 + 4427);
    t131 = 1;
    if (4U == 4U)
        goto LAB85;

LAB86:    t131 = 0;

LAB87:    if (t131 == 1)
        goto LAB82;

LAB83:    t127 = (unsigned char)0;

LAB84:    if (t127 != 0)
        goto LAB80;

LAB81:    t146 = (t0 + 684U);
    t147 = *((char **)t146);
    t146 = (t0 + 4438);
    t149 = 1;
    if (4U == 4U)
        goto LAB96;

LAB97:    t149 = 0;

LAB98:    if (t149 == 1)
        goto LAB93;

LAB94:    t145 = (unsigned char)0;

LAB95:    if (t145 != 0)
        goto LAB91;

LAB92:    t164 = (t0 + 684U);
    t165 = *((char **)t164);
    t164 = (t0 + 4449);
    t167 = 1;
    if (4U == 4U)
        goto LAB107;

LAB108:    t167 = 0;

LAB109:    if (t167 == 1)
        goto LAB104;

LAB105:    t163 = (unsigned char)0;

LAB106:    if (t163 != 0)
        goto LAB102;

LAB103:
LAB113:    t181 = (t0 + 4460);
    t183 = (t0 + 2572);
    t184 = (t183 + 32U);
    t185 = *((char **)t184);
    t186 = (t185 + 40U);
    t187 = *((char **)t186);
    memcpy(t187, t181, 7U);
    xsi_driver_first_trans_fast_port(t183);

LAB2:    t188 = (t0 + 2448);
    *((int *)t188) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 4354);
    t14 = (t0 + 2572);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 7U);
    xsi_driver_first_trans_fast_port(t14);
    goto LAB2;

LAB5:    t9 = (t0 + 1144U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)2);
    t1 = t12;
    goto LAB7;

LAB8:    t6 = 0;

LAB11:    if (t6 < 4U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t7 = (t3 + t6);
    t8 = (t2 + t6);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB9;

LAB13:    t6 = (t6 + 1);
    goto LAB11;

LAB14:    t27 = (t0 + 4365);
    t32 = (t0 + 2572);
    t33 = (t32 + 32U);
    t34 = *((char **)t33);
    t35 = (t34 + 40U);
    t36 = *((char **)t35);
    memcpy(t36, t27, 7U);
    xsi_driver_first_trans_fast_port(t32);
    goto LAB2;

LAB16:    t27 = (t0 + 1144U);
    t28 = *((char **)t27);
    t29 = *((unsigned char *)t28);
    t30 = (t29 == (unsigned char)2);
    t19 = t30;
    goto LAB18;

LAB19:    t24 = 0;

LAB22:    if (t24 < 4U)
        goto LAB23;
    else
        goto LAB21;

LAB23:    t25 = (t21 + t24);
    t26 = (t20 + t24);
    if (*((unsigned char *)t25) != *((unsigned char *)t26))
        goto LAB20;

LAB24:    t24 = (t24 + 1);
    goto LAB22;

LAB25:    t45 = (t0 + 4376);
    t50 = (t0 + 2572);
    t51 = (t50 + 32U);
    t52 = *((char **)t51);
    t53 = (t52 + 40U);
    t54 = *((char **)t53);
    memcpy(t54, t45, 7U);
    xsi_driver_first_trans_fast_port(t50);
    goto LAB2;

LAB27:    t45 = (t0 + 1144U);
    t46 = *((char **)t45);
    t47 = *((unsigned char *)t46);
    t48 = (t47 == (unsigned char)2);
    t37 = t48;
    goto LAB29;

LAB30:    t42 = 0;

LAB33:    if (t42 < 4U)
        goto LAB34;
    else
        goto LAB32;

LAB34:    t43 = (t39 + t42);
    t44 = (t38 + t42);
    if (*((unsigned char *)t43) != *((unsigned char *)t44))
        goto LAB31;

LAB35:    t42 = (t42 + 1);
    goto LAB33;

LAB36:    t63 = (t0 + 4387);
    t68 = (t0 + 2572);
    t69 = (t68 + 32U);
    t70 = *((char **)t69);
    t71 = (t70 + 40U);
    t72 = *((char **)t71);
    memcpy(t72, t63, 7U);
    xsi_driver_first_trans_fast_port(t68);
    goto LAB2;

LAB38:    t63 = (t0 + 1144U);
    t64 = *((char **)t63);
    t65 = *((unsigned char *)t64);
    t66 = (t65 == (unsigned char)2);
    t55 = t66;
    goto LAB40;

LAB41:    t60 = 0;

LAB44:    if (t60 < 4U)
        goto LAB45;
    else
        goto LAB43;

LAB45:    t61 = (t57 + t60);
    t62 = (t56 + t60);
    if (*((unsigned char *)t61) != *((unsigned char *)t62))
        goto LAB42;

LAB46:    t60 = (t60 + 1);
    goto LAB44;

LAB47:    t81 = (t0 + 4398);
    t86 = (t0 + 2572);
    t87 = (t86 + 32U);
    t88 = *((char **)t87);
    t89 = (t88 + 40U);
    t90 = *((char **)t89);
    memcpy(t90, t81, 7U);
    xsi_driver_first_trans_fast_port(t86);
    goto LAB2;

LAB49:    t81 = (t0 + 1144U);
    t82 = *((char **)t81);
    t83 = *((unsigned char *)t82);
    t84 = (t83 == (unsigned char)2);
    t73 = t84;
    goto LAB51;

LAB52:    t78 = 0;

LAB55:    if (t78 < 4U)
        goto LAB56;
    else
        goto LAB54;

LAB56:    t79 = (t75 + t78);
    t80 = (t74 + t78);
    if (*((unsigned char *)t79) != *((unsigned char *)t80))
        goto LAB53;

LAB57:    t78 = (t78 + 1);
    goto LAB55;

LAB58:    t99 = (t0 + 4409);
    t104 = (t0 + 2572);
    t105 = (t104 + 32U);
    t106 = *((char **)t105);
    t107 = (t106 + 40U);
    t108 = *((char **)t107);
    memcpy(t108, t99, 7U);
    xsi_driver_first_trans_fast_port(t104);
    goto LAB2;

LAB60:    t99 = (t0 + 1144U);
    t100 = *((char **)t99);
    t101 = *((unsigned char *)t100);
    t102 = (t101 == (unsigned char)2);
    t91 = t102;
    goto LAB62;

LAB63:    t96 = 0;

LAB66:    if (t96 < 4U)
        goto LAB67;
    else
        goto LAB65;

LAB67:    t97 = (t93 + t96);
    t98 = (t92 + t96);
    if (*((unsigned char *)t97) != *((unsigned char *)t98))
        goto LAB64;

LAB68:    t96 = (t96 + 1);
    goto LAB66;

LAB69:    t117 = (t0 + 4420);
    t122 = (t0 + 2572);
    t123 = (t122 + 32U);
    t124 = *((char **)t123);
    t125 = (t124 + 40U);
    t126 = *((char **)t125);
    memcpy(t126, t117, 7U);
    xsi_driver_first_trans_fast_port(t122);
    goto LAB2;

LAB71:    t117 = (t0 + 1144U);
    t118 = *((char **)t117);
    t119 = *((unsigned char *)t118);
    t120 = (t119 == (unsigned char)2);
    t109 = t120;
    goto LAB73;

LAB74:    t114 = 0;

LAB77:    if (t114 < 4U)
        goto LAB78;
    else
        goto LAB76;

LAB78:    t115 = (t111 + t114);
    t116 = (t110 + t114);
    if (*((unsigned char *)t115) != *((unsigned char *)t116))
        goto LAB75;

LAB79:    t114 = (t114 + 1);
    goto LAB77;

LAB80:    t135 = (t0 + 4431);
    t140 = (t0 + 2572);
    t141 = (t140 + 32U);
    t142 = *((char **)t141);
    t143 = (t142 + 40U);
    t144 = *((char **)t143);
    memcpy(t144, t135, 7U);
    xsi_driver_first_trans_fast_port(t140);
    goto LAB2;

LAB82:    t135 = (t0 + 1144U);
    t136 = *((char **)t135);
    t137 = *((unsigned char *)t136);
    t138 = (t137 == (unsigned char)2);
    t127 = t138;
    goto LAB84;

LAB85:    t132 = 0;

LAB88:    if (t132 < 4U)
        goto LAB89;
    else
        goto LAB87;

LAB89:    t133 = (t129 + t132);
    t134 = (t128 + t132);
    if (*((unsigned char *)t133) != *((unsigned char *)t134))
        goto LAB86;

LAB90:    t132 = (t132 + 1);
    goto LAB88;

LAB91:    t153 = (t0 + 4442);
    t158 = (t0 + 2572);
    t159 = (t158 + 32U);
    t160 = *((char **)t159);
    t161 = (t160 + 40U);
    t162 = *((char **)t161);
    memcpy(t162, t153, 7U);
    xsi_driver_first_trans_fast_port(t158);
    goto LAB2;

LAB93:    t153 = (t0 + 1144U);
    t154 = *((char **)t153);
    t155 = *((unsigned char *)t154);
    t156 = (t155 == (unsigned char)2);
    t145 = t156;
    goto LAB95;

LAB96:    t150 = 0;

LAB99:    if (t150 < 4U)
        goto LAB100;
    else
        goto LAB98;

LAB100:    t151 = (t147 + t150);
    t152 = (t146 + t150);
    if (*((unsigned char *)t151) != *((unsigned char *)t152))
        goto LAB97;

LAB101:    t150 = (t150 + 1);
    goto LAB99;

LAB102:    t171 = (t0 + 4453);
    t176 = (t0 + 2572);
    t177 = (t176 + 32U);
    t178 = *((char **)t177);
    t179 = (t178 + 40U);
    t180 = *((char **)t179);
    memcpy(t180, t171, 7U);
    xsi_driver_first_trans_fast_port(t176);
    goto LAB2;

LAB104:    t171 = (t0 + 1144U);
    t172 = *((char **)t171);
    t173 = *((unsigned char *)t172);
    t174 = (t173 == (unsigned char)2);
    t163 = t174;
    goto LAB106;

LAB107:    t168 = 0;

LAB110:    if (t168 < 4U)
        goto LAB111;
    else
        goto LAB109;

LAB111:    t169 = (t165 + t168);
    t170 = (t164 + t168);
    if (*((unsigned char *)t169) != *((unsigned char *)t170))
        goto LAB108;

LAB112:    t168 = (t168 + 1);
    goto LAB110;

LAB114:    goto LAB2;

}

static void work_a_0588597522_3212880686_p_3(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned char t19;
    char *t20;
    char *t21;
    unsigned char t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    unsigned char t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned char t37;
    char *t38;
    char *t39;
    unsigned char t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned char t47;
    unsigned char t48;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    unsigned char t55;
    char *t56;
    char *t57;
    unsigned char t59;
    unsigned int t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned char t65;
    unsigned char t66;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned char t73;
    char *t74;
    char *t75;
    unsigned char t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    unsigned char t83;
    unsigned char t84;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    unsigned char t91;
    char *t92;
    char *t93;
    unsigned char t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    unsigned char t101;
    unsigned char t102;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    unsigned char t109;
    char *t110;
    char *t111;
    unsigned char t113;
    unsigned int t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    unsigned char t119;
    unsigned char t120;
    char *t122;
    char *t123;
    char *t124;
    char *t125;
    char *t126;
    unsigned char t127;
    char *t128;
    char *t129;
    unsigned char t131;
    unsigned int t132;
    char *t133;
    char *t134;
    char *t135;
    char *t136;
    unsigned char t137;
    unsigned char t138;
    char *t140;
    char *t141;
    char *t142;
    char *t143;
    char *t144;
    unsigned char t145;
    char *t146;
    char *t147;
    unsigned char t149;
    unsigned int t150;
    char *t151;
    char *t152;
    char *t153;
    char *t154;
    unsigned char t155;
    unsigned char t156;
    char *t158;
    char *t159;
    char *t160;
    char *t161;
    char *t162;
    unsigned char t163;
    char *t164;
    char *t165;
    unsigned char t167;
    unsigned int t168;
    char *t169;
    char *t170;
    char *t171;
    char *t172;
    unsigned char t173;
    unsigned char t174;
    char *t176;
    char *t177;
    char *t178;
    char *t179;
    char *t180;
    char *t181;
    char *t183;
    char *t184;
    char *t185;
    char *t186;
    char *t187;
    char *t188;

LAB0:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 776U);
    t3 = *((char **)t2);
    t2 = (t0 + 4467);
    t5 = 1;
    if (4U == 4U)
        goto LAB8;

LAB9:    t5 = 0;

LAB10:    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t20 = (t0 + 776U);
    t21 = *((char **)t20);
    t20 = (t0 + 4478);
    t23 = 1;
    if (4U == 4U)
        goto LAB19;

LAB20:    t23 = 0;

LAB21:    if (t23 == 1)
        goto LAB16;

LAB17:    t19 = (unsigned char)0;

LAB18:    if (t19 != 0)
        goto LAB14;

LAB15:    t38 = (t0 + 776U);
    t39 = *((char **)t38);
    t38 = (t0 + 4489);
    t41 = 1;
    if (4U == 4U)
        goto LAB30;

LAB31:    t41 = 0;

LAB32:    if (t41 == 1)
        goto LAB27;

LAB28:    t37 = (unsigned char)0;

LAB29:    if (t37 != 0)
        goto LAB25;

LAB26:    t56 = (t0 + 776U);
    t57 = *((char **)t56);
    t56 = (t0 + 4500);
    t59 = 1;
    if (4U == 4U)
        goto LAB41;

LAB42:    t59 = 0;

LAB43:    if (t59 == 1)
        goto LAB38;

LAB39:    t55 = (unsigned char)0;

LAB40:    if (t55 != 0)
        goto LAB36;

LAB37:    t74 = (t0 + 776U);
    t75 = *((char **)t74);
    t74 = (t0 + 4511);
    t77 = 1;
    if (4U == 4U)
        goto LAB52;

LAB53:    t77 = 0;

LAB54:    if (t77 == 1)
        goto LAB49;

LAB50:    t73 = (unsigned char)0;

LAB51:    if (t73 != 0)
        goto LAB47;

LAB48:    t92 = (t0 + 776U);
    t93 = *((char **)t92);
    t92 = (t0 + 4522);
    t95 = 1;
    if (4U == 4U)
        goto LAB63;

LAB64:    t95 = 0;

LAB65:    if (t95 == 1)
        goto LAB60;

LAB61:    t91 = (unsigned char)0;

LAB62:    if (t91 != 0)
        goto LAB58;

LAB59:    t110 = (t0 + 776U);
    t111 = *((char **)t110);
    t110 = (t0 + 4533);
    t113 = 1;
    if (4U == 4U)
        goto LAB74;

LAB75:    t113 = 0;

LAB76:    if (t113 == 1)
        goto LAB71;

LAB72:    t109 = (unsigned char)0;

LAB73:    if (t109 != 0)
        goto LAB69;

LAB70:    t128 = (t0 + 776U);
    t129 = *((char **)t128);
    t128 = (t0 + 4544);
    t131 = 1;
    if (4U == 4U)
        goto LAB85;

LAB86:    t131 = 0;

LAB87:    if (t131 == 1)
        goto LAB82;

LAB83:    t127 = (unsigned char)0;

LAB84:    if (t127 != 0)
        goto LAB80;

LAB81:    t146 = (t0 + 776U);
    t147 = *((char **)t146);
    t146 = (t0 + 4555);
    t149 = 1;
    if (4U == 4U)
        goto LAB96;

LAB97:    t149 = 0;

LAB98:    if (t149 == 1)
        goto LAB93;

LAB94:    t145 = (unsigned char)0;

LAB95:    if (t145 != 0)
        goto LAB91;

LAB92:    t164 = (t0 + 776U);
    t165 = *((char **)t164);
    t164 = (t0 + 4566);
    t167 = 1;
    if (4U == 4U)
        goto LAB107;

LAB108:    t167 = 0;

LAB109:    if (t167 == 1)
        goto LAB104;

LAB105:    t163 = (unsigned char)0;

LAB106:    if (t163 != 0)
        goto LAB102;

LAB103:
LAB113:    t181 = (t0 + 4577);
    t183 = (t0 + 2608);
    t184 = (t183 + 32U);
    t185 = *((char **)t184);
    t186 = (t185 + 40U);
    t187 = *((char **)t186);
    memcpy(t187, t181, 7U);
    xsi_driver_first_trans_fast_port(t183);

LAB2:    t188 = (t0 + 2456);
    *((int *)t188) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 4471);
    t14 = (t0 + 2608);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 7U);
    xsi_driver_first_trans_fast_port(t14);
    goto LAB2;

LAB5:    t9 = (t0 + 1144U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)2);
    t1 = t12;
    goto LAB7;

LAB8:    t6 = 0;

LAB11:    if (t6 < 4U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t7 = (t3 + t6);
    t8 = (t2 + t6);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB9;

LAB13:    t6 = (t6 + 1);
    goto LAB11;

LAB14:    t27 = (t0 + 4482);
    t32 = (t0 + 2608);
    t33 = (t32 + 32U);
    t34 = *((char **)t33);
    t35 = (t34 + 40U);
    t36 = *((char **)t35);
    memcpy(t36, t27, 7U);
    xsi_driver_first_trans_fast_port(t32);
    goto LAB2;

LAB16:    t27 = (t0 + 1144U);
    t28 = *((char **)t27);
    t29 = *((unsigned char *)t28);
    t30 = (t29 == (unsigned char)2);
    t19 = t30;
    goto LAB18;

LAB19:    t24 = 0;

LAB22:    if (t24 < 4U)
        goto LAB23;
    else
        goto LAB21;

LAB23:    t25 = (t21 + t24);
    t26 = (t20 + t24);
    if (*((unsigned char *)t25) != *((unsigned char *)t26))
        goto LAB20;

LAB24:    t24 = (t24 + 1);
    goto LAB22;

LAB25:    t45 = (t0 + 4493);
    t50 = (t0 + 2608);
    t51 = (t50 + 32U);
    t52 = *((char **)t51);
    t53 = (t52 + 40U);
    t54 = *((char **)t53);
    memcpy(t54, t45, 7U);
    xsi_driver_first_trans_fast_port(t50);
    goto LAB2;

LAB27:    t45 = (t0 + 1144U);
    t46 = *((char **)t45);
    t47 = *((unsigned char *)t46);
    t48 = (t47 == (unsigned char)2);
    t37 = t48;
    goto LAB29;

LAB30:    t42 = 0;

LAB33:    if (t42 < 4U)
        goto LAB34;
    else
        goto LAB32;

LAB34:    t43 = (t39 + t42);
    t44 = (t38 + t42);
    if (*((unsigned char *)t43) != *((unsigned char *)t44))
        goto LAB31;

LAB35:    t42 = (t42 + 1);
    goto LAB33;

LAB36:    t63 = (t0 + 4504);
    t68 = (t0 + 2608);
    t69 = (t68 + 32U);
    t70 = *((char **)t69);
    t71 = (t70 + 40U);
    t72 = *((char **)t71);
    memcpy(t72, t63, 7U);
    xsi_driver_first_trans_fast_port(t68);
    goto LAB2;

LAB38:    t63 = (t0 + 1144U);
    t64 = *((char **)t63);
    t65 = *((unsigned char *)t64);
    t66 = (t65 == (unsigned char)2);
    t55 = t66;
    goto LAB40;

LAB41:    t60 = 0;

LAB44:    if (t60 < 4U)
        goto LAB45;
    else
        goto LAB43;

LAB45:    t61 = (t57 + t60);
    t62 = (t56 + t60);
    if (*((unsigned char *)t61) != *((unsigned char *)t62))
        goto LAB42;

LAB46:    t60 = (t60 + 1);
    goto LAB44;

LAB47:    t81 = (t0 + 4515);
    t86 = (t0 + 2608);
    t87 = (t86 + 32U);
    t88 = *((char **)t87);
    t89 = (t88 + 40U);
    t90 = *((char **)t89);
    memcpy(t90, t81, 7U);
    xsi_driver_first_trans_fast_port(t86);
    goto LAB2;

LAB49:    t81 = (t0 + 1144U);
    t82 = *((char **)t81);
    t83 = *((unsigned char *)t82);
    t84 = (t83 == (unsigned char)2);
    t73 = t84;
    goto LAB51;

LAB52:    t78 = 0;

LAB55:    if (t78 < 4U)
        goto LAB56;
    else
        goto LAB54;

LAB56:    t79 = (t75 + t78);
    t80 = (t74 + t78);
    if (*((unsigned char *)t79) != *((unsigned char *)t80))
        goto LAB53;

LAB57:    t78 = (t78 + 1);
    goto LAB55;

LAB58:    t99 = (t0 + 4526);
    t104 = (t0 + 2608);
    t105 = (t104 + 32U);
    t106 = *((char **)t105);
    t107 = (t106 + 40U);
    t108 = *((char **)t107);
    memcpy(t108, t99, 7U);
    xsi_driver_first_trans_fast_port(t104);
    goto LAB2;

LAB60:    t99 = (t0 + 1144U);
    t100 = *((char **)t99);
    t101 = *((unsigned char *)t100);
    t102 = (t101 == (unsigned char)2);
    t91 = t102;
    goto LAB62;

LAB63:    t96 = 0;

LAB66:    if (t96 < 4U)
        goto LAB67;
    else
        goto LAB65;

LAB67:    t97 = (t93 + t96);
    t98 = (t92 + t96);
    if (*((unsigned char *)t97) != *((unsigned char *)t98))
        goto LAB64;

LAB68:    t96 = (t96 + 1);
    goto LAB66;

LAB69:    t117 = (t0 + 4537);
    t122 = (t0 + 2608);
    t123 = (t122 + 32U);
    t124 = *((char **)t123);
    t125 = (t124 + 40U);
    t126 = *((char **)t125);
    memcpy(t126, t117, 7U);
    xsi_driver_first_trans_fast_port(t122);
    goto LAB2;

LAB71:    t117 = (t0 + 1144U);
    t118 = *((char **)t117);
    t119 = *((unsigned char *)t118);
    t120 = (t119 == (unsigned char)2);
    t109 = t120;
    goto LAB73;

LAB74:    t114 = 0;

LAB77:    if (t114 < 4U)
        goto LAB78;
    else
        goto LAB76;

LAB78:    t115 = (t111 + t114);
    t116 = (t110 + t114);
    if (*((unsigned char *)t115) != *((unsigned char *)t116))
        goto LAB75;

LAB79:    t114 = (t114 + 1);
    goto LAB77;

LAB80:    t135 = (t0 + 4548);
    t140 = (t0 + 2608);
    t141 = (t140 + 32U);
    t142 = *((char **)t141);
    t143 = (t142 + 40U);
    t144 = *((char **)t143);
    memcpy(t144, t135, 7U);
    xsi_driver_first_trans_fast_port(t140);
    goto LAB2;

LAB82:    t135 = (t0 + 1144U);
    t136 = *((char **)t135);
    t137 = *((unsigned char *)t136);
    t138 = (t137 == (unsigned char)2);
    t127 = t138;
    goto LAB84;

LAB85:    t132 = 0;

LAB88:    if (t132 < 4U)
        goto LAB89;
    else
        goto LAB87;

LAB89:    t133 = (t129 + t132);
    t134 = (t128 + t132);
    if (*((unsigned char *)t133) != *((unsigned char *)t134))
        goto LAB86;

LAB90:    t132 = (t132 + 1);
    goto LAB88;

LAB91:    t153 = (t0 + 4559);
    t158 = (t0 + 2608);
    t159 = (t158 + 32U);
    t160 = *((char **)t159);
    t161 = (t160 + 40U);
    t162 = *((char **)t161);
    memcpy(t162, t153, 7U);
    xsi_driver_first_trans_fast_port(t158);
    goto LAB2;

LAB93:    t153 = (t0 + 1144U);
    t154 = *((char **)t153);
    t155 = *((unsigned char *)t154);
    t156 = (t155 == (unsigned char)2);
    t145 = t156;
    goto LAB95;

LAB96:    t150 = 0;

LAB99:    if (t150 < 4U)
        goto LAB100;
    else
        goto LAB98;

LAB100:    t151 = (t147 + t150);
    t152 = (t146 + t150);
    if (*((unsigned char *)t151) != *((unsigned char *)t152))
        goto LAB97;

LAB101:    t150 = (t150 + 1);
    goto LAB99;

LAB102:    t171 = (t0 + 4570);
    t176 = (t0 + 2608);
    t177 = (t176 + 32U);
    t178 = *((char **)t177);
    t179 = (t178 + 40U);
    t180 = *((char **)t179);
    memcpy(t180, t171, 7U);
    xsi_driver_first_trans_fast_port(t176);
    goto LAB2;

LAB104:    t171 = (t0 + 1144U);
    t172 = *((char **)t171);
    t173 = *((unsigned char *)t172);
    t174 = (t173 == (unsigned char)2);
    t163 = t174;
    goto LAB106;

LAB107:    t168 = 0;

LAB110:    if (t168 < 4U)
        goto LAB111;
    else
        goto LAB109;

LAB111:    t169 = (t165 + t168);
    t170 = (t164 + t168);
    if (*((unsigned char *)t169) != *((unsigned char *)t170))
        goto LAB108;

LAB112:    t168 = (t168 + 1);
    goto LAB110;

LAB114:    goto LAB2;

}


extern void work_a_0588597522_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0588597522_3212880686_p_0,(void *)work_a_0588597522_3212880686_p_1,(void *)work_a_0588597522_3212880686_p_2,(void *)work_a_0588597522_3212880686_p_3};
	xsi_register_didat("work_a_0588597522_3212880686", "isim/Test_Bench2_isim_beh.exe.sim/work/a_0588597522_3212880686.didat");
	xsi_register_executes(pe);
}
