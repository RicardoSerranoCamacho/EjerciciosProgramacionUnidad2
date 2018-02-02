
/*Autor:Oscar Perera 30/Enero/17
Programa que lee 2 fechas (dia-mes-a�o) con tres cantidades enteras e imprime la mayor, si son la misma imprima que son iguales.

Entradas: Las 2 fechas dividades en dia, mes y a�o; se enumeran para distinguir entre la fecha 1 y 2
Una bandera que nos ayudar� a tomar decisiones

Salidas:la fecha que es mayor, o en caso de ser iguales imprimir el texto que lo indica

Procedimiento general: compararemos los valores comenzando por los a�os, la bandera nos permitir� decidir la relacion de la fecha 1 con la 2, teniendo como resultados, +1 si es mayor, 0 cuando es igual, o -1 cuando es menor.

Entrada                   Salida        Resultado
19/9/1800 y 14/2/2000     son iguales   incorrecto
19/02/1800 y 19/03/1800   son iguales   incorrecto
22/04/1400 y 22/09/1649   son iguales   incorrecto

*/

#include <stdio.h>
int main(int argc, char *argv[]) {



/*Variables utilizadas*/
int banderafecha=0;
int dia1;
int mes1;
int anio1;
int dia2;
int mes2;
int anio2;




/*Entradas de los datos*/
printf ("ingrese el dia 1 \n");
scanf("%d", &dia1); 
printf ("ingrese el mes 1 \n");
scanf ("%d", &mes1);
printf ("ingrese el anio 1 \n");
scanf ("%d",&anio1);
printf ("ingrese el dia 2 \n");
scanf("%d", &dia2);
printf ("ingrese el mes 2 \n");
scanf ("%d", &mes2);
printf ("ingrese el anio 2 \n");
scanf("%d", &anio2);





/*desarrollo*/

{
if (anio1 > anio2){banderafecha=banderafecha++;} 
else if (anio1 < anio2){banderafecha=banderafecha--;}
else { if (mes1 > mes2){banderafecha=banderafecha++;} 
else if (mes1 < mes2){banderafecha=banderafecha--;}
else { if (dia1>dia2){banderafecha=banderafecha++;} 
else if (dia1 < dia2){banderafecha=banderafecha--;}}}
}





/*salida*/


if (banderafecha>0) {printf ("la fecha mayor es: %d / %d / %d",dia1,mes1,anio1);}
if (banderafecha<0) {printf ("la fecha mayor es: %d / %d / %d", dia2,mes2,anio2);}
else printf ("las fechas son iguales");
	
return 0;
}





