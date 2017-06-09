#include <stdio.h>

void intercambiar(int *a, int *b);
int* encontrarOcurrencia(int *x ,int v, int len);
void desglosar(char *f);

int main(int argc,char** argv){

	printf("Integrantes:\n- Miguel Sanchez\n- Luis Lama\n\n");

	desglosar("2017-06-25");

	int n[5] = {1,2,3,4,5};
	int * respuesta = encontrarOcurrencia(n,2,5);
	if (respuesta != NULL)
		printf("\nDireccion del elemento: %p\nEl valor: %d\n",respuesta,*respuesta);

	int a = 4;
	int b = 7;

	printf("\nValores iniciales\na: %d, b: %d\n",a,b);
	intercambiar(&a,&b);
	printf("\nValores al intercambiar\na: %d, b: %d\n",a,b);

	return 0;
}

void desglosar(char *f){
	printf("Dia: %.*s\n",2,f+8);
	printf("Mes: %.*s\n",2,f+5);
	printf("Anio: %.*s\n",4,f);
}

int* encontrarOcurrencia(int *x ,int v, int len){
	for(int i = 0; i < len; i++){
		if (*(x+i)==v){
			return (x+i);
		}
	}
	return NULL;
}

void intercambiar(int *a, int *b){
	int z = *a;
	*a = *b;
	*b = z;
}
