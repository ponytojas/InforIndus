// ********************************************************
// Proyecto: Parpadea un LED
// Archivo: main.c
// *******************************************************
#include "lpc17xx.h"
//#include "delay.h"


// ********************************************************
//    Funciones de retardo
// ********************************************************
void delay(uint32_t n)
{  int32_t i;
  for(i=0;i<n;i++);
}

int32_t contador = 0;
int main (void)
{ 
  LPC_GPIO1->FIODIR |= (1<<18);	 // P1.18 definido como salida  
  LPC_GPIO2->FIODIR &= ~(1<<12);    // P2.12 definido como entrada  
  LPC_GPIO1->FIOCLR |= (1<<18);	 // P1.18 apagado 

  while(1) {
    // Comprueba si el pin P2.12 está nivel bajo (pulsado)
    contador --;
    if (!(LPC_GPIO2->FIOPIN & (1<<12))){  
      // Si est• pulsado
      LPC_GPIO1->FIOPIN |= (1<<18);  // Enciendo LED 
      delay (1000000);			         
      LPC_GPIO1->FIOPIN &= ~(1<<18); // Apago LED 
      delay (1000000);
    }
    else
    {
      // Si no está pulsado
      contador ++;
      LPC_GPIO1->FIOSET = (1<<18);   // Enciendo LED
      delay (5000000);               
      LPC_GPIO1->FIOCLR = (1<<18);   // Apago LED
      delay (5000000);
    } 
  }
}
