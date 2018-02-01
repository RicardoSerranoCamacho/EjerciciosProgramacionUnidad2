/*
Autor: Alvar Peniche 28/Enero/18
Imprimir  las  primeras  n  tablas  de  multiplicar  que  incluyan
desde  el  valor  j hasta el valor k. 

Entradas: números enteros

Salidas:las  primeras  n  tablas  de  multiplicar  que  incluyan
desde  el  valor  menor hasta el valor mayor. 
*/


#include <stdio.h>

int main(int argc, char *argv[]) {
	int tablaMenor, tablaMayor, producto;
	
	printf("inserte el número menor: "); 
	scanf("%d", &tablaMenor);//se lee el valor j
	printf("inserte el número mayor: ");
	scanf("%d", &tablaMayor);//se lee el valor k
	
	for(int tablaActual= tablaMenor; tablaActual<=tablaMayor; tablaActual++){ //se inicia ciclo para imprimir todas las tablas
		
		printf("\ntabla del %d\n",tablaActual);
		
		for (int contador=1; contador<=10; contador++){ //se inicia ciclo para imprimir los primero valores de cada tabla
			producto= contador * tablaActual;
			printf("%d x %d = %d\n", tablaMenor, contador, producto);
			
		}
		
	}	
	
	return 0;
}

