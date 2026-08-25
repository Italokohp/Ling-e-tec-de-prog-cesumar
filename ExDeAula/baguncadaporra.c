#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	int a,b,r;
	printf("Insira os dois valores: ");
	scanf ("%d %d", &a, &b);
	
	if(a>0 && b>0){
		if(a%2==0 && b%2==0){
			printf("Multiplos de 2\n");
		}
	} 
	if(a>b){
		if(a%b == 0){
			printf("Multiplo com o outro");
		}
	}
	else{
		if(b%a == 0){
			printf("Multiplo com o outro");
		}
	}
	
		
		




	return 0;
}
