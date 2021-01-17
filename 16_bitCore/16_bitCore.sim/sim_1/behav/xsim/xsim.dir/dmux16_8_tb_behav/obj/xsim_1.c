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
extern void execute_459(char*, char *);
extern void execute_2704(char*, char *);
extern void execute_2705(char*, char *);
extern void vlog_const_rhs_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
extern void execute_466(char*, char *);
extern void execute_467(char*, char *);
extern void execute_470(char*, char *);
extern void execute_471(char*, char *);
extern void execute_472(char*, char *);
extern void execute_473(char*, char *);
extern void execute_474(char*, char *);
extern void execute_475(char*, char *);
extern void execute_461(char*, char *);
extern void execute_462(char*, char *);
extern void execute_463(char*, char *);
extern void execute_2706(char*, char *);
extern void execute_2707(char*, char *);
extern void execute_2708(char*, char *);
extern void execute_2709(char*, char *);
extern void execute_2710(char*, char *);
extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
funcp funcTab[21] = {(funcp)execute_459, (funcp)execute_2704, (funcp)execute_2705, (funcp)vlog_const_rhs_process_execute_0_fast_no_reg_no_agg, (funcp)execute_466, (funcp)execute_467, (funcp)execute_470, (funcp)execute_471, (funcp)execute_472, (funcp)execute_473, (funcp)execute_474, (funcp)execute_475, (funcp)execute_461, (funcp)execute_462, (funcp)execute_463, (funcp)execute_2706, (funcp)execute_2707, (funcp)execute_2708, (funcp)execute_2709, (funcp)execute_2710, (funcp)vlog_transfunc_eventcallback};
const int NumRelocateId= 21;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/dmux16_8_tb_behav/xsim.reloc",  (void **)funcTab, 21);

	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/dmux16_8_tb_behav/xsim.reloc");
}

	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net

void wrapper_func_0(char *dp)

{

}

void simulate(char *dp)
{
		iki_schedule_processes_at_time_zero(dp, "xsim.dir/dmux16_8_tb_behav/xsim.reloc");
	wrapper_func_0(dp);

	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

	iki_vlog_add_strength_resolution_functions_time_0(*(char**)(dp + 1632), dp + 1736, dp + 2208, 4294967295, 0, 0, 15, 0, dp + 1592);

	iki_vlog_add_strength_resolution_functions_time_0(*(char**)(dp + 2408), dp + 2512, dp + 2984, 4294967295, 0, 0, 15, 0, dp + 2368);

	iki_vlog_add_strength_resolution_functions_time_0(*(char**)(dp + 3184), dp + 3288, dp + 3760, 4294967295, 0, 0, 15, 0, dp + 3144);

	iki_vlog_add_strength_resolution_functions_time_0(*(char**)(dp + 3960), dp + 4064, dp + 4536, 4294967295, 0, 0, 15, 0, dp + 3920);

	iki_vlog_add_strength_resolution_functions_time_0(*(char**)(dp + 4736), dp + 4840, dp + 5312, 4294967295, 0, 0, 15, 0, dp + 4696);

	iki_vlog_add_strength_resolution_functions_time_0(*(char**)(dp + 5512), dp + 5616, dp + 6088, 4294967295, 0, 0, 15, 0, dp + 5472);

	iki_vlog_add_strength_resolution_functions_time_0(*(char**)(dp + 6288), dp + 6392, dp + 6864, 4294967295, 0, 0, 15, 0, dp + 6248);

	iki_vlog_add_strength_resolution_functions_time_0(*(char**)(dp + 7064), dp + 7168, dp + 7640, 4294967295, 0, 0, 15, 0, dp + 7024);

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
    iki_set_sv_type_file_path_name("xsim.dir/dmux16_8_tb_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/dmux16_8_tb_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/dmux16_8_tb_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
