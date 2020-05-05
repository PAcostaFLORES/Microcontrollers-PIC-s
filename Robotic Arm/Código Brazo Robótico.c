#include "C:\Users\pablo\OneDrive\Escritorio\Brazo robótico\Código Brazo Robótico.h"

int i;

void main()
{

   setup_adc_ports(NO_ANALOGS|VSS_VDD);
   setup_adc(ADC_CLOCK_DIV_2);
   setup_psp(PSP_DISABLED);
   setup_spi(SPI_SS_DISABLED);
   setup_wdt(WDT_OFF);
   setup_timer_0(RTCC_INTERNAL);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   setup_timer_3(T3_DISABLED|T3_DIV_BY_1);
   setup_comparator(NC_NC_NC_NC);
   setup_vref(FALSE);
   setup_oscillator(OSC_8MHZ|OSC_INTRC|OSC_31250|OSC_PLL_OFF);

   // TODO: USER CODE!!
   
   
   set_tris_b(0b11111111);
   set_tris_d(0b00000000);
          
   
     while(true){
         
   if(input(pin_b7)==1){
   
   for(i=0;i<60;i++){
   //mover a 180 grados el servomotor de la base
   output_high(PIN_D0);
   delay_us(2400);
   output_low(PIN_D0);
   delay_ms(20);
   }

   
   delay_ms(1500);
   
   for(i=0;i<60;i++){
   //mover a un poco mas de 90 grados el servomotor del antebrazo
   output_high(PIN_D1);
   delay_us(1000);
   output_low(PIN_D1);
   delay_ms(20);
   }

   delay_ms(1500);
   
   for(i=0;i<60;i++){
   //mover a 90 grados el servomotor del brazo
   output_high(PIN_D2);
   delay_us(1000);
   output_low(PIN_D2);
   delay_ms(20);
   }

    delay_ms(1500);
    
   
   delay_ms(1500);

   
   for(i=0;i<60;i++){
   //regresar a 0 el servomotor del brazo
   output_high(PIN_D2);
   delay_us(1900);
   output_low(PIN_D2);
   delay_ms(20);
   }

   delay_ms(1500);
   
   for(i=0;i<60;i++){
   //regresar a 0 grados el servomotor del antebrazo
   output_high(PIN_D1);
   delay_us(1900);
   output_low(PIN_D1);
   delay_ms(20);
   }

      delay_ms(1500);
   
   for(i=0;i<60;i++){
   //regresar a 0 grados el servomotor de la base
   output_high(PIN_D0);
   delay_us(600);
   output_low(PIN_D0);
   delay_ms(20);
   }

      delay_ms(1500);
   
   for(i=0;i<60;i++){
   //bajar a 90 grados el servomotor del antebrazo
   output_high(PIN_D1);
   delay_us(1000);
   output_low(PIN_D1);
   delay_ms(20);
   }

      delay_ms(1500);
   
   for(i=0;i<60;i++){
   //mover a 90 grados el servomotor del brazo
   output_high(PIN_D2);
   delay_us(1000);
   output_low(PIN_D2);
   delay_ms(20);
   }
 
   delay_ms(1500);
    
   
   delay_ms(1500);

   
   for(i=0;i<60;i++){
   //regresar a 0 el servomotor del brazo
   output_high(PIN_D2);
   delay_us(1900);
   output_low(PIN_D2);
   delay_ms(20);
   }

      delay_ms(1500);
   
   for(i=0;i<60;i++){
   //regresar a 0 grados el servomotor del antebrazo
   output_high(PIN_D1);
   delay_us(1900);
   output_low(PIN_D1);
   delay_ms(20);
   }
 
      delay_ms(1500);
   
   for(i=0;i<60;i++){
   //regresar a posicion 90 grados el servomotor de la base
   output_high(PIN_D0);
   delay_us(1400);
   output_low(PIN_D0);
   delay_ms(20);
   }
  }
  }
}
