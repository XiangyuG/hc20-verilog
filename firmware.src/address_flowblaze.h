#ifndef address_flowblaze_h   
#define address_flowblaze_h

//#define _ADDR
//#define _BASEADDR

#define FLOWBLAZE1_BASEADDR	0x81000000
#define FLOWBLAZE2_BASEADDR	0x80000000

//test
#define REGTEST0_ADDR	 0x80000008
#define TIMER_ADDR	 0x8000000C

//estractor
#define LOOKUP_ADDR 		0x80000010
#define LOOKUPMASK_ADDR 	0x80000030

#define UPDATE_ADDR 		0x80000020	//GLOBAL_UPDATE_SCOPE
#define UPDATEMASK_ADDR 	0x80000040
#define SEL_UPDATE_ADDR 	0x80000024


//extractor tcam2
#define FSM_SCOPE_ADDR 		0x80000050


//OFFSET_LENGTH
#define OFF_LEN1 		0x80000060
#define OFF_LEN2 		0x80000070
#define OFF_LEN3 		0x80000080

//PAUSE
#define PAUSE  		        0x80000090

//GLOBAL register
#define GR00			0x80000100
#define GR01			0x80000104
#define GR02			0x80000108
#define GR03			0x8000010C
#define GR04			0x80000110
#define GR05			0x80000114
#define GR06			0x80000118
#define GR07			0x8000011C
#define GR08			0x80000120
#define GR09			0x80000124
#define GR10			0x80000128
#define GR11			0x8000012C
#define GR12			0x80000130
#define GR13			0x80000134
#define GR14			0x80000138
#define GR15			0x8000013C

//hash table-1K
#define HT0_1K_BASEADDR 	0x80100000
#define HT1_1K_BASEADDR 	0x80108000
#define HT2_1K_BASEADDR 	0x80110000
#define HT3_1K_BASEADDR 	0x80118000

//hash table-8K
#define HT0_8K_BASEADDR 	0x80100000
#define HT1_8K_BASEADDR 	0x80140000
#define HT2_8K_BASEADDR 	0x80180000
#define HT3_8K_BASEADDR 	0x801C0000


//stash
#define NUM_ENTRY_STASH 	0x80200000
#define COUNT_COLLISION 	0x80200004
#define COUNT_ITEM 		0x80200008
#define TOP_NUM_ENTRY_STASH 	0x8020000C
#define EVICTED_STASH	 	0x80200010
#define NUM_PRESENT	 	0x80200014
#define COUNT_CUCKOO_INSERT  	0x80200018


//tcam1
#define TCAM1_BASEADDR 		0x80010000
#define TCAM1_MASK_BASEADDR 	0x80010020

//tcam2
#define TCAM2_BASEADDR 		0x80011000
#define TCAM2_MASK_BASEADDR 	0x80011020

//ram
#define RAM1_BASEADDR 		0x80020000
#define RAM2_BASEADDR 		0x80021000
#define RAM3_BASEADDR 		0x80022000
#define RAM4_BASEADDR 		0x80023000

#define RAM_PIPEALU_BASEADDR 	0x80030000


//contatori
#define IP_TOT_COUNT_ADDR 	0x80008000
#define UDP_TOT_COUNT_ADDR 	0x80008004
#define TCP_TOT_COUNT_ADDR 	0x80008008

#define IP_1_COUNT_ADDR 	0x80008010
#define UDP_1_COUNT_ADDR	0x80008014
#define TCP_1_COUNT_ADDR 	0x80008018

#define IP_2_COUNT_ADDR 	0x80008020
#define UDP_2_COUNT_ADDR 	0x80008024
#define TCP_2_COUNT_ADDR 	0x80008028

#define IP_3_COUNT_ADDR 	0x80008030
#define UDP_3_COUNT_ADDR 	0x80008034
#define TCP_3_COUNT_ADDR 	0x80008038

#define IP_4_COUNT_ADDR 	0x80008040
#define UDP_4_COUNT_ADDR	0x80008044
#define TCP_4_COUNT_ADDR	0x80008048


//reg debug
#define FULL_INPUT_2_DEBUG 	0x80ffff00
#define FLOW_STATE_TCAM2_DEBUG 	0x80ffff04
#define MATCH_ADDR_TCAM2_DEBUG	0x80ffff08
#define UPDATE_CONTEXT_DEBUG_1	0x80ffff0C
#define UPDATE_CONTEXT_DEBUG_2 	0x80ffff10
#define ACTION_DEBUG	 	0x80ffff14
#define FULL_INPUT_1_DEBUG_1 	0x80ffff18
#define FULL_INPUT_1_DEBUG_2 	0x80ffff1C
#define FULL_INPUT_HT_DEBUG_1	0x80ffff20
#define FULL_INPUT_HT_DEBUG_2	0x80ffff24
#define FLOW_CONTEXT_DEBUG_1 	0x80ffff28
#define FLOW_CONTEXT_DEBUG_2 	0x80ffff2C
#define COUNT_STARTD3_DEBUG 	0x80ffff30
#define COUNT_STEP_DEBUG 	0x80ffff34
#define COUNT_STEP_1_DEBUG 	0x80ffff38
#define COUNT_STEP_2_DEBUG 	0x80ffff3C
#define COUNT_STARTD_DEBUG 	0x80ffff40


#endif
