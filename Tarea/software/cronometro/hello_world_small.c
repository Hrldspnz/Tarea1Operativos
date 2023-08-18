/* 
 * "Small Hello World" example. 
 * 
 * This example prints 'Hello from Nios II' to the STDOUT stream. It runs on
 * the Nios II 'standard', 'full_featured', 'fast', and 'low_cost' example 
 * designs. It requires a STDOUT  device in your system's hardware. 
 *
 * The purpose of this example is to demonstrate the smallest possible Hello 
 * World application, using the Nios II HAL library.  The memory footprint
 * of this hosted application is ~332 bytes by default using the standard 
 * reference design.  For a more fully featured Hello World application
 * example, see the example titled "Hello World".
 *
 * The memory footprint of this example has been reduced by making the
 * following changes to the normal "Hello World" example.
 * Check in the Nios II Software Developers Manual for a more complete 
 * description.
 * 
 * In the SW Application project (small_hello_world):
 *
 *  - In the C/C++ Build page
 * 
 *    - Set the Optimization Level to -Os
 * 
 * In System Library project (small_hello_world_syslib):
 *  - In the C/C++ Build page
 * 
 *    - Set the Optimization Level to -Os
 * 
 *    - Define the preprocessor option ALT_NO_INSTRUCTION_EMULATION 
 *      This removes software exception handling, which means that you cannot 
 *      run code compiled for Nios II cpu with a hardware multiplier on a core 
 *      without a the multiply unit. Check the Nios II Software Developers 
 *      Manual for more details.
 *
 *  - In the System Library page:
 *    - Set Periodic system timer and Timestamp timer to none
 *      This prevents the automatic inclusion of the timer driver.
 *
 *    - Set Max file descriptors to 4
 *      This reduces the size of the file handle pool.
 *
 *    - Check Main function does not exit
 *    - Uncheck Clean exit (flush buffers)
 *      This removes the unneeded call to exit when main returns, since it
 *      won't.
 *
 *    - Check Don't use C++
 *      This builds without the C++ support code.
 *
 *    - Check Small C library
 *      This uses a reduced functionality C library, which lacks  
 *      support for buffering, file IO, floating point and getch(), etc. 
 *      Check the Nios II Software Developers Manual for a complete list.
 *
 *    - Check Reduced device drivers
 *      This uses reduced functionality drivers if they're available. For the
 *      standard design this means you get polled UART and JTAG UART drivers,
 *      no support for the LCD driver and you lose the ability to program 
 *      CFI compliant flash devices.
 *
 *    - Check Access device drivers directly
 *      This bypasses the device file system to access device drivers directly.
 *      This eliminates the space required for the device file system services.
 *      It also provides a HAL version of libc services that access the drivers
 *      directly, further reducing space. Only a limited number of libc
 *      functions are available in this configuration.
 *
 *    - Use ALT versions of stdio routines:
 *
 *           Function                  Description
 *        ===============  =====================================
 *        alt_printf       Only supports %s, %x, and %c ( < 1 Kbyte)
 *        alt_putstr       Smaller overhead than puts with direct drivers
 *                         Note this function doesn't add a newline.
 *        alt_putchar      Smaller overhead than putchar with direct drivers
 *        alt_getchar      Smaller overhead than getchar with direct drivers
 *
 */

#include "sys/alt_stdio.h"

#include "sys/alt_irq.h"

#include "altera_avalon_pio_regs.h"
#include "altera_avalon_timer_regs.h"

#include "system.h"

#include <math.h>



// contadores para los milisegundos, segundos, minutos
static int cont_seg=0;
static int cont_mseg=0;
static int cont_min=0;
//static int fijo = 6;


// Funcion encargada del manejo de interrupciones del timer de los segundos
static void timer_s_inter(void *context)
{
	(void) context;
	cont_seg ++;
	if (cont_seg > 60){
		cont_seg = 0;
	}

	int digito1 = cont_seg%10;
	int digito2 = (int)((cont_seg - (int)cont_seg % 10)/10);
	unsigned Output1 = 0;
	unsigned Output2 = 0;


	if (digito1 == 0){Output1 = 1;}
	else if (digito1 == 1){Output1 = 79;}
	else if (digito1 == 2){Output1 = 18;}
	else if (digito1 == 3){Output1 = 6;}
	else if (digito1 == 4){Output1 = 76;}
	else if (digito1 == 5){Output1 = 36;}
	else if (digito1 == 6){Output1 = 32;}
	else if (digito1 == 7){Output1 = 15;}
	else if (digito1 == 8){Output1 = 0;}
	else if (digito1 == 9){Output1 = 4;}else{Output1 = 127;}

	if (digito2 == 0){Output2 = 1;}
	else if (digito2 == 1){Output2 = 79;}
	else if (digito2 == 2){Output2 = 18;}
	else if (digito2 == 3){Output2 = 6;}
	else if (digito2 == 4){Output2 = 76;}
	else if (digito2 == 5){Output2 = 36;}
	else if (digito2 == 6){Output2 = 32;}
	else if (digito2 == 7){Output2 = 15;}
	else if (digito2 == 8){Output2 = 0;}
	else if (digito2 == 9){Output2 = 4;}else{Output2 = 127;}


	// salida de los displays
	IOWR_ALTERA_AVALON_PIO_DATA(SEGMENTOS_3_BASE,Output2);
	IOWR_ALTERA_AVALON_PIO_DATA(SEGMENTOS_4_BASE,Output1);

	//fin de la interrupcion
	IOWR_ALTERA_AVALON_TIMER_STATUS(TIMER_S_BASE,0);

}

// Funcion encargada del manejo de interrupciones del timer de los milisegundos
static void timer_ms_inter(void *context)
{

	(void) context;
	cont_mseg ++;
	if (cont_mseg > 60){
		cont_mseg = 0;
	}

	int digito1 = cont_mseg%10;
	int digito2 = (int)((cont_mseg - (int)cont_mseg % 10)/10);
	unsigned Output1 = 0;
	unsigned Output2 = 0;


	if (digito1 == 0){Output1 = 1;}
	else if (digito1 == 1){Output1 = 79;}
	else if (digito1 == 2){Output1 = 18;}
	else if (digito1 == 3){Output1 = 6;}
	else if (digito1 == 4){Output1 = 76;}
	else if (digito1 == 5){Output1 = 36;}
	else if (digito1 == 6){Output1 = 32;}
	else if (digito1 == 7){Output1 = 15;}
	else if (digito1 == 8){Output1 = 0;}
	else if (digito1 == 9){Output1 = 4;}else{Output1 = 127;}

	if (digito2 == 0){Output2 = 1;}
	else if (digito2 == 1){Output2 = 79;}
	else if (digito2 == 2){Output2 = 18;}
	else if (digito2 == 3){Output2 = 6;}
	else if (digito2 == 4){Output2 = 76;}
	else if (digito2 == 5){Output2 = 36;}
	else if (digito2 == 6){Output2 = 32;}
	else if (digito2 == 7){Output2 = 15;}
	else if (digito2 == 8){Output2 = 0;}
	else if (digito2 == 9){Output2 = 4;}else{Output2 = 127;}

	// salida de los displays
	IOWR_ALTERA_AVALON_PIO_DATA(SEGMENTOS_5_BASE,Output2);
	IOWR_ALTERA_AVALON_PIO_DATA(SEGMENTOS_6_BASE,Output1);

	//fin de la interrupcion
	IOWR_ALTERA_AVALON_TIMER_STATUS(TIMER_MS_BASE,0);

}

// Funcion encargada del manejo de interrupciones del timer de los minutos
static void timer_min_inter(void *context)
{
	(void) context;
	cont_min ++;
	if (cont_min > 60){
		cont_min = 0;
	}

	int digito1 = cont_min%10;
	int digito2 = (int)((cont_min - (int)cont_min % 10)/10);
	unsigned Output1 = 0;
	unsigned Output2 = 0;


	if (digito1 == 0){Output1 = 1;}
	else if (digito1 == 1){Output1 = 79;}
	else if (digito1 == 2){Output1 = 18;}
	else if (digito1 == 3){Output1 = 6;}
	else if (digito1 == 4){Output1 = 76;}
	else if (digito1 == 5){Output1 = 36;}
	else if (digito1 == 6){Output1 = 32;}
	else if (digito1 == 7){Output1 = 15;}
	else if (digito1 == 8){Output1 = 0;}
	else if (digito1 == 9){Output1 = 4;}else{Output2 = 127;}

	if (digito2 == 0){Output2 = 1;}
	else if (digito2 == 1){Output2 = 79;}
	else if (digito2 == 2){Output2 = 18;}
	else if (digito2 == 3){Output2 = 6;}
	else if (digito2 == 4){Output2 = 76;}
	else if (digito2 == 5){Output2 = 36;}
	else if (digito2 == 6){Output2 = 32;}
	else if (digito2 == 7){Output2 = 15;}
	else if (digito2 == 8){Output2 = 0;}
	else if (digito2 == 9){Output2 = 4;}else{Output2 = 127;}


	// salida de los displays
	IOWR_ALTERA_AVALON_PIO_DATA(SEGMENTOS_1_BASE,Output2);
	IOWR_ALTERA_AVALON_PIO_DATA(SEGMENTOS_2_BASE,Output1);

	//fin de la interrupcion
	IOWR_ALTERA_AVALON_TIMER_STATUS(TIMER_MIN_BASE,0);

}



int main()
{ 
	unsigned modo = IORD_ALTERA_AVALON_PIO_DATA(SWITCHS_BASE);

	unsigned init = IORD_ALTERA_AVALON_PIO_DATA(SWITCHS_BASE);

	unsigned onof=0;

	//if (init==0){
		//if (onof==0){
		//	onof=1;
		//}else{
		//	onof=0;
		//}
	//}

	//if(onof==1){

	/*alt_ic_isr_register(
					TIMER_S_IRQ_INTERRUPT_CONTROLLER_ID,TIMER_S_IRQ,timer_s_inter,NULL,NULL
						  );
	alt_ic_isr_register(
					TIMER_MS_IRQ_INTERRUPT_CONTROLLER_ID,TIMER_MS_IRQ,timer_ms_inter,NULL,NULL
					  );

	alt_ic_isr_register(
					TIMER_MIN_IRQ_INTERRUPT_CONTROLLER_ID,TIMER_MIN_IRQ,timer_min_inter,NULL,NULL
			  	  	  );*/
		if (modo == 0){


		}else if (modo == 2){
				alt_ic_isr_register(
						TIMER_S_IRQ_INTERRUPT_CONTROLLER_ID,TIMER_S_IRQ,timer_s_inter,NULL,NULL
						  );
		}else if(modo == 1){
				alt_ic_isr_register(
						TIMER_MS_IRQ_INTERRUPT_CONTROLLER_ID,TIMER_MS_IRQ,timer_ms_inter,NULL,NULL
						  );
		}else if(modo ==3){

				alt_ic_isr_register(
						TIMER_S_IRQ_INTERRUPT_CONTROLLER_ID,TIMER_S_IRQ,timer_s_inter,NULL,NULL
						  );

				alt_ic_isr_register(
						TIMER_MS_IRQ_INTERRUPT_CONTROLLER_ID,TIMER_MS_IRQ,timer_ms_inter,NULL,NULL
						  );

				alt_ic_isr_register(
						TIMER_MIN_IRQ_INTERRUPT_CONTROLLER_ID,TIMER_MIN_IRQ,timer_min_inter,NULL,NULL
						  );
			}
	//}

	IOWR_ALTERA_AVALON_TIMER_CONTROL(
			TIMER_S_BASE,ALTERA_AVALON_TIMER_CONTROL_ITO_MSK | ALTERA_AVALON_TIMER_CONTROL_CONT_MSK);

	IOWR_ALTERA_AVALON_TIMER_CONTROL(
			TIMER_MS_BASE,ALTERA_AVALON_TIMER_CONTROL_ITO_MSK | ALTERA_AVALON_TIMER_CONTROL_CONT_MSK);

	IOWR_ALTERA_AVALON_TIMER_CONTROL(
			TIMER_MIN_BASE,ALTERA_AVALON_TIMER_CONTROL_ITO_MSK | ALTERA_AVALON_TIMER_CONTROL_CONT_MSK);




  /* Event loop never exits. */
  while (1);

  return 0;
}
