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
extern int main(int, char**);
extern void execute_2(char*, char *);
extern void execute_3(char*, char *);
extern void execute_127(char*, char *);
extern void execute_201(char*, char *);
extern void execute_785(char*, char *);
extern void execute_786(char*, char *);
extern void execute_794(char*, char *);
extern void execute_807(char*, char *);
extern void execute_808(char*, char *);
extern void execute_203(char*, char *);
extern void execute_208(char*, char *);
extern void execute_217(char*, char *);
extern void execute_212(char*, char *);
extern void execute_219(char*, char *);
extern void execute_792(char*, char *);
extern void execute_789(char*, char *);
extern void execute_790(char*, char *);
extern void execute_798(char*, char *);
extern void execute_799(char*, char *);
extern void execute_800(char*, char *);
extern void execute_804(char*, char *);
extern void execute_805(char*, char *);
extern void execute_806(char*, char *);
extern void execute_145(char*, char *);
extern void execute_146(char*, char *);
extern void execute_164(char*, char *);
extern void execute_136(char*, char *);
extern void execute_142(char*, char *);
extern void execute_143(char*, char *);
extern void execute_140(char*, char *);
extern void execute_148(char*, char *);
extern void execute_150(char*, char *);
extern void execute_152(char*, char *);
extern void execute_154(char*, char *);
extern void execute_156(char*, char *);
extern void execute_158(char*, char *);
extern void execute_160(char*, char *);
extern void execute_162(char*, char *);
extern void execute_227(char*, char *);
extern void execute_777(char*, char *);
extern void execute_778(char*, char *);
extern void execute_231(char*, char *);
extern void execute_233(char*, char *);
extern void execute_273(char*, char *);
extern void execute_275(char*, char *);
extern void execute_276(char*, char *);
extern void execute_358(char*, char *);
extern void execute_362(char*, char *);
extern void execute_390(char*, char *);
extern void execute_419(char*, char *);
extern void execute_460(char*, char *);
extern void execute_752(char*, char *);
extern void execute_753(char*, char *);
extern void execute_768(char*, char *);
extern void execute_751(char*, char *);
extern void execute_756(char*, char *);
extern void execute_757(char*, char *);
extern void execute_239(char*, char *);
extern void execute_240(char*, char *);
extern void execute_241(char*, char *);
extern void execute_247(char*, char *);
extern void execute_265(char*, char *);
extern void execute_266(char*, char *);
extern void execute_268(char*, char *);
extern void execute_256(char*, char *);
extern void execute_262(char*, char *);
extern void execute_263(char*, char *);
extern void execute_260(char*, char *);
extern void execute_297(char*, char *);
extern void execute_288(char*, char *);
extern void execute_289(char*, char *);
extern void execute_294(char*, char *);
extern void execute_300(char*, char *);
extern void execute_333(char*, char *);
extern void execute_335(char*, char *);
extern void execute_336(char*, char *);
extern void execute_304(char*, char *);
extern void execute_309(char*, char *);
extern void execute_327(char*, char *);
extern void execute_328(char*, char *);
extern void execute_330(char*, char *);
extern void execute_318(char*, char *);
extern void execute_324(char*, char *);
extern void execute_325(char*, char *);
extern void execute_322(char*, char *);
extern void execute_340(char*, char *);
extern void execute_341(char*, char *);
extern void execute_342(char*, char *);
extern void execute_426(char*, char *);
extern void execute_357(char*, char *);
extern void execute_351(char*, char *);
extern void execute_353(char*, char *);
extern void execute_446(char*, char *);
extern void execute_447(char*, char *);
extern void execute_459(char*, char *);
extern void execute_437(char*, char *);
extern void execute_443(char*, char *);
extern void execute_444(char*, char *);
extern void execute_441(char*, char *);
extern void execute_449(char*, char *);
extern void execute_451(char*, char *);
extern void execute_453(char*, char *);
extern void execute_455(char*, char *);
extern void execute_457(char*, char *);
extern void execute_474(char*, char *);
extern void execute_477(char*, char *);
extern void execute_484(char*, char *);
extern void execute_519(char*, char *);
extern void execute_520(char*, char *);
extern void execute_487(char*, char *);
extern void execute_491(char*, char *);
extern void execute_524(char*, char *);
extern void execute_525(char*, char *);
extern void execute_529(char*, char *);
extern void execute_571(char*, char *);
extern void execute_572(char*, char *);
extern void execute_576(char*, char *);
extern void execute_577(char*, char *);
extern void execute_578(char*, char *);
extern void execute_579(char*, char *);
extern void execute_580(char*, char *);
extern void execute_581(char*, char *);
extern void execute_582(char*, char *);
extern void execute_583(char*, char *);
extern void execute_664(char*, char *);
extern void execute_665(char*, char *);
extern void execute_666(char*, char *);
extern void execute_667(char*, char *);
extern void execute_509(char*, char *);
extern void execute_510(char*, char *);
extern void execute_518(char*, char *);
extern void execute_500(char*, char *);
extern void execute_506(char*, char *);
extern void execute_507(char*, char *);
extern void execute_504(char*, char *);
extern void execute_512(char*, char *);
extern void execute_514(char*, char *);
extern void execute_516(char*, char *);
extern void execute_546(char*, char *);
extern void execute_547(char*, char *);
extern void execute_549(char*, char *);
extern void execute_537(char*, char *);
extern void execute_543(char*, char *);
extern void execute_544(char*, char *);
extern void execute_541(char*, char *);
extern void execute_600(char*, char *);
extern void execute_601(char*, char *);
extern void execute_603(char*, char *);
extern void execute_591(char*, char *);
extern void execute_597(char*, char *);
extern void execute_598(char*, char *);
extern void execute_595(char*, char *);
extern void execute_620(char*, char *);
extern void execute_621(char*, char *);
extern void execute_623(char*, char *);
extern void execute_611(char*, char *);
extern void execute_617(char*, char *);
extern void execute_618(char*, char *);
extern void execute_615(char*, char *);
extern void execute_774(char*, char *);
extern void execute_824(char*, char *);
extern void execute_825(char*, char *);
extern void execute_826(char*, char *);
extern void execute_827(char*, char *);
extern void execute_828(char*, char *);
extern void execute_829(char*, char *);
extern void execute_830(char*, char *);
extern void execute_831(char*, char *);
extern void transaction_1(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_2(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_3(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_4(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_5(char*, char*, unsigned, unsigned, unsigned);
extern void vhdl_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_51(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_52(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_58(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_59(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_62(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_63(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_64(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_85(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_89(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_96(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_105(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_219(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_236(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_237(char*, char*, unsigned, unsigned, unsigned);
extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_0(char*, char*, unsigned, unsigned, unsigned);
funcp funcTab[190] = {(funcp)execute_2, (funcp)execute_3, (funcp)execute_127, (funcp)execute_201, (funcp)execute_785, (funcp)execute_786, (funcp)execute_794, (funcp)execute_807, (funcp)execute_808, (funcp)execute_203, (funcp)execute_208, (funcp)execute_217, (funcp)execute_212, (funcp)execute_219, (funcp)execute_792, (funcp)execute_789, (funcp)execute_790, (funcp)execute_798, (funcp)execute_799, (funcp)execute_800, (funcp)execute_804, (funcp)execute_805, (funcp)execute_806, (funcp)execute_145, (funcp)execute_146, (funcp)execute_164, (funcp)execute_136, (funcp)execute_142, (funcp)execute_143, (funcp)execute_140, (funcp)execute_148, (funcp)execute_150, (funcp)execute_152, (funcp)execute_154, (funcp)execute_156, (funcp)execute_158, (funcp)execute_160, (funcp)execute_162, (funcp)execute_227, (funcp)execute_777, (funcp)execute_778, (funcp)execute_231, (funcp)execute_233, (funcp)execute_273, (funcp)execute_275, (funcp)execute_276, (funcp)execute_358, (funcp)execute_362, (funcp)execute_390, (funcp)execute_419, (funcp)execute_460, (funcp)execute_752, (funcp)execute_753, (funcp)execute_768, (funcp)execute_751, (funcp)execute_756, (funcp)execute_757, (funcp)execute_239, (funcp)execute_240, (funcp)execute_241, (funcp)execute_247, (funcp)execute_265, (funcp)execute_266, (funcp)execute_268, (funcp)execute_256, (funcp)execute_262, (funcp)execute_263, (funcp)execute_260, (funcp)execute_297, (funcp)execute_288, (funcp)execute_289, (funcp)execute_294, (funcp)execute_300, (funcp)execute_333, (funcp)execute_335, (funcp)execute_336, (funcp)execute_304, (funcp)execute_309, (funcp)execute_327, (funcp)execute_328, (funcp)execute_330, (funcp)execute_318, (funcp)execute_324, (funcp)execute_325, (funcp)execute_322, (funcp)execute_340, (funcp)execute_341, (funcp)execute_342, (funcp)execute_426, (funcp)execute_357, (funcp)execute_351, (funcp)execute_353, (funcp)execute_446, (funcp)execute_447, (funcp)execute_459, (funcp)execute_437, (funcp)execute_443, (funcp)execute_444, (funcp)execute_441, (funcp)execute_449, (funcp)execute_451, (funcp)execute_453, (funcp)execute_455, (funcp)execute_457, (funcp)execute_474, (funcp)execute_477, (funcp)execute_484, (funcp)execute_519, (funcp)execute_520, (funcp)execute_487, (funcp)execute_491, (funcp)execute_524, (funcp)execute_525, (funcp)execute_529, (funcp)execute_571, (funcp)execute_572, (funcp)execute_576, (funcp)execute_577, (funcp)execute_578, (funcp)execute_579, (funcp)execute_580, (funcp)execute_581, (funcp)execute_582, (funcp)execute_583, (funcp)execute_664, (funcp)execute_665, (funcp)execute_666, (funcp)execute_667, (funcp)execute_509, (funcp)execute_510, (funcp)execute_518, (funcp)execute_500, (funcp)execute_506, (funcp)execute_507, (funcp)execute_504, (funcp)execute_512, (funcp)execute_514, (funcp)execute_516, (funcp)execute_546, (funcp)execute_547, (funcp)execute_549, (funcp)execute_537, (funcp)execute_543, (funcp)execute_544, (funcp)execute_541, (funcp)execute_600, (funcp)execute_601, (funcp)execute_603, (funcp)execute_591, (funcp)execute_597, (funcp)execute_598, (funcp)execute_595, (funcp)execute_620, (funcp)execute_621, (funcp)execute_623, (funcp)execute_611, (funcp)execute_617, (funcp)execute_618, (funcp)execute_615, (funcp)execute_774, (funcp)execute_824, (funcp)execute_825, (funcp)execute_826, (funcp)execute_827, (funcp)execute_828, (funcp)execute_829, (funcp)execute_830, (funcp)execute_831, (funcp)transaction_1, (funcp)transaction_2, (funcp)transaction_3, (funcp)transaction_4, (funcp)transaction_5, (funcp)vhdl_transfunc_eventcallback, (funcp)transaction_51, (funcp)transaction_52, (funcp)transaction_58, (funcp)transaction_59, (funcp)transaction_62, (funcp)transaction_63, (funcp)transaction_64, (funcp)transaction_85, (funcp)transaction_89, (funcp)transaction_96, (funcp)transaction_105, (funcp)transaction_219, (funcp)transaction_236, (funcp)transaction_237, (funcp)vlog_transfunc_eventcallback, (funcp)transaction_0};
const int NumRelocateId= 190;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/dds_tb_behav/xsim.reloc",  (void **)funcTab, 190);
	iki_vhdl_file_variable_register(dp + 224936);
	iki_vhdl_file_variable_register(dp + 224992);


	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/dds_tb_behav/xsim.reloc");
}

	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net

void wrapper_func_0(char *dp)

{

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 493720, dp + 493080, 0, 0, 0, 0, 1, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 493776, dp + 493136, 0, 15, 0, 15, 16, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 493872, dp + 493192, 0, 15, 0, 15, 16, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 493816, dp + 493248, 0, 0, 0, 0, 1, 1);

}

void simulate(char *dp)
{
		iki_schedule_processes_at_time_zero(dp, "xsim.dir/dds_tb_behav/xsim.reloc");
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
    iki_set_sv_type_file_path_name("xsim.dir/dds_tb_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/dds_tb_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/dds_tb_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
