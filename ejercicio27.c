/*
Autor: Alvar Peniche 28/Enero/18
Leer una secuencia de n�meros no determinada (finalizar� la lectura cuando 
el �ltimo n�mero sea igual a 999) y calcular la media aritm�tica.

Entradas: n�meros reales

Salidas:La media aritemtica de todos esos n�meros 
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	int  contador=0;	
	float cantidad, promedio=0;
	
	
	while (1){  /*se abre ciclo infinito*/
		contador= contador + 1;
		
		printf("Inserte el n�mero %d de la serie:", contador);
		scanf("%f", &cantidad );  /*lee n�mero de la serie*/
				
		promedio= promedio + cantidad; 	/*Se suma el nuevo n�mero a la seria*/
		
		
		if (cantidad==999){
			promedio= promedio/contador; /*se calcula e imprime el promedio*/
			printf("%2f", promedio);
			break;                 /*termina el ciclo infinito*/
		}		
	}
	
	return 0;
}

