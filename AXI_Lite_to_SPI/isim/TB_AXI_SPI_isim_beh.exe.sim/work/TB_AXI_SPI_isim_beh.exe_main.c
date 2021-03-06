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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003194684531_1505086248_init();
    work_m_00000000002128812323_0738575614_init();
    work_m_00000000000194793088_2006619456_init();
    work_m_00000000001249134401_1203242225_init();
    work_m_00000000003801381322_4124233851_init();
    work_m_00000000001994744714_3302136066_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001994744714_3302136066");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
