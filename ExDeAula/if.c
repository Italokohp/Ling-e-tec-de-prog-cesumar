#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

	int a,b,c, maiorab, maiorgeral;
	printf("Insira os tres numeros\n");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a<b){
		maiorab = b;
	} else {
		maiorab = a;
	}
	
	if (maiorab<c){
		maiorgeral = c;
	} else {
		maiorgeral = maiorab;
	}

	printf("maior = %d", maiorgeral);


	return 0;
}
