/* Autor: Luis Gonzalo Guzman Sanchez, Realizado: 17/02/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa
Materia: Programacion Estructurada 
Ciclo: 01/2022
Este es un programa de condicionales de Lenguaje C de la materia de Programacion Estructurada
Muestra el uso de:
  
    -Variables enteras y flotantes
    -printf para mostrar varias variables
    -scanf
    -El uso de include para las librerias
    -condicional if
	-Comentarios para la documentación interna del programa.
*/
#include<stdio.h>
int main() {
	//Declaracion
	int tipo;
	float cantidad, descuento=0, total;
	//Proceso
	printf("Introduce el tipo de cliente (1. Distribuidor, 2. Cliente normal): ");
	scanf("%d",&tipo);
	printf("Introduce una cantidad: ");
	scanf("%f",&cantidad);
	if(tipo==1){ //condicion
		descuento=cantidad*0.1;
	}
	total=cantidad-descuento;
	//Salida
	printf("Descuento:\t\t-$%.2f\n",descuento);
	printf("\t\t	------------\n");
	printf("total:\t\t\t $%.2f",total);
	return 0;
}

