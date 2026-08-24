#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

	int a,b,c;
	printf("Insira os tres numeros\n");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a>b && a>c){
		printf("maior = %d", a);
	}
	if(b>a && b>c){
		printf("maior = %d", b);
	}
	if(c>a && c>b){
		printf("maior = %d", c);
	}

	return 0;
}
