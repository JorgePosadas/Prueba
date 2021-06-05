#include <stdio.h>
#include <stdlib.h>

long long factorial(int n){
	if(n == 0 || n == 1){
	return 1;
    }
	else{	
    return n * factorial(n-1);		
    }
}


int n, accion;
int main(void){
long long resultado;

do{
printf("¿Que deseas hacer?\n\n");
printf("1.- Calcular un factorial\n\n    O bien, pulsa cualquier tecla para salir del programa\n\n");
scanf("%d", &accion);

if(accion!=1){
	printf("\nSaliste del programa\n");
	printf("\n***PROGRAMA TERMINADO***");
	exit(0);
}

else{
printf("\nIntroduce el numero del que quieres calcular el factorial:\n\n");
scanf("%d", &n);

if(n >= 0){
resultado = factorial(n);
printf("\nEl factorial de %d es: %lld\n\n", n, resultado);
printf("-----------------------------------------------------------\n");
printf("REINICIO DE PROGRAMA\n\n");
}

else if(n < 0){
	printf("\nERROR: Por favor introduce un valor valido [Entero positivo]\n\n");
	printf("-----------------------------------------------------------\n");
	printf("REINICIO DE PROGRAMA\n\n");
}

//NO PUDE HACER FUNCIONAR ESTA SECCIÓN. CUANDO EL PROGRAMA RECIBE CARACTERES ENTRA EN UN BUCLE INFINITO
else if(n != 0 && n != 1 && n <! 0){
	printf("\nERROR: Introdujiste un caracter. El programa se cerrara.\n");
	printf("\n***PROGRAMA TERMINADO***");
	exit (0);
}

}
}while(accion == 1);
}

