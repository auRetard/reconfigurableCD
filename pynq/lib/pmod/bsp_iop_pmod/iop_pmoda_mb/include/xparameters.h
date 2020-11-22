#ifndef XPARAMETERS_H   /* prevent circular inclusions */
#define XPARAMETERS_H   /* by using protection macros */

/* Definitions for bus frequencies */
#define XPAR_CPU_M_AXI_DP_FREQ_HZ 100000000
/******************************************************************/

/* Canonical definitions for bus frequencies */
/******************************************************************/

#define XPAR_CPU_CORE_CLOCK_FREQ_HZ 100000000
#define XPAR_MICROBLAZE_CORE_CLOCK_FREQ_HZ 100000000

/******************************************************************/


/* Definitions for peripheral IOP_PMODA_MB */
#define XPAR_IOP_PMODA_MB_ADDR_SIZE 32
#define XPAR_IOP_PMODA_MB_ADDR_TAG_BITS 17
#define XPAR_IOP_PMODA_MB_ALLOW_DCACHE_WR 1
#define XPAR_IOP_PMODA_MB_ALLOW_ICACHE_WR 1
#define XPAR_IOP_PMODA_MB_AREA_OPTIMIZED 0
#define XPAR_IOP_PMODA_MB_ASYNC_INTERRUPT 1
#define XPAR_IOP_PMODA_MB_ASYNC_WAKEUP 3
#define XPAR_IOP_PMODA_MB_AVOID_PRIMITIVES 0
#define XPAR_IOP_PMODA_MB_BASE_VECTORS 0x0000000000000000
#define XPAR_IOP_PMODA_MB_BRANCH_TARGET_CACHE_SIZE 0
#define XPAR_IOP_PMODA_MB_CACHE_BYTE_SIZE 8192
#define XPAR_IOP_PMODA_MB_DADDR_SIZE 32
#define XPAR_IOP_PMODA_MB_DATA_SIZE 32
#define XPAR_IOP_PMODA_MB_DCACHE_ADDR_TAG 17
#define XPAR_IOP_PMODA_MB_DCACHE_ALWAYS_USED 0
#define XPAR_IOP_PMODA_MB_DCACHE_BASEADDR 0x00000000
#define XPAR_IOP_PMODA_MB_DCACHE_BYTE_SIZE 8192
#define XPAR_IOP_PMODA_MB_DCACHE_DATA_WIDTH 0
#define XPAR_IOP_PMODA_MB_DCACHE_FORCE_TAG_LUTRAM 0
#define XPAR_IOP_PMODA_MB_DCACHE_HIGHADDR 0x3FFFFFFF
#define XPAR_IOP_PMODA_MB_DCACHE_LINE_LEN 4
#define XPAR_IOP_PMODA_MB_DCACHE_USE_WRITEBACK 0
#define XPAR_IOP_PMODA_MB_DCACHE_VICTIMS 0
#define XPAR_IOP_PMODA_MB_DC_AXI_MON 0
#define XPAR_IOP_PMODA_MB_DEBUG_COUNTER_WIDTH 32
#define XPAR_IOP_PMODA_MB_DEBUG_ENABLED 1
#define XPAR_IOP_PMODA_MB_DEBUG_EVENT_COUNTERS 5
#define XPAR_IOP_PMODA_MB_DEBUG_EXTERNAL_TRACE 0
#define XPAR_IOP_PMODA_MB_DEBUG_INTERFACE 0
#define XPAR_IOP_PMODA_MB_DEBUG_LATENCY_COUNTERS 1
#define XPAR_IOP_PMODA_MB_DEBUG_PROFILE_SIZE 0
#define XPAR_IOP_PMODA_MB_DEBUG_TRACE_ASYNC_RESET 0
#define XPAR_IOP_PMODA_MB_DEBUG_TRACE_SIZE 8192
#define XPAR_IOP_PMODA_MB_DIV_ZERO_EXCEPTION 0
#define XPAR_IOP_PMODA_MB_DP_AXI_MON 0
#define XPAR_IOP_PMODA_MB_DYNAMIC_BUS_SIZING 0
#define XPAR_IOP_PMODA_MB_D_AXI 1
#define XPAR_IOP_PMODA_MB_D_LMB 1
#define XPAR_IOP_PMODA_MB_D_LMB_MON 0
#define XPAR_IOP_PMODA_MB_ECC_USE_CE_EXCEPTION 0
#define XPAR_IOP_PMODA_MB_EDGE_IS_POSITIVE 1
#define XPAR_IOP_PMODA_MB_ENABLE_DISCRETE_PORTS 0
#define XPAR_IOP_PMODA_MB_ENDIANNESS 1
#define XPAR_IOP_PMODA_MB_FAULT_TOLERANT 0
#define XPAR_IOP_PMODA_MB_FPU_EXCEPTION 0
#define XPAR_IOP_PMODA_MB_FREQ 100000000
#define XPAR_IOP_PMODA_MB_FSL_EXCEPTION 0
#define XPAR_IOP_PMODA_MB_FSL_LINKS 0
#define XPAR_IOP_PMODA_MB_IADDR_SIZE 32
#define XPAR_IOP_PMODA_MB_ICACHE_ALWAYS_USED 0
#define XPAR_IOP_PMODA_MB_ICACHE_BASEADDR 0x00000000
#define XPAR_IOP_PMODA_MB_ICACHE_DATA_WIDTH 0
#define XPAR_IOP_PMODA_MB_ICACHE_FORCE_TAG_LUTRAM 0
#define XPAR_IOP_PMODA_MB_ICACHE_HIGHADDR 0x3FFFFFFF
#define XPAR_IOP_PMODA_MB_ICACHE_LINE_LEN 4
#define XPAR_IOP_PMODA_MB_ICACHE_STREAMS 0
#define XPAR_IOP_PMODA_MB_ICACHE_VICTIMS 0
#define XPAR_IOP_PMODA_MB_IC_AXI_MON 0
#define XPAR_IOP_PMODA_MB_ILL_OPCODE_EXCEPTION 0
#define XPAR_IOP_PMODA_MB_IMPRECISE_EXCEPTIONS 0
#define XPAR_IOP_PMODA_MB_INSTR_SIZE 32
#define XPAR_IOP_PMODA_MB_INTERCONNECT 2
#define XPAR_IOP_PMODA_MB_INTERRUPT_IS_EDGE 0
#define XPAR_IOP_PMODA_MB_INTERRUPT_MON 0
#define XPAR_IOP_PMODA_MB_IP_AXI_MON 0
#define XPAR_IOP_PMODA_MB_I_AXI 0
#define XPAR_IOP_PMODA_MB_I_LMB 1
#define XPAR_IOP_PMODA_MB_I_LMB_MON 0
#define XPAR_IOP_PMODA_MB_LMB_DATA_SIZE 32
#define XPAR_IOP_PMODA_MB_LOCKSTEP_MASTER 0
#define XPAR_IOP_PMODA_MB_LOCKSTEP_SELECT 0
#define XPAR_IOP_PMODA_MB_LOCKSTEP_SLAVE 0
#define XPAR_IOP_PMODA_MB_M0_AXIS_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_M0_AXIS_PROTOCOL GENERIC
#define XPAR_IOP_PMODA_MB_M1_AXIS_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_M1_AXIS_PROTOCOL GENERIC
#define XPAR_IOP_PMODA_MB_M2_AXIS_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_M2_AXIS_PROTOCOL GENERIC
#define XPAR_IOP_PMODA_MB_M3_AXIS_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_M3_AXIS_PROTOCOL GENERIC
#define XPAR_IOP_PMODA_MB_M4_AXIS_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_M4_AXIS_PROTOCOL GENERIC
#define XPAR_IOP_PMODA_MB_M5_AXIS_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_M5_AXIS_PROTOCOL GENERIC
#define XPAR_IOP_PMODA_MB_M6_AXIS_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_M6_AXIS_PROTOCOL GENERIC
#define XPAR_IOP_PMODA_MB_M7_AXIS_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_M7_AXIS_PROTOCOL GENERIC
#define XPAR_IOP_PMODA_MB_M8_AXIS_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_M8_AXIS_PROTOCOL GENERIC
#define XPAR_IOP_PMODA_MB_M9_AXIS_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_M9_AXIS_PROTOCOL GENERIC
#define XPAR_IOP_PMODA_MB_M10_AXIS_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_M10_AXIS_PROTOCOL GENERIC
#define XPAR_IOP_PMODA_MB_M11_AXIS_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_M11_AXIS_PROTOCOL GENERIC
#define XPAR_IOP_PMODA_MB_M12_AXIS_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_M12_AXIS_PROTOCOL GENERIC
#define XPAR_IOP_PMODA_MB_M13_AXIS_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_M13_AXIS_PROTOCOL GENERIC
#define XPAR_IOP_PMODA_MB_M14_AXIS_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_M14_AXIS_PROTOCOL GENERIC
#define XPAR_IOP_PMODA_MB_M15_AXIS_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_M15_AXIS_PROTOCOL GENERIC
#define XPAR_IOP_PMODA_MB_MMU_DTLB_SIZE 4
#define XPAR_IOP_PMODA_MB_MMU_ITLB_SIZE 2
#define XPAR_IOP_PMODA_MB_MMU_PRIVILEGED_INSTR 0
#define XPAR_IOP_PMODA_MB_MMU_TLB_ACCESS 3
#define XPAR_IOP_PMODA_MB_MMU_ZONES 16
#define XPAR_IOP_PMODA_MB_M_AXI_DC_ADDR_WIDTH 32
#define XPAR_IOP_PMODA_MB_M_AXI_DC_ARUSER_WIDTH 5
#define XPAR_IOP_PMODA_MB_M_AXI_DC_AWUSER_WIDTH 5
#define XPAR_IOP_PMODA_MB_M_AXI_DC_BUSER_WIDTH 1
#define XPAR_IOP_PMODA_MB_M_AXI_DC_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_M_AXI_DC_EXCLUSIVE_ACCESS 0
#define XPAR_IOP_PMODA_MB_M_AXI_DC_RUSER_WIDTH 1
#define XPAR_IOP_PMODA_MB_M_AXI_DC_THREAD_ID_WIDTH 1
#define XPAR_IOP_PMODA_MB_M_AXI_DC_USER_SIGNALS 0
#define XPAR_IOP_PMODA_MB_M_AXI_DC_USER_VALUE 31
#define XPAR_IOP_PMODA_MB_M_AXI_DC_WUSER_WIDTH 1
#define XPAR_IOP_PMODA_MB_M_AXI_DP_ADDR_WIDTH 32
#define XPAR_IOP_PMODA_MB_M_AXI_DP_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_M_AXI_DP_EXCLUSIVE_ACCESS 0
#define XPAR_IOP_PMODA_MB_M_AXI_DP_THREAD_ID_WIDTH 1
#define XPAR_IOP_PMODA_MB_M_AXI_D_BUS_EXCEPTION 0
#define XPAR_IOP_PMODA_MB_M_AXI_IC_ADDR_WIDTH 32
#define XPAR_IOP_PMODA_MB_M_AXI_IC_ARUSER_WIDTH 5
#define XPAR_IOP_PMODA_MB_M_AXI_IC_AWUSER_WIDTH 5
#define XPAR_IOP_PMODA_MB_M_AXI_IC_BUSER_WIDTH 1
#define XPAR_IOP_PMODA_MB_M_AXI_IC_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_M_AXI_IC_RUSER_WIDTH 1
#define XPAR_IOP_PMODA_MB_M_AXI_IC_THREAD_ID_WIDTH 1
#define XPAR_IOP_PMODA_MB_M_AXI_IC_USER_SIGNALS 0
#define XPAR_IOP_PMODA_MB_M_AXI_IC_USER_VALUE 31
#define XPAR_IOP_PMODA_MB_M_AXI_IC_WUSER_WIDTH 1
#define XPAR_IOP_PMODA_MB_M_AXI_IP_ADDR_WIDTH 32
#define XPAR_IOP_PMODA_MB_M_AXI_IP_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_M_AXI_IP_THREAD_ID_WIDTH 1
#define XPAR_IOP_PMODA_MB_M_AXI_I_BUS_EXCEPTION 0
#define XPAR_IOP_PMODA_MB_NUMBER_OF_PC_BRK 1
#define XPAR_IOP_PMODA_MB_NUMBER_OF_RD_ADDR_BRK 0
#define XPAR_IOP_PMODA_MB_NUMBER_OF_WR_ADDR_BRK 0
#define XPAR_IOP_PMODA_MB_NUM_SYNC_FF_CLK 2
#define XPAR_IOP_PMODA_MB_NUM_SYNC_FF_CLK_DEBUG 2
#define XPAR_IOP_PMODA_MB_NUM_SYNC_FF_CLK_IRQ 1
#define XPAR_IOP_PMODA_MB_NUM_SYNC_FF_DBG_CLK 1
#define XPAR_IOP_PMODA_MB_NUM_SYNC_FF_DBG_TRACE_CLK 2
#define XPAR_IOP_PMODA_MB_OPCODE_0X0_ILLEGAL 0
#define XPAR_IOP_PMODA_MB_OPTIMIZATION 0
#define XPAR_IOP_PMODA_MB_PC_WIDTH 32
#define XPAR_IOP_PMODA_MB_PIADDR_SIZE 32
#define XPAR_IOP_PMODA_MB_PVR 0
#define XPAR_IOP_PMODA_MB_PVR_USER1 0x00
#define XPAR_IOP_PMODA_MB_PVR_USER2 0x00000000
#define XPAR_IOP_PMODA_MB_RESET_MSR 0x00000000
#define XPAR_IOP_PMODA_MB_RESET_MSR_BIP 0
#define XPAR_IOP_PMODA_MB_RESET_MSR_DCE 0
#define XPAR_IOP_PMODA_MB_RESET_MSR_EE 0
#define XPAR_IOP_PMODA_MB_RESET_MSR_EIP 0
#define XPAR_IOP_PMODA_MB_RESET_MSR_ICE 0
#define XPAR_IOP_PMODA_MB_RESET_MSR_IE 0
#define XPAR_IOP_PMODA_MB_S0_AXIS_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_S0_AXIS_PROTOCOL GENERIC
#define XPAR_IOP_PMODA_MB_S1_AXIS_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_S1_AXIS_PROTOCOL GENERIC
#define XPAR_IOP_PMODA_MB_S2_AXIS_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_S2_AXIS_PROTOCOL GENERIC
#define XPAR_IOP_PMODA_MB_S3_AXIS_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_S3_AXIS_PROTOCOL GENERIC
#define XPAR_IOP_PMODA_MB_S4_AXIS_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_S4_AXIS_PROTOCOL GENERIC
#define XPAR_IOP_PMODA_MB_S5_AXIS_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_S5_AXIS_PROTOCOL GENERIC
#define XPAR_IOP_PMODA_MB_S6_AXIS_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_S6_AXIS_PROTOCOL GENERIC
#define XPAR_IOP_PMODA_MB_S7_AXIS_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_S7_AXIS_PROTOCOL GENERIC
#define XPAR_IOP_PMODA_MB_S8_AXIS_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_S8_AXIS_PROTOCOL GENERIC
#define XPAR_IOP_PMODA_MB_S9_AXIS_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_S9_AXIS_PROTOCOL GENERIC
#define XPAR_IOP_PMODA_MB_S10_AXIS_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_S10_AXIS_PROTOCOL GENERIC
#define XPAR_IOP_PMODA_MB_S11_AXIS_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_S11_AXIS_PROTOCOL GENERIC
#define XPAR_IOP_PMODA_MB_S12_AXIS_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_S12_AXIS_PROTOCOL GENERIC
#define XPAR_IOP_PMODA_MB_S13_AXIS_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_S13_AXIS_PROTOCOL GENERIC
#define XPAR_IOP_PMODA_MB_S14_AXIS_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_S14_AXIS_PROTOCOL GENERIC
#define XPAR_IOP_PMODA_MB_S15_AXIS_DATA_WIDTH 32
#define XPAR_IOP_PMODA_MB_S15_AXIS_PROTOCOL GENERIC
#define XPAR_IOP_PMODA_MB_SCO 0
#define XPAR_IOP_PMODA_MB_TRACE 0
#define XPAR_IOP_PMODA_MB_UNALIGNED_EXCEPTIONS 0
#define XPAR_IOP_PMODA_MB_USE_BARREL 0
#define XPAR_IOP_PMODA_MB_USE_BRANCH_TARGET_CACHE 0
#define XPAR_IOP_PMODA_MB_USE_CONFIG_RESET 0
#define XPAR_IOP_PMODA_MB_USE_DCACHE 0
#define XPAR_IOP_PMODA_MB_USE_DIV 0
#define XPAR_IOP_PMODA_MB_USE_EXTENDED_FSL_INSTR 0
#define XPAR_IOP_PMODA_MB_USE_EXT_BRK 0
#define XPAR_IOP_PMODA_MB_USE_EXT_NM_BRK 0
#define XPAR_IOP_PMODA_MB_USE_FPU 0
#define XPAR_IOP_PMODA_MB_USE_HW_MUL 0
#define XPAR_IOP_PMODA_MB_USE_ICACHE 0
#define XPAR_IOP_PMODA_MB_USE_INTERRUPT 1
#define XPAR_IOP_PMODA_MB_USE_MMU 0
#define XPAR_IOP_PMODA_MB_USE_MSR_INSTR 0
#define XPAR_IOP_PMODA_MB_USE_NON_SECURE 0
#define XPAR_IOP_PMODA_MB_USE_PCMP_INSTR 0
#define XPAR_IOP_PMODA_MB_USE_REORDER_INSTR 1
#define XPAR_IOP_PMODA_MB_USE_STACK_PROTECTION 0
#define XPAR_IOP_PMODA_MB_COMPONENT_NAME base_mb_1
#define XPAR_IOP_PMODA_MB_EDK_IPTYPE PROCESSOR
#define XPAR_IOP_PMODA_MB_EDK_SPECIAL microblaze
#define XPAR_IOP_PMODA_MB_G_TEMPLATE_LIST 0
#define XPAR_IOP_PMODA_MB_G_USE_EXCEPTIONS 0

/******************************************************************/

#define XPAR_CPU_ID 1
#define XPAR_MICROBLAZE_ID 1
#define XPAR_MICROBLAZE_ADDR_SIZE 32
#define XPAR_MICROBLAZE_ADDR_TAG_BITS 17
#define XPAR_MICROBLAZE_ALLOW_DCACHE_WR 1
#define XPAR_MICROBLAZE_ALLOW_ICACHE_WR 1
#define XPAR_MICROBLAZE_AREA_OPTIMIZED 0
#define XPAR_MICROBLAZE_ASYNC_INTERRUPT 1
#define XPAR_MICROBLAZE_ASYNC_WAKEUP 3
#define XPAR_MICROBLAZE_AVOID_PRIMITIVES 0
#define XPAR_MICROBLAZE_BASE_VECTORS 0x0000000000000000
#define XPAR_MICROBLAZE_BRANCH_TARGET_CACHE_SIZE 0
#define XPAR_MICROBLAZE_CACHE_BYTE_SIZE 8192
#define XPAR_MICROBLAZE_DADDR_SIZE 32
#define XPAR_MICROBLAZE_DATA_SIZE 32
#define XPAR_MICROBLAZE_DCACHE_ADDR_TAG 17
#define XPAR_MICROBLAZE_DCACHE_ALWAYS_USED 0
#define XPAR_MICROBLAZE_DCACHE_BASEADDR 0x00000000
#define XPAR_MICROBLAZE_DCACHE_BYTE_SIZE 8192
#define XPAR_MICROBLAZE_DCACHE_DATA_WIDTH 0
#define XPAR_MICROBLAZE_DCACHE_FORCE_TAG_LUTRAM 0
#define XPAR_MICROBLAZE_DCACHE_HIGHADDR 0x3FFFFFFF
#define XPAR_MICROBLAZE_DCACHE_LINE_LEN 4
#define XPAR_MICROBLAZE_DCACHE_USE_WRITEBACK 0
#define XPAR_MICROBLAZE_DCACHE_VICTIMS 0
#define XPAR_MICROBLAZE_DC_AXI_MON 0
#define XPAR_MICROBLAZE_DEBUG_COUNTER_WIDTH 32
#define XPAR_MICROBLAZE_DEBUG_ENABLED 1
#define XPAR_MICROBLAZE_DEBUG_EVENT_COUNTERS 5
#define XPAR_MICROBLAZE_DEBUG_EXTERNAL_TRACE 0
#define XPAR_MICROBLAZE_DEBUG_INTERFACE 0
#define XPAR_MICROBLAZE_DEBUG_LATENCY_COUNTERS 1
#define XPAR_MICROBLAZE_DEBUG_PROFILE_SIZE 0
#define XPAR_MICROBLAZE_DEBUG_TRACE_ASYNC_RESET 0
#define XPAR_MICROBLAZE_DEBUG_TRACE_SIZE 8192
#define XPAR_MICROBLAZE_DIV_ZERO_EXCEPTION 0
#define XPAR_MICROBLAZE_DP_AXI_MON 0
#define XPAR_MICROBLAZE_DYNAMIC_BUS_SIZING 0
#define XPAR_MICROBLAZE_D_AXI 1
#define XPAR_MICROBLAZE_D_LMB 1
#define XPAR_MICROBLAZE_D_LMB_MON 0
#define XPAR_MICROBLAZE_ECC_USE_CE_EXCEPTION 0
#define XPAR_MICROBLAZE_EDGE_IS_POSITIVE 1
#define XPAR_MICROBLAZE_ENABLE_DISCRETE_PORTS 0
#define XPAR_MICROBLAZE_ENDIANNESS 1
#define XPAR_MICROBLAZE_FAULT_TOLERANT 0
#define XPAR_MICROBLAZE_FPU_EXCEPTION 0
#define XPAR_MICROBLAZE_FREQ 100000000
#define XPAR_MICROBLAZE_FSL_EXCEPTION 0
#define XPAR_MICROBLAZE_FSL_LINKS 0
#define XPAR_MICROBLAZE_IADDR_SIZE 32
#define XPAR_MICROBLAZE_ICACHE_ALWAYS_USED 0
#define XPAR_MICROBLAZE_ICACHE_BASEADDR 0x00000000
#define XPAR_MICROBLAZE_ICACHE_DATA_WIDTH 0
#define XPAR_MICROBLAZE_ICACHE_FORCE_TAG_LUTRAM 0
#define XPAR_MICROBLAZE_ICACHE_HIGHADDR 0x3FFFFFFF
#define XPAR_MICROBLAZE_ICACHE_LINE_LEN 4
#define XPAR_MICROBLAZE_ICACHE_STREAMS 0
#define XPAR_MICROBLAZE_ICACHE_VICTIMS 0
#define XPAR_MICROBLAZE_IC_AXI_MON 0
#define XPAR_MICROBLAZE_ILL_OPCODE_EXCEPTION 0
#define XPAR_MICROBLAZE_IMPRECISE_EXCEPTIONS 0
#define XPAR_MICROBLAZE_INSTR_SIZE 32
#define XPAR_MICROBLAZE_INTERCONNECT 2
#define XPAR_MICROBLAZE_INTERRUPT_IS_EDGE 0
#define XPAR_MICROBLAZE_INTERRUPT_MON 0
#define XPAR_MICROBLAZE_IP_AXI_MON 0
#define XPAR_MICROBLAZE_I_AXI 0
#define XPAR_MICROBLAZE_I_LMB 1
#define XPAR_MICROBLAZE_I_LMB_MON 0
#define XPAR_MICROBLAZE_LMB_DATA_SIZE 32
#define XPAR_MICROBLAZE_LOCKSTEP_MASTER 0
#define XPAR_MICROBLAZE_LOCKSTEP_SELECT 0
#define XPAR_MICROBLAZE_LOCKSTEP_SLAVE 0
#define XPAR_MICROBLAZE_M0_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M0_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M1_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M1_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M2_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M2_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M3_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M3_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M4_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M4_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M5_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M5_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M6_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M6_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M7_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M7_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M8_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M8_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M9_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M9_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M10_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M10_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M11_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M11_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M12_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M12_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M13_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M13_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M14_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M14_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_M15_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M15_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_MMU_DTLB_SIZE 4
#define XPAR_MICROBLAZE_MMU_ITLB_SIZE 2
#define XPAR_MICROBLAZE_MMU_PRIVILEGED_INSTR 0
#define XPAR_MICROBLAZE_MMU_TLB_ACCESS 3
#define XPAR_MICROBLAZE_MMU_ZONES 16
#define XPAR_MICROBLAZE_M_AXI_DC_ADDR_WIDTH 32
#define XPAR_MICROBLAZE_M_AXI_DC_ARUSER_WIDTH 5
#define XPAR_MICROBLAZE_M_AXI_DC_AWUSER_WIDTH 5
#define XPAR_MICROBLAZE_M_AXI_DC_BUSER_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_DC_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M_AXI_DC_EXCLUSIVE_ACCESS 0
#define XPAR_MICROBLAZE_M_AXI_DC_RUSER_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_DC_THREAD_ID_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_DC_USER_SIGNALS 0
#define XPAR_MICROBLAZE_M_AXI_DC_USER_VALUE 31
#define XPAR_MICROBLAZE_M_AXI_DC_WUSER_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_DP_ADDR_WIDTH 32
#define XPAR_MICROBLAZE_M_AXI_DP_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M_AXI_DP_EXCLUSIVE_ACCESS 0
#define XPAR_MICROBLAZE_M_AXI_DP_THREAD_ID_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_D_BUS_EXCEPTION 0
#define XPAR_MICROBLAZE_M_AXI_IC_ADDR_WIDTH 32
#define XPAR_MICROBLAZE_M_AXI_IC_ARUSER_WIDTH 5
#define XPAR_MICROBLAZE_M_AXI_IC_AWUSER_WIDTH 5
#define XPAR_MICROBLAZE_M_AXI_IC_BUSER_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_IC_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M_AXI_IC_RUSER_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_IC_THREAD_ID_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_IC_USER_SIGNALS 0
#define XPAR_MICROBLAZE_M_AXI_IC_USER_VALUE 31
#define XPAR_MICROBLAZE_M_AXI_IC_WUSER_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_IP_ADDR_WIDTH 32
#define XPAR_MICROBLAZE_M_AXI_IP_DATA_WIDTH 32
#define XPAR_MICROBLAZE_M_AXI_IP_THREAD_ID_WIDTH 1
#define XPAR_MICROBLAZE_M_AXI_I_BUS_EXCEPTION 0
#define XPAR_MICROBLAZE_NUMBER_OF_PC_BRK 1
#define XPAR_MICROBLAZE_NUMBER_OF_RD_ADDR_BRK 0
#define XPAR_MICROBLAZE_NUMBER_OF_WR_ADDR_BRK 0
#define XPAR_MICROBLAZE_NUM_SYNC_FF_CLK 2
#define XPAR_MICROBLAZE_NUM_SYNC_FF_CLK_DEBUG 2
#define XPAR_MICROBLAZE_NUM_SYNC_FF_CLK_IRQ 1
#define XPAR_MICROBLAZE_NUM_SYNC_FF_DBG_CLK 1
#define XPAR_MICROBLAZE_NUM_SYNC_FF_DBG_TRACE_CLK 2
#define XPAR_MICROBLAZE_OPCODE_0X0_ILLEGAL 0
#define XPAR_MICROBLAZE_OPTIMIZATION 0
#define XPAR_MICROBLAZE_PC_WIDTH 32
#define XPAR_MICROBLAZE_PIADDR_SIZE 32
#define XPAR_MICROBLAZE_PVR 0
#define XPAR_MICROBLAZE_PVR_USER1 0x00
#define XPAR_MICROBLAZE_PVR_USER2 0x00000000
#define XPAR_MICROBLAZE_RESET_MSR 0x00000000
#define XPAR_MICROBLAZE_RESET_MSR_BIP 0
#define XPAR_MICROBLAZE_RESET_MSR_DCE 0
#define XPAR_MICROBLAZE_RESET_MSR_EE 0
#define XPAR_MICROBLAZE_RESET_MSR_EIP 0
#define XPAR_MICROBLAZE_RESET_MSR_ICE 0
#define XPAR_MICROBLAZE_RESET_MSR_IE 0
#define XPAR_MICROBLAZE_S0_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S0_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S1_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S1_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S2_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S2_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S3_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S3_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S4_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S4_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S5_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S5_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S6_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S6_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S7_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S7_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S8_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S8_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S9_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S9_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S10_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S10_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S11_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S11_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S12_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S12_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S13_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S13_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S14_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S14_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_S15_AXIS_DATA_WIDTH 32
#define XPAR_MICROBLAZE_S15_AXIS_PROTOCOL GENERIC
#define XPAR_MICROBLAZE_SCO 0
#define XPAR_MICROBLAZE_TRACE 0
#define XPAR_MICROBLAZE_UNALIGNED_EXCEPTIONS 0
#define XPAR_MICROBLAZE_USE_BARREL 0
#define XPAR_MICROBLAZE_USE_BRANCH_TARGET_CACHE 0
#define XPAR_MICROBLAZE_USE_CONFIG_RESET 0
#define XPAR_MICROBLAZE_USE_DCACHE 0
#define XPAR_MICROBLAZE_USE_DIV 0
#define XPAR_MICROBLAZE_USE_EXTENDED_FSL_INSTR 0
#define XPAR_MICROBLAZE_USE_EXT_BRK 0
#define XPAR_MICROBLAZE_USE_EXT_NM_BRK 0
#define XPAR_MICROBLAZE_USE_FPU 0
#define XPAR_MICROBLAZE_USE_HW_MUL 0
#define XPAR_MICROBLAZE_USE_ICACHE 0
#define XPAR_MICROBLAZE_USE_INTERRUPT 1
#define XPAR_MICROBLAZE_USE_MMU 0
#define XPAR_MICROBLAZE_USE_MSR_INSTR 0
#define XPAR_MICROBLAZE_USE_NON_SECURE 0
#define XPAR_MICROBLAZE_USE_PCMP_INSTR 0
#define XPAR_MICROBLAZE_USE_REORDER_INSTR 1
#define XPAR_MICROBLAZE_USE_STACK_PROTECTION 0
#define XPAR_MICROBLAZE_COMPONENT_NAME base_mb_1
#define XPAR_MICROBLAZE_EDK_IPTYPE PROCESSOR
#define XPAR_MICROBLAZE_EDK_SPECIAL microblaze
#define XPAR_MICROBLAZE_G_TEMPLATE_LIST 0
#define XPAR_MICROBLAZE_G_USE_EXCEPTIONS 0

/******************************************************************/

#define STDIN_BASEADDRESS 0x00000000
#define STDOUT_BASEADDRESS 0x00000000

/******************************************************************/

/* Platform specific definitions */
#define PLATFORM_MB
 
/* Definitions for sleep timer configuration */
#define XSLEEP_TIMER_IS_DEFAULT_TIMER
 
 
/******************************************************************/
/* Definitions for driver EMACPS */
#define XPAR_XEMACPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_ETHERNET_0 */
#define XPAR_PS7_ETHERNET_0_DEVICE_ID 0
#define XPAR_PS7_ETHERNET_0_BASEADDR 0xE000B000
#define XPAR_PS7_ETHERNET_0_HIGHADDR 0xE000BFFF
#define XPAR_PS7_ETHERNET_0_ENET_CLK_FREQ_HZ 125000000
#define XPAR_PS7_ETHERNET_0_ENET_SLCR_1000MBPS_DIV0 8
#define XPAR_PS7_ETHERNET_0_ENET_SLCR_1000MBPS_DIV1 1
#define XPAR_PS7_ETHERNET_0_ENET_SLCR_100MBPS_DIV0 8
#define XPAR_PS7_ETHERNET_0_ENET_SLCR_100MBPS_DIV1 5
#define XPAR_PS7_ETHERNET_0_ENET_SLCR_10MBPS_DIV0 8
#define XPAR_PS7_ETHERNET_0_ENET_SLCR_10MBPS_DIV1 50
#define XPAR_PS7_ETHERNET_0_ENET_TSU_CLK_FREQ_HZ 0


/******************************************************************/

#define XPAR_PS7_ETHERNET_0_IS_CACHE_COHERENT 0
#define XPAR_XEMACPS_0_IS_CACHE_COHERENT 0
/* Canonical definitions for peripheral PS7_ETHERNET_0 */
#define XPAR_XEMACPS_0_DEVICE_ID XPAR_PS7_ETHERNET_0_DEVICE_ID
#define XPAR_XEMACPS_0_BASEADDR 0xE000B000
#define XPAR_XEMACPS_0_HIGHADDR 0xE000BFFF
#define XPAR_XEMACPS_0_ENET_CLK_FREQ_HZ 125000000
#define XPAR_XEMACPS_0_ENET_SLCR_1000Mbps_DIV0 8
#define XPAR_XEMACPS_0_ENET_SLCR_1000Mbps_DIV1 1
#define XPAR_XEMACPS_0_ENET_SLCR_100Mbps_DIV0 8
#define XPAR_XEMACPS_0_ENET_SLCR_100Mbps_DIV1 5
#define XPAR_XEMACPS_0_ENET_SLCR_10Mbps_DIV0 8
#define XPAR_XEMACPS_0_ENET_SLCR_10Mbps_DIV1 50
#define XPAR_XEMACPS_0_ENET_TSU_CLK_FREQ_HZ 0


/******************************************************************/


/* Definitions for peripheral PS7_M_AXI_GP0 */
#define XPAR_PS7_M_AXI_GP0_S_AXI_BASEADDR 0x40000000
#define XPAR_PS7_M_AXI_GP0_S_AXI_HIGHADDR 0x7FFFFFFF


/* Definitions for peripheral PS7_M_AXI_GP1 */
#define XPAR_PS7_M_AXI_GP1_S_AXI_BASEADDR 0x80000000
#define XPAR_PS7_M_AXI_GP1_S_AXI_HIGHADDR 0xBFFFFFFF


/* Definitions for peripheral PS7_QSPI_LINEAR_0 */
#define XPAR_PS7_QSPI_LINEAR_0_S_AXI_BASEADDR 0xFC000000
#define XPAR_PS7_QSPI_LINEAR_0_S_AXI_HIGHADDR 0xFCFFFFFF


/******************************************************************/

/* Definitions for driver GPIO */
#define XPAR_XGPIO_NUM_INSTANCES 1

/* Definitions for peripheral IOP_PMODA_GPIO */
#define XPAR_IOP_PMODA_GPIO_BASEADDR 0x40000000
#define XPAR_IOP_PMODA_GPIO_HIGHADDR 0x4000FFFF
#define XPAR_IOP_PMODA_GPIO_DEVICE_ID 0
#define XPAR_IOP_PMODA_GPIO_INTERRUPT_PRESENT 0
#define XPAR_IOP_PMODA_GPIO_IS_DUAL 0


/******************************************************************/

/* Canonical definitions for peripheral IOP_PMODA_GPIO */
#define XPAR_GPIO_0_BASEADDR 0x40000000
#define XPAR_GPIO_0_HIGHADDR 0x4000FFFF
#define XPAR_GPIO_0_DEVICE_ID XPAR_IOP_PMODA_GPIO_DEVICE_ID
#define XPAR_GPIO_0_INTERRUPT_PRESENT 0
#define XPAR_GPIO_0_IS_DUAL 0


/******************************************************************/

/* Definitions for driver GPIOPS */
#define XPAR_XGPIOPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_GPIO_0 */
#define XPAR_PS7_GPIO_0_DEVICE_ID 0
#define XPAR_PS7_GPIO_0_BASEADDR 0xE000A000
#define XPAR_PS7_GPIO_0_HIGHADDR 0xE000AFFF


/******************************************************************/

/* Canonical definitions for peripheral PS7_GPIO_0 */
#define XPAR_XGPIOPS_0_DEVICE_ID XPAR_PS7_GPIO_0_DEVICE_ID
#define XPAR_XGPIOPS_0_BASEADDR 0xE000A000
#define XPAR_XGPIOPS_0_HIGHADDR 0xE000AFFF


/******************************************************************/

/* Definitions for driver IIC */
#define XPAR_XIIC_NUM_INSTANCES 1

/* Definitions for peripheral IOP_PMODA_IIC */
#define XPAR_IOP_PMODA_IIC_DEVICE_ID 0
#define XPAR_IOP_PMODA_IIC_BASEADDR 0x40800000
#define XPAR_IOP_PMODA_IIC_HIGHADDR 0x4080FFFF
#define XPAR_IOP_PMODA_IIC_TEN_BIT_ADR 0
#define XPAR_IOP_PMODA_IIC_GPO_WIDTH 1


/******************************************************************/

/* Canonical definitions for peripheral IOP_PMODA_IIC */
#define XPAR_IIC_0_DEVICE_ID XPAR_IOP_PMODA_IIC_DEVICE_ID
#define XPAR_IIC_0_BASEADDR 0x40800000
#define XPAR_IIC_0_HIGHADDR 0x4080FFFF
#define XPAR_IIC_0_TEN_BIT_ADR 0
#define XPAR_IIC_0_GPO_WIDTH 1


/******************************************************************/

/* Definitions for driver IICPS */
#define XPAR_XIICPS_NUM_INSTANCES 2

/* Definitions for peripheral PS7_I2C_0 */
#define XPAR_PS7_I2C_0_DEVICE_ID 0
#define XPAR_PS7_I2C_0_BASEADDR 0xE0004000
#define XPAR_PS7_I2C_0_HIGHADDR 0xE0004FFF
#define XPAR_PS7_I2C_0_I2C_CLK_FREQ_HZ 108333336


/* Definitions for peripheral PS7_I2C_1 */
#define XPAR_PS7_I2C_1_DEVICE_ID 1
#define XPAR_PS7_I2C_1_BASEADDR 0xE0005000
#define XPAR_PS7_I2C_1_HIGHADDR 0xE0005FFF
#define XPAR_PS7_I2C_1_I2C_CLK_FREQ_HZ 108333336


/******************************************************************/

/* Canonical definitions for peripheral PS7_I2C_0 */
#define XPAR_XIICPS_0_DEVICE_ID XPAR_PS7_I2C_0_DEVICE_ID
#define XPAR_XIICPS_0_BASEADDR 0xE0004000
#define XPAR_XIICPS_0_HIGHADDR 0xE0004FFF
#define XPAR_XIICPS_0_I2C_CLK_FREQ_HZ 108333336

/* Canonical definitions for peripheral PS7_I2C_1 */
#define XPAR_XIICPS_1_DEVICE_ID XPAR_PS7_I2C_1_DEVICE_ID
#define XPAR_XIICPS_1_BASEADDR 0xE0005000
#define XPAR_XIICPS_1_HIGHADDR 0xE0005FFF
#define XPAR_XIICPS_1_I2C_CLK_FREQ_HZ 108333336


/******************************************************************/

#define XPAR_INTC_MAX_NUM_INTR_INPUTS 3
#define XPAR_XINTC_HAS_IPR 1
#define XPAR_XINTC_HAS_SIE 1
#define XPAR_XINTC_HAS_CIE 1
#define XPAR_XINTC_HAS_IVR 1
/* Definitions for driver INTC */
#define XPAR_XINTC_NUM_INSTANCES 1

/* Definitions for peripheral IOP_PMODA_INTC */
#define XPAR_IOP_PMODA_INTC_DEVICE_ID 0
#define XPAR_IOP_PMODA_INTC_BASEADDR 0x41200000
#define XPAR_IOP_PMODA_INTC_HIGHADDR 0x4120FFFF
#define XPAR_IOP_PMODA_INTC_KIND_OF_INTR 0xFFFFFFFA
#define XPAR_IOP_PMODA_INTC_HAS_FAST 0
#define XPAR_IOP_PMODA_INTC_IVAR_RESET_VALUE 0x0000000000000010
#define XPAR_IOP_PMODA_INTC_NUM_INTR_INPUTS 3
#define XPAR_IOP_PMODA_INTC_ADDR_WIDTH 32


/******************************************************************/

#define XPAR_INTC_SINGLE_BASEADDR 0x41200000
#define XPAR_INTC_SINGLE_HIGHADDR 0x4120FFFF
#define XPAR_INTC_SINGLE_DEVICE_ID XPAR_IOP_PMODA_INTC_DEVICE_ID
#define XPAR_IOP_PMODA_INTC_TYPE 0U
#define XPAR_IOP_PMODA_IIC_IIC2INTC_IRPT_MASK 0X000001U
#define XPAR_IOP_PMODA_INTC_IOP_PMODA_IIC_IIC2INTC_IRPT_INTR 0U
#define XPAR_IOP_PMODA_SPI_IP2INTC_IRPT_MASK 0X000002U
#define XPAR_IOP_PMODA_INTC_IOP_PMODA_SPI_IP2INTC_IRPT_INTR 1U
#define XPAR_IOP_PMODA_TIMER_INTERRUPT_MASK 0X000004U
#define XPAR_IOP_PMODA_INTC_IOP_PMODA_TIMER_INTERRUPT_INTR 2U

/******************************************************************/

/* Canonical definitions for peripheral IOP_PMODA_INTC */
#define XPAR_INTC_0_DEVICE_ID XPAR_IOP_PMODA_INTC_DEVICE_ID
#define XPAR_INTC_0_BASEADDR 0x41200000U
#define XPAR_INTC_0_HIGHADDR 0x4120FFFFU
#define XPAR_INTC_0_KIND_OF_INTR 0xFFFFFFFAU
#define XPAR_INTC_0_HAS_FAST 0U
#define XPAR_INTC_0_IVAR_RESET_VALUE 0x0000000000000010U
#define XPAR_INTC_0_NUM_INTR_INPUTS 3U
#define XPAR_INTC_0_ADDR_WIDTH 32U
#define XPAR_INTC_0_INTC_TYPE 0U

#define XPAR_INTC_0_IIC_0_VEC_ID XPAR_IOP_PMODA_INTC_IOP_PMODA_IIC_IIC2INTC_IRPT_INTR
#define XPAR_INTC_0_SPI_0_VEC_ID XPAR_IOP_PMODA_INTC_IOP_PMODA_SPI_IP2INTC_IRPT_INTR
#define XPAR_INTC_0_TMRCTR_0_VEC_ID XPAR_IOP_PMODA_INTC_IOP_PMODA_TIMER_INTERRUPT_INTR

/******************************************************************/

/* Definitions for driver INTRGPIO */
#define XPAR_INTRGPIO_NUM_INSTANCES 1

/* Definitions for peripheral IOP_PMODA_INTR */
#define XPAR_IOP_PMODA_INTR_BASEADDR 0x40010000
#define XPAR_IOP_PMODA_INTR_HIGHADDR 0x4001FFFF
#define XPAR_IOP_PMODA_INTR_DEVICE_ID 0
#define XPAR_IOP_PMODA_INTR_INTERRUPT_PRESENT 0
#define XPAR_IOP_PMODA_INTR_IS_DUAL 0


/******************************************************************/

/* Definitions for driver IO_SWITCH */
#define XPAR_IO_SWITCH_NUM_INSTANCES 1

/* Definitions for peripheral IOP_PMODA_IO_SWITCH */
#define XPAR_IOP_PMODA_IO_SWITCH_DEVICE_ID 0
#define XPAR_IOP_PMODA_IO_SWITCH_S_AXI_BASEADDR 0x44A20000
#define XPAR_IOP_PMODA_IO_SWITCH_S_AXI_HIGHADDR 0x44A2FFFF
#define XPAR_IOP_PMODA_IO_SWITCH_INTERFACE_TYPE 1
#define XPAR_IOP_PMODA_IO_SWITCH_IO_SWITCH_WIDTH 8
#define XPAR_IOP_PMODA_IO_SWITCH_NUM_PWMS 1
#define XPAR_IOP_PMODA_IO_SWITCH_NUM_TIMERS 1
#define XPAR_IOP_PMODA_IO_SWITCH_NUM_SS 1


/******************************************************************/

/* Canonical definitions for peripheral IOP_PMODA_IO_SWITCH */
#define XPAR_IO_SWITCH_0_DEVICE_ID XPAR_IOP_PMODA_IO_SWITCH_DEVICE_ID
#define XPAR_IO_SWITCH_0_S_AXI_BASEADDR 0x44A20000
#define XPAR_IO_SWITCH_0_S_AXI_HIGHADDR 0x44A2FFFF
#define XPAR_IO_SWITCH_0_INTERFACE_TYPE 1
#define XPAR_IO_SWITCH_0_IO_SWITCH_WIDTH 8
#define XPAR_IO_SWITCH_0_NUM_PWMS 1
#define XPAR_IO_SWITCH_0_NUM_TIMERS 1
#define XPAR_IO_SWITCH_0_NUM_SS 1


/******************************************************************/

/******* PARAMETERS RELATED TO IPs CONNECTED TO IO_SWITCH *******/
#define XPAR_IOP_PMODA_IO_SWITCH_GPIO_BASEADDR 0x40000000
#define XPAR_IO_SWITCH_0_GPIO_BASEADDR 0x40000000
#define XPAR_IOP_PMODA_IO_SWITCH_I2C0_BASEADDR 0x40800000
#define XPAR_IO_SWITCH_0_I2C0_BASEADDR 0x40800000
#define XPAR_IOP_PMODA_IO_SWITCH_SPI0_BASEADDR 0x44A10000
#define XPAR_IO_SWITCH_0_SPI0_BASEADDR 0x44A10000
#define XPAR_IOP_PMODA_IO_SWITCH_PWM0_BASEADDR 0x41C00000
#define XPAR_IO_SWITCH_0_PWM0_BASEADDR 0x41C00000
#define XPAR_IOP_PMODA_IO_SWITCH_TIMER0_BASEADDR 0x41C00000
#define XPAR_IO_SWITCH_0_TIMER0_BASEADDR 0x41C00000
/* Definitions for driver QSPIPS */
#define XPAR_XQSPIPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_QSPI_0 */
#define XPAR_PS7_QSPI_0_DEVICE_ID 0
#define XPAR_PS7_QSPI_0_BASEADDR 0xE000D000
#define XPAR_PS7_QSPI_0_HIGHADDR 0xE000DFFF
#define XPAR_PS7_QSPI_0_QSPI_CLK_FREQ_HZ 200000000
#define XPAR_PS7_QSPI_0_QSPI_MODE 0
#define XPAR_PS7_QSPI_0_QSPI_BUS_WIDTH 2


/******************************************************************/

/* Canonical definitions for peripheral PS7_QSPI_0 */
#define XPAR_XQSPIPS_0_DEVICE_ID XPAR_PS7_QSPI_0_DEVICE_ID
#define XPAR_XQSPIPS_0_BASEADDR 0xE000D000
#define XPAR_XQSPIPS_0_HIGHADDR 0xE000DFFF
#define XPAR_XQSPIPS_0_QSPI_CLK_FREQ_HZ 200000000
#define XPAR_XQSPIPS_0_QSPI_MODE 0
#define XPAR_XQSPIPS_0_QSPI_BUS_WIDTH 2


/******************************************************************/

/* Definitions for driver SDPS */
#define XPAR_XSDPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_SD_0 */
#define XPAR_PS7_SD_0_DEVICE_ID 0
#define XPAR_PS7_SD_0_BASEADDR 0xE0100000
#define XPAR_PS7_SD_0_HIGHADDR 0xE0100FFF
#define XPAR_PS7_SD_0_SDIO_CLK_FREQ_HZ 50000000
#define XPAR_PS7_SD_0_HAS_CD 1
#define XPAR_PS7_SD_0_HAS_WP 0
#define XPAR_PS7_SD_0_BUS_WIDTH 0
#define XPAR_PS7_SD_0_MIO_BANK 0
#define XPAR_PS7_SD_0_HAS_EMIO 0


/******************************************************************/

#define XPAR_PS7_SD_0_IS_CACHE_COHERENT 0
/* Canonical definitions for peripheral PS7_SD_0 */
#define XPAR_XSDPS_0_DEVICE_ID XPAR_PS7_SD_0_DEVICE_ID
#define XPAR_XSDPS_0_BASEADDR 0xE0100000
#define XPAR_XSDPS_0_HIGHADDR 0xE0100FFF
#define XPAR_XSDPS_0_SDIO_CLK_FREQ_HZ 50000000
#define XPAR_XSDPS_0_HAS_CD 1
#define XPAR_XSDPS_0_HAS_WP 0
#define XPAR_XSDPS_0_BUS_WIDTH 0
#define XPAR_XSDPS_0_MIO_BANK 0
#define XPAR_XSDPS_0_HAS_EMIO 0
#define XPAR_XSDPS_0_IS_CACHE_COHERENT 0


/******************************************************************/

/* Definitions for driver SPI */
#define XPAR_XSPI_NUM_INSTANCES 1U

/* Definitions for peripheral IOP_PMODA_SPI */
#define XPAR_IOP_PMODA_SPI_DEVICE_ID 0U
#define XPAR_IOP_PMODA_SPI_BASEADDR 0x44A10000U
#define XPAR_IOP_PMODA_SPI_HIGHADDR 0x44A1FFFFU
#define XPAR_IOP_PMODA_SPI_FIFO_DEPTH 16U
#define XPAR_IOP_PMODA_SPI_FIFO_EXIST 1U
#define XPAR_IOP_PMODA_SPI_SPI_SLAVE_ONLY 0U
#define XPAR_IOP_PMODA_SPI_NUM_SS_BITS 1U
#define XPAR_IOP_PMODA_SPI_NUM_TRANSFER_BITS 8U
#define XPAR_IOP_PMODA_SPI_SPI_MODE 0U
#define XPAR_IOP_PMODA_SPI_TYPE_OF_AXI4_INTERFACE 0U
#define XPAR_IOP_PMODA_SPI_AXI4_BASEADDR 0U
#define XPAR_IOP_PMODA_SPI_AXI4_HIGHADDR 0U
#define XPAR_IOP_PMODA_SPI_XIP_MODE 0U

/* Canonical definitions for peripheral IOP_PMODA_SPI */
#define XPAR_SPI_0_DEVICE_ID 0U
#define XPAR_SPI_0_BASEADDR 0x44A10000U
#define XPAR_SPI_0_HIGHADDR 0x44A1FFFFU
#define XPAR_SPI_0_FIFO_DEPTH 16U
#define XPAR_SPI_0_FIFO_EXIST 1U
#define XPAR_SPI_0_SPI_SLAVE_ONLY 0U
#define XPAR_SPI_0_NUM_SS_BITS 1U
#define XPAR_SPI_0_NUM_TRANSFER_BITS 8U
#define XPAR_SPI_0_SPI_MODE 0U
#define XPAR_SPI_0_TYPE_OF_AXI4_INTERFACE 0U
#define XPAR_SPI_0_AXI4_BASEADDR 0U
#define XPAR_SPI_0_AXI4_HIGHADDR 0U
#define XPAR_SPI_0_XIP_MODE 0U
#define XPAR_SPI_0_USE_STARTUP 0U



/******************************************************************/

/* Definitions for driver TMRCTR */
#define XPAR_XTMRCTR_NUM_INSTANCES 1U

/* Definitions for peripheral IOP_PMODA_TIMER */
#define XPAR_IOP_PMODA_TIMER_DEVICE_ID 0U
#define XPAR_IOP_PMODA_TIMER_BASEADDR 0x41C00000U
#define XPAR_IOP_PMODA_TIMER_HIGHADDR 0x41C0FFFFU
#define XPAR_IOP_PMODA_TIMER_CLOCK_FREQ_HZ 100000000U


/******************************************************************/

/* Canonical definitions for peripheral IOP_PMODA_TIMER */
#define XPAR_TMRCTR_0_DEVICE_ID 0U
#define XPAR_TMRCTR_0_BASEADDR 0x41C00000U
#define XPAR_TMRCTR_0_HIGHADDR 0x41C0FFFFU
#define XPAR_TMRCTR_0_CLOCK_FREQ_HZ XPAR_IOP_PMODA_TIMER_CLOCK_FREQ_HZ

/******************************************************************/

/* Definitions for driver UARTPS */
#define XPAR_XUARTPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_UART_0 */
#define XPAR_PS7_UART_0_DEVICE_ID 0
#define XPAR_PS7_UART_0_BASEADDR 0xE0000000
#define XPAR_PS7_UART_0_HIGHADDR 0xE0000FFF
#define XPAR_PS7_UART_0_UART_CLK_FREQ_HZ 100000000
#define XPAR_PS7_UART_0_HAS_MODEM 0


/******************************************************************/

/* Canonical definitions for peripheral PS7_UART_0 */
#define XPAR_XUARTPS_0_DEVICE_ID XPAR_PS7_UART_0_DEVICE_ID
#define XPAR_XUARTPS_0_BASEADDR 0xE0000000
#define XPAR_XUARTPS_0_HIGHADDR 0xE0000FFF
#define XPAR_XUARTPS_0_UART_CLK_FREQ_HZ 100000000
#define XPAR_XUARTPS_0_HAS_MODEM 0


/******************************************************************/

/* Definitions for driver USBPS */
#define XPAR_XUSBPS_NUM_INSTANCES 1

/* Definitions for peripheral PS7_USB_0 */
#define XPAR_PS7_USB_0_DEVICE_ID 0
#define XPAR_PS7_USB_0_BASEADDR 0xE0002000
#define XPAR_PS7_USB_0_HIGHADDR 0xE0002FFF


/******************************************************************/

/* Canonical definitions for peripheral PS7_USB_0 */
#define XPAR_XUSBPS_0_DEVICE_ID XPAR_PS7_USB_0_DEVICE_ID
#define XPAR_XUSBPS_0_BASEADDR 0xE0002000
#define XPAR_XUSBPS_0_HIGHADDR 0xE0002FFF


/******************************************************************/

#endif  /* end of protection macro */
