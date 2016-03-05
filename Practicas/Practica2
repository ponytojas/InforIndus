/**********************************************/
/*Programa que calcula primos                 */
/*main.c                                      */
/**********************************************/
#include <math.h>						//Para manejar raíces cuadradas

#define NUM_MAX 65535				//Defino el número máximo que comprobamos si es primo

int primo[65535];						//Declaramos el array para guardar los primos
int limite = 0;							//Máximo posible divisor de un número
int numeroEvaluado = 3;			//Número que evaluamos si es primo a partir
int pos = 0;								//Posición del array de primos en el que vamos a guardar el nuevo primo

int main()									//Función principal
{
	int i;											//Índice para el bucle for con el que recorremos el array de primos
	int esPrimo = 1;						//Variable que controla si es primo
	primo[0] = 2;								//Consideramos directamente que el 2 es primo
	
	while (numeroEvaluado < NUM_MAX){		//Bucle while con el que aumentamos el número recorrido hasta NUM_MAX
		
		limite = sqrt(numeroEvaluado)+1;		//Calculamos la variable limite fuera del for para ahorrar de forma considerable tiempo
		
		for(i=1; i<=pos; i++){									//Bucle con el que recorremos el array de primos obtenidos anteriormente 
																						//hasta el último primo guardado
			
			if (primo[i] > limite)								//Si el primo entre el que vamos a dividir es mayor que el límite, salimos del for
				break;
			
			if(numeroEvaluado%primo[i] == 0){			//En el caso de que el númeero evaluado sea divisible entre algún primo anterior, no es primo
				esPrimo = 0;												//Si no es primo, la variable esPrimo es falsa (0)
				break;
			}				
		}																			//Fin del bucle for
		
		if (esPrimo == 1){									//Si al final la variable esPrimo es verdadera añadimos el número evaluado al array de primos
			pos++;														//Aumentamos la variable que controla la posición del array a rellenar
			primo[pos] = numeroEvaluado;	
		}
		
		esPrimo = 1;												//Volvemos a definir la variable esPrimo como 1
		numeroEvaluado+=2;									/*Aumentamos en dos el número a evaluar, ya que al empezar en tres, si sumamos
																				de dos en dos, no tenemos en cuenta todos los números pares, ahorramos tiempo*/
		
	}																	//Fin del bucle while
}														//Fin del programa
