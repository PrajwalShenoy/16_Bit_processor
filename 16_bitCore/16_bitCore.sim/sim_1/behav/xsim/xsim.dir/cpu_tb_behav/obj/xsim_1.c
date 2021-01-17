/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern void execute_1750(char*, char *);
extern void execute_1751(char*, char *);
extern void execute_1752(char*, char *);
extern void execute_9146(char*, char *);
extern void execute_9147(char*, char *);
extern void execute_9148(char*, char *);
extern void execute_9149(char*, char *);
extern void vlog_const_rhs_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
extern void execute_1758(char*, char *);
extern void vlog_simple_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
extern void execute_1762(char*, char *);
extern void execute_1763(char*, char *);
extern void execute_1768(char*, char *);
extern void execute_1769(char*, char *);
extern void execute_1770(char*, char *);
extern void execute_1771(char*, char *);
extern void execute_1772(char*, char *);
extern void execute_1773(char*, char *);
extern void execute_1774(char*, char *);
extern void execute_1775(char*, char *);
extern void execute_1776(char*, char *);
extern void execute_2444(char*, char *);
extern void execute_2445(char*, char *);
extern void execute_2704(char*, char *);
extern void execute_2705(char*, char *);
extern void execute_2706(char*, char *);
extern void execute_2707(char*, char *);
extern void execute_2708(char*, char *);
extern void execute_2709(char*, char *);
extern void execute_2856(char*, char *);
extern void execute_2857(char*, char *);
extern void execute_2858(char*, char *);
extern void execute_2859(char*, char *);
extern void execute_2860(char*, char *);
extern void execute_2861(char*, char *);
extern void execute_6671(char*, char *);
extern void execute_6760(char*, char *);
extern void execute_6761(char*, char *);
extern void execute_6763(char*, char *);
extern void execute_6769(char*, char *);
extern void execute_1754(char*, char *);
extern void execute_1755(char*, char *);
extern void execute_1756(char*, char *);
extern void execute_9150(char*, char *);
extern void execute_9151(char*, char *);
extern void execute_9152(char*, char *);
extern void execute_9153(char*, char *);
extern void execute_9154(char*, char *);
extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
funcp funcTab[49] = {(funcp)execute_1750, (funcp)execute_1751, (funcp)execute_1752, (funcp)execute_9146, (funcp)execute_9147, (funcp)execute_9148, (funcp)execute_9149, (funcp)vlog_const_rhs_process_execute_0_fast_no_reg_no_agg, (funcp)execute_1758, (funcp)vlog_simple_process_execute_0_fast_no_reg_no_agg, (funcp)execute_1762, (funcp)execute_1763, (funcp)execute_1768, (funcp)execute_1769, (funcp)execute_1770, (funcp)execute_1771, (funcp)execute_1772, (funcp)execute_1773, (funcp)execute_1774, (funcp)execute_1775, (funcp)execute_1776, (funcp)execute_2444, (funcp)execute_2445, (funcp)execute_2704, (funcp)execute_2705, (funcp)execute_2706, (funcp)execute_2707, (funcp)execute_2708, (funcp)execute_2709, (funcp)execute_2856, (funcp)execute_2857, (funcp)execute_2858, (funcp)execute_2859, (funcp)execute_2860, (funcp)execute_2861, (funcp)execute_6671, (funcp)execute_6760, (funcp)execute_6761, (funcp)execute_6763, (funcp)execute_6769, (funcp)execute_1754, (funcp)execute_1755, (funcp)execute_1756, (funcp)execute_9150, (funcp)execute_9151, (funcp)execute_9152, (funcp)execute_9153, (funcp)execute_9154, (funcp)vlog_transfunc_eventcallback};
const int NumRelocateId= 49;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/cpu_tb_behav/xsim.reloc",  (void **)funcTab, 49);

	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/cpu_tb_behav/xsim.reloc");
}

	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net

void wrapper_func_0(char *dp)

{

}

void simulate(char *dp)
{
		iki_schedule_processes_at_time_zero(dp, "xsim.dir/cpu_tb_behav/xsim.reloc");
	wrapper_func_0(dp);

	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern void implicit_HDL_SCinstatiate();

extern SYSTEMCLIB_IMP_DLLSPEC int xsim_argc_copy ;
extern SYSTEMCLIB_IMP_DLLSPEC char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_sv_type_file_path_name("xsim.dir/cpu_tb_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/cpu_tb_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/cpu_tb_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
