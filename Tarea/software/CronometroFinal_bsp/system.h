/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'cpu' in SOPC Builder design 'platform'
 * SOPC Builder design path: ../../platform.sopcinfo
 *
 * Generated: Sat Aug 19 12:43:14 CST 2023
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00000020
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x15
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00000020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 0
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0xc
#define ALT_CPU_NAME "cpu"
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00000000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00000020
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x15
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00000020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 0
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0xc
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00000000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_GEN2


/*
 * RAM configuration
 *
 */

#define ALT_MODULE_CLASS_RAM altera_avalon_onchip_memory2
#define RAM_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define RAM_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define RAM_BASE 0x10000
#define RAM_CONTENTS_INFO ""
#define RAM_DUAL_PORT 0
#define RAM_GUI_RAM_BLOCK_TYPE "AUTO"
#define RAM_INIT_CONTENTS_FILE "platform_RAM"
#define RAM_INIT_MEM_CONTENT 1
#define RAM_INSTANCE_ID "NONE"
#define RAM_IRQ -1
#define RAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RAM_NAME "/dev/RAM"
#define RAM_NON_DEFAULT_INIT_FILE_ENABLED 0
#define RAM_RAM_BLOCK_TYPE "AUTO"
#define RAM_READ_DURING_WRITE_MODE "DONT_CARE"
#define RAM_SINGLE_CLOCK_OP 0
#define RAM_SIZE_MULTIPLE 1
#define RAM_SIZE_VALUE 4096
#define RAM_SPAN 4096
#define RAM_TYPE "altera_avalon_onchip_memory2"
#define RAM_WRITABLE 1


/*
 * ROM configuration
 *
 */

#define ALT_MODULE_CLASS_ROM altera_avalon_onchip_memory2
#define ROM_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ROM_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ROM_BASE 0x0
#define ROM_CONTENTS_INFO ""
#define ROM_DUAL_PORT 0
#define ROM_GUI_RAM_BLOCK_TYPE "AUTO"
#define ROM_INIT_CONTENTS_FILE "platform_ROM"
#define ROM_INIT_MEM_CONTENT 1
#define ROM_INSTANCE_ID "NONE"
#define ROM_IRQ -1
#define ROM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ROM_NAME "/dev/ROM"
#define ROM_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ROM_RAM_BLOCK_TYPE "AUTO"
#define ROM_READ_DURING_WRITE_MODE "DONT_CARE"
#define ROM_SINGLE_CLOCK_OP 0
#define ROM_SIZE_MULTIPLE 1
#define ROM_SIZE_VALUE 4096
#define ROM_SPAN 4096
#define ROM_TYPE "altera_avalon_onchip_memory2"
#define ROM_WRITABLE 0


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone V"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/null"
#define ALT_STDERR_BASE 0x0
#define ALT_STDERR_DEV null
#define ALT_STDERR_TYPE ""
#define ALT_STDIN "/dev/null"
#define ALT_STDIN_BASE 0x0
#define ALT_STDIN_DEV null
#define ALT_STDIN_TYPE ""
#define ALT_STDOUT "/dev/null"
#define ALT_STDOUT_BASE 0x0
#define ALT_STDOUT_DEV null
#define ALT_STDOUT_TYPE ""
#define ALT_SYSTEM_NAME "platform"


/*
 * button configuration
 *
 */

#define ALT_MODULE_CLASS_button altera_avalon_pio
#define BUTTON_BASE 0x90000
#define BUTTON_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTON_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON_CAPTURE 1
#define BUTTON_DATA_WIDTH 1
#define BUTTON_DO_TEST_BENCH_WIRING 0
#define BUTTON_DRIVEN_SIM_VALUE 0
#define BUTTON_EDGE_TYPE "FALLING"
#define BUTTON_FREQ 50000000
#define BUTTON_HAS_IN 1
#define BUTTON_HAS_OUT 0
#define BUTTON_HAS_TRI 0
#define BUTTON_IRQ 2
#define BUTTON_IRQ_INTERRUPT_CONTROLLER_ID 0
#define BUTTON_IRQ_TYPE "LEVEL"
#define BUTTON_NAME "/dev/button"
#define BUTTON_RESET_VALUE 0
#define BUTTON_SPAN 16
#define BUTTON_TYPE "altera_avalon_pio"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 4
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * segmentos_1 configuration
 *
 */

#define ALT_MODULE_CLASS_segmentos_1 altera_avalon_pio
#define SEGMENTOS_1_BASE 0x40000
#define SEGMENTOS_1_BIT_CLEARING_EDGE_REGISTER 0
#define SEGMENTOS_1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEGMENTOS_1_CAPTURE 0
#define SEGMENTOS_1_DATA_WIDTH 7
#define SEGMENTOS_1_DO_TEST_BENCH_WIRING 0
#define SEGMENTOS_1_DRIVEN_SIM_VALUE 0
#define SEGMENTOS_1_EDGE_TYPE "NONE"
#define SEGMENTOS_1_FREQ 50000000
#define SEGMENTOS_1_HAS_IN 0
#define SEGMENTOS_1_HAS_OUT 1
#define SEGMENTOS_1_HAS_TRI 0
#define SEGMENTOS_1_IRQ -1
#define SEGMENTOS_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEGMENTOS_1_IRQ_TYPE "NONE"
#define SEGMENTOS_1_NAME "/dev/segmentos_1"
#define SEGMENTOS_1_RESET_VALUE 0
#define SEGMENTOS_1_SPAN 16
#define SEGMENTOS_1_TYPE "altera_avalon_pio"


/*
 * segmentos_2 configuration
 *
 */

#define ALT_MODULE_CLASS_segmentos_2 altera_avalon_pio
#define SEGMENTOS_2_BASE 0x50000
#define SEGMENTOS_2_BIT_CLEARING_EDGE_REGISTER 0
#define SEGMENTOS_2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEGMENTOS_2_CAPTURE 0
#define SEGMENTOS_2_DATA_WIDTH 7
#define SEGMENTOS_2_DO_TEST_BENCH_WIRING 0
#define SEGMENTOS_2_DRIVEN_SIM_VALUE 0
#define SEGMENTOS_2_EDGE_TYPE "NONE"
#define SEGMENTOS_2_FREQ 50000000
#define SEGMENTOS_2_HAS_IN 0
#define SEGMENTOS_2_HAS_OUT 1
#define SEGMENTOS_2_HAS_TRI 0
#define SEGMENTOS_2_IRQ -1
#define SEGMENTOS_2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEGMENTOS_2_IRQ_TYPE "NONE"
#define SEGMENTOS_2_NAME "/dev/segmentos_2"
#define SEGMENTOS_2_RESET_VALUE 0
#define SEGMENTOS_2_SPAN 16
#define SEGMENTOS_2_TYPE "altera_avalon_pio"


/*
 * segmentos_3 configuration
 *
 */

#define ALT_MODULE_CLASS_segmentos_3 altera_avalon_pio
#define SEGMENTOS_3_BASE 0x60000
#define SEGMENTOS_3_BIT_CLEARING_EDGE_REGISTER 0
#define SEGMENTOS_3_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEGMENTOS_3_CAPTURE 0
#define SEGMENTOS_3_DATA_WIDTH 7
#define SEGMENTOS_3_DO_TEST_BENCH_WIRING 0
#define SEGMENTOS_3_DRIVEN_SIM_VALUE 0
#define SEGMENTOS_3_EDGE_TYPE "NONE"
#define SEGMENTOS_3_FREQ 50000000
#define SEGMENTOS_3_HAS_IN 0
#define SEGMENTOS_3_HAS_OUT 1
#define SEGMENTOS_3_HAS_TRI 0
#define SEGMENTOS_3_IRQ -1
#define SEGMENTOS_3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEGMENTOS_3_IRQ_TYPE "NONE"
#define SEGMENTOS_3_NAME "/dev/segmentos_3"
#define SEGMENTOS_3_RESET_VALUE 0
#define SEGMENTOS_3_SPAN 16
#define SEGMENTOS_3_TYPE "altera_avalon_pio"


/*
 * segmentos_4 configuration
 *
 */

#define ALT_MODULE_CLASS_segmentos_4 altera_avalon_pio
#define SEGMENTOS_4_BASE 0x70000
#define SEGMENTOS_4_BIT_CLEARING_EDGE_REGISTER 0
#define SEGMENTOS_4_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEGMENTOS_4_CAPTURE 0
#define SEGMENTOS_4_DATA_WIDTH 7
#define SEGMENTOS_4_DO_TEST_BENCH_WIRING 0
#define SEGMENTOS_4_DRIVEN_SIM_VALUE 0
#define SEGMENTOS_4_EDGE_TYPE "NONE"
#define SEGMENTOS_4_FREQ 50000000
#define SEGMENTOS_4_HAS_IN 0
#define SEGMENTOS_4_HAS_OUT 1
#define SEGMENTOS_4_HAS_TRI 0
#define SEGMENTOS_4_IRQ -1
#define SEGMENTOS_4_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEGMENTOS_4_IRQ_TYPE "NONE"
#define SEGMENTOS_4_NAME "/dev/segmentos_4"
#define SEGMENTOS_4_RESET_VALUE 0
#define SEGMENTOS_4_SPAN 16
#define SEGMENTOS_4_TYPE "altera_avalon_pio"


/*
 * segmentos_5 configuration
 *
 */

#define ALT_MODULE_CLASS_segmentos_5 altera_avalon_pio
#define SEGMENTOS_5_BASE 0x110000
#define SEGMENTOS_5_BIT_CLEARING_EDGE_REGISTER 0
#define SEGMENTOS_5_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEGMENTOS_5_CAPTURE 0
#define SEGMENTOS_5_DATA_WIDTH 7
#define SEGMENTOS_5_DO_TEST_BENCH_WIRING 0
#define SEGMENTOS_5_DRIVEN_SIM_VALUE 0
#define SEGMENTOS_5_EDGE_TYPE "NONE"
#define SEGMENTOS_5_FREQ 50000000
#define SEGMENTOS_5_HAS_IN 0
#define SEGMENTOS_5_HAS_OUT 1
#define SEGMENTOS_5_HAS_TRI 0
#define SEGMENTOS_5_IRQ -1
#define SEGMENTOS_5_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEGMENTOS_5_IRQ_TYPE "NONE"
#define SEGMENTOS_5_NAME "/dev/segmentos_5"
#define SEGMENTOS_5_RESET_VALUE 0
#define SEGMENTOS_5_SPAN 16
#define SEGMENTOS_5_TYPE "altera_avalon_pio"


/*
 * segmentos_6 configuration
 *
 */

#define ALT_MODULE_CLASS_segmentos_6 altera_avalon_pio
#define SEGMENTOS_6_BASE 0x120000
#define SEGMENTOS_6_BIT_CLEARING_EDGE_REGISTER 0
#define SEGMENTOS_6_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SEGMENTOS_6_CAPTURE 0
#define SEGMENTOS_6_DATA_WIDTH 7
#define SEGMENTOS_6_DO_TEST_BENCH_WIRING 0
#define SEGMENTOS_6_DRIVEN_SIM_VALUE 0
#define SEGMENTOS_6_EDGE_TYPE "NONE"
#define SEGMENTOS_6_FREQ 50000000
#define SEGMENTOS_6_HAS_IN 0
#define SEGMENTOS_6_HAS_OUT 1
#define SEGMENTOS_6_HAS_TRI 0
#define SEGMENTOS_6_IRQ -1
#define SEGMENTOS_6_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEGMENTOS_6_IRQ_TYPE "NONE"
#define SEGMENTOS_6_NAME "/dev/segmentos_6"
#define SEGMENTOS_6_RESET_VALUE 0
#define SEGMENTOS_6_SPAN 16
#define SEGMENTOS_6_TYPE "altera_avalon_pio"


/*
 * switchs configuration
 *
 */

#define ALT_MODULE_CLASS_switchs altera_avalon_pio
#define SWITCHS_BASE 0x80000
#define SWITCHS_BIT_CLEARING_EDGE_REGISTER 0
#define SWITCHS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SWITCHS_CAPTURE 0
#define SWITCHS_DATA_WIDTH 2
#define SWITCHS_DO_TEST_BENCH_WIRING 0
#define SWITCHS_DRIVEN_SIM_VALUE 0
#define SWITCHS_EDGE_TYPE "NONE"
#define SWITCHS_FREQ 50000000
#define SWITCHS_HAS_IN 1
#define SWITCHS_HAS_OUT 0
#define SWITCHS_HAS_TRI 0
#define SWITCHS_IRQ -1
#define SWITCHS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SWITCHS_IRQ_TYPE "NONE"
#define SWITCHS_NAME "/dev/switchs"
#define SWITCHS_RESET_VALUE 0
#define SWITCHS_SPAN 16
#define SWITCHS_TYPE "altera_avalon_pio"


/*
 * timer_MS configuration
 *
 */

#define ALT_MODULE_CLASS_timer_MS altera_avalon_timer
#define TIMER_MS_ALWAYS_RUN 1
#define TIMER_MS_BASE 0x30000
#define TIMER_MS_COUNTER_SIZE 32
#define TIMER_MS_FIXED_PERIOD 1
#define TIMER_MS_FREQ 50000000
#define TIMER_MS_IRQ 1
#define TIMER_MS_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_MS_LOAD_VALUE 49999
#define TIMER_MS_MULT 0.001
#define TIMER_MS_NAME "/dev/timer_MS"
#define TIMER_MS_PERIOD 1
#define TIMER_MS_PERIOD_UNITS "ms"
#define TIMER_MS_RESET_OUTPUT 0
#define TIMER_MS_SNAPSHOT 0
#define TIMER_MS_SPAN 32
#define TIMER_MS_TICKS_PER_SEC 1000
#define TIMER_MS_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_MS_TYPE "altera_avalon_timer"


/*
 * timer_S configuration
 *
 */

#define ALT_MODULE_CLASS_timer_S altera_avalon_timer
#define TIMER_S_ALWAYS_RUN 1
#define TIMER_S_BASE 0x20000
#define TIMER_S_COUNTER_SIZE 32
#define TIMER_S_FIXED_PERIOD 1
#define TIMER_S_FREQ 50000000
#define TIMER_S_IRQ 0
#define TIMER_S_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_S_LOAD_VALUE 49999999
#define TIMER_S_MULT 1.0
#define TIMER_S_NAME "/dev/timer_S"
#define TIMER_S_PERIOD 1
#define TIMER_S_PERIOD_UNITS "s"
#define TIMER_S_RESET_OUTPUT 0
#define TIMER_S_SNAPSHOT 0
#define TIMER_S_SPAN 32
#define TIMER_S_TICKS_PER_SEC 1
#define TIMER_S_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_S_TYPE "altera_avalon_timer"


/*
 * timer_min configuration
 *
 */

#define ALT_MODULE_CLASS_timer_min altera_avalon_timer
#define TIMER_MIN_ALWAYS_RUN 1
#define TIMER_MIN_BASE 0x100000
#define TIMER_MIN_COUNTER_SIZE 32
#define TIMER_MIN_FIXED_PERIOD 1
#define TIMER_MIN_FREQ 50000000
#define TIMER_MIN_IRQ 3
#define TIMER_MIN_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_MIN_LOAD_VALUE -1294967297
#define TIMER_MIN_MULT 1.0
#define TIMER_MIN_NAME "/dev/timer_min"
#define TIMER_MIN_PERIOD 60
#define TIMER_MIN_PERIOD_UNITS "s"
#define TIMER_MIN_RESET_OUTPUT 0
#define TIMER_MIN_SNAPSHOT 0
#define TIMER_MIN_SPAN 32
#define TIMER_MIN_TICKS_PER_SEC 0
#define TIMER_MIN_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_MIN_TYPE "altera_avalon_timer"

#endif /* __SYSTEM_H_ */
