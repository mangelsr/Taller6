#include<stdio.h>

void intercambiar(int *a, int *b);
int* encontrarOcurrencia(int *x ,int v, int len);
void desglosar(char *f);

int main(int argc,char** argv){

	printf("Integrantes:\n- Miguel Sanchez\n- Luis Lama\n\n");
	
	desglosar("2017-06-25");
	
	int n[5] = {1,2,3,4,5};
	
	printf("\nDireccion del elemento: %p\nEl valor: %d\n",encontrarOcurrencia(n,3,5),*encontrarOcurrencia(n,3,5));
	
	int a = 4;
	int b = 7;

	intercambiar(&a,&b);
	printf("a: %d, b: %d\n",a,b);
	
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
			//printf("Direccion del elemento: %p\n",(x+i));
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

