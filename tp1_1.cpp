#include <stdio.h>

int main(){
	int numero;
	int *punteroNumero;
	numero = 4;
	punteroNumero=&numero;
	
	printf("contenido del puntero =%d\n",*punteroNumero);
	printf("direccion almacenada en el puntero=%p\n",*punteroNumero);
	printf("direccion de la variable (numero)=%p\n",numero);
	printf("direccion del puntero =%p \n",punteroNumero);
	printf("longitud de memoria de la variable=%d\n",sizeof(numero));
	

    return 0;
}   
