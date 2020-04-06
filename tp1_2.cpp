#include <stdio.h>
#include <stdlib.h>

int cuadrado(int a);
void cuadrado_2(int a);
void muestra_valorYdireccion(int a);
void cambio_valor();

int main(){
	
	int num;
	printf("ingrese un numero \n");
	scanf("%d",&num);
	printf("metodo 1: \n");
	printf("el  cuadrado de %d es:%d", num,cuadrado(num));
	printf("\n metodo 2 : \n");
	cuadrado_2(num);
	printf("\n\n");
	muestra_valorYdireccion(num);
	printf("\n\n");
	cambio_valor();
	return 0;
}

int cuadrado(int a){
	int operacion = a*a;
	return operacion;
}

void cuadrado_2(int a){
	
	 int b= a*a;
	 printf("cuadro del numero %d es : %d",a,b);
	 
}
void muestra_valorYdireccion(int a){
	
	printf(" valor de la variable :%d \n ",a);	
	printf("direccion de la variable : %p \n ", &a);
	
}
void cambio_valor(){
	int a,b;
	printf(" ingrese el valor de a :");
	scanf("%d",&a);
	printf("ingrese el valor de b: ");
	scanf("%d",&b);
	printf("los valores son :\n a= %d \n b=%d \n cambio los valores de las variables :\n",a,b);
	 
	int c;
	c=b;
	b=a;
	a=c;
	printf("valor de a=%d\n valor de b=%d \n",a,b);
	
}






