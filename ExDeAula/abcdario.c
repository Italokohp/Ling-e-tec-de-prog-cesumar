#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	char letra;
	printf("Insira uma letra: ");
	scanf("%c", &letra);
	
	if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
		if(letra == 'a' || letra == 'o'){
			printf("aoba");
		}
		if(letra == 'i' || letra == 'u'){
			printf ("la ele");
		}	
	}	
	else{
		printf ("67");
	}	
	
	
	printf("\n");
	
			
	switch (letra){   // testa os quatro casos e printa o texto certo, mais organizado q if else
		case 'a':
			printf("a de AMOR");
			break;
		case 'b':
			printf("b de BAIXINHO");
			break;
		case 'c':
			printf("c de CORACAO");
			break;
		case 'd':
			printf("d de DEDINHO");
			break;
	}

	
	return 0;
}
