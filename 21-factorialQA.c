/*
Autor:Oscar Perera 30/Enero/17
Entradas: el entero al que se le desea obtener el factorial y un valor que llamaremos factorial y nos ayudar� en el proceso
Salidas: el factorial del numero
Procedimiento general: mediante un ciclo que se llevar� acabo mientras el n�mero sea mayor a 0, se multiplicar� el n�mero por el factorial, y cada vez que se multiplique se reducir� en 1 su valor

Entrada    Salida       Resultado
   0         1          correcto
   5        120         correcto
   12      4790016000   correcto


*/
/*este programa recibir� un n�mero entero y calcular� su factorial*/

#include <stdio.h>
/*entradas*/
int main(int argc, char *argv[]) {
	
	int numero;
	int factorial=1;
	printf("ingresar numero: \n");
	scanf ("%d",&numero);
	

/*desarrollo*/
	while (numero>0){
	factorial = factorial*numero;
		numero--;
		
		
		
	}
/*salidas*/
	printf ("el factorial del numero es: %d \n", factorial);
	
	
	
	
	
	return 0;
}
