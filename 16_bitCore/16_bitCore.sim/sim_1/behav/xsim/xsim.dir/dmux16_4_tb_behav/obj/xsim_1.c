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
extern void execute_198(char*, char *);
extern void execute_1163(char*, char *);
extern void execute_1164(char*, char *);
extern void vlog_const_rhs_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
extern void execute_205(char*, char *);
extern void execute_206(char*, char *);
extern void execute_209(char*, char *);
extern void execute_210(char*, char *);
extern void execute_211(char*, char *);
extern void execute_212(char*, char *);
extern void execute_213(char*, char *);
extern void execute_214(char*, char *);
extern void execute_200(char*, char *);
extern void execute_201(char*, char *);
extern void execute_202(char*, char *);
extern void execute_1165(char*, char *);
extern void execute_1166(char*, char *);
extern void execute_1167(char*, char *);
extern void execute_1168(char*, char *);
extern void execute_1169(char*, char *);
extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
funcp funcTab[21] = {(funcp)execute_198, (funcp)execute_1163, (funcp)execute_1164, (funcp)vlog_const_rhs_process_execute_0_fast_no_reg_no_agg, (funcp)execute_205, (funcp)execute_206, (funcp)execute_209, (funcp)execute_210, (funcp)execute_211, (funcp)execute_212, (funcp)execute_213, (funcp)execute_214, (funcp)execute_200, (funcp)execute_201, (funcp)execute_202, (funcp)execute_1165, (funcp)execute_1166, (funcp)execute_1167, (funcp)execute_1168, (funcp)execute_1169, (funcp)vlog_transfunc_eventcallback};
const int NumRelocateId= 21;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/dmux16_4_tb_behav/xsim.reloc",  (void **)funcTab, 21);

	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/dmux16_4_tb_behav/xsim.reloc");
}

	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net

void wrapper_func_0(char *dp)

{

}

void simulate(char *dp)
{
		iki_schedule_processes_at_time_zero(dp, "xsim.dir/dmux16_4_tb_behav/xsim.reloc");
	wrapper_func_0(dp);

	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

	iki_vlog_add_strength_resolution_functions_time_0(*(char**)(dp + 1632), dp + 1736, dp + 2208, 4294967295, 0, 0, 15, 0, dp + 1592);

	iki_vlog_add_strength_resolution_functions_time_0(*(char**)(dp + 2408), dp + 2512, dp + 2984, 4294967295, 0, 0, 15, 0, dp + 2368);

	iki_vlog_add_strength_resolution_functions_time_0(*(char**)(dp + 3184), dp + 3288, dp + 3760, 4294967295, 0, 0, 15, 0, dp + 3144);

	iki_vlog_add_strength_resolution_functions_time_0(*(char**)(dp + 3960), dp + 4064, dp + 4536, 4294967295, 0, 0, 15, 0, dp + 3920);

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
    iki_set_sv_type_file_path_name("xsim.dir/dmux16_4_tb_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/dmux16_4_tb_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/dmux16_4_tb_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
