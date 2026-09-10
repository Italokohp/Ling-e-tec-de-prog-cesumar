#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int escolhaex, um, dois, tres, quatro, cinco, seis, sete, oito, nove, dez, onze, digito, digito2;
	
	printf("Escolha o exercicio (digite 1, 2 ou 3): ");
	scanf("%d", &escolhaex);
	
	
	//ex1
	if (escolhaex == 1){
		printf("Informe o CPF: "); // cada numero deve estar separado por espaços. ex: 1 5 3 1 8 4 9 5 0 4 4
	scanf("%d %d %d %d %d %d %d %d %d %d %d", &um, &dois, &tres, &quatro, &cinco, &seis, &sete, &oito, &nove, &dez, &onze);
	
	digito = ((um*10  +  dois*9  +  tres*8  +  quatro*7  +  cinco*6  +  seis*5  +  sete*4  +  oito*3  +  nove*2) * 10) % 11;
	digito2 = ((um*11  +  dois*10  +  tres*9  +  quatro*8  +  cinco*7  +  seis*6  +  sete*5  +  oito*4  +  nove*3  +  dez*2) * 10) % 11;
	
	if (digito == dez && digito2 == onze){
		printf("CPF Valido");
	}
	else{
		printf("CPF Invalido");
	}

	}



	//ex2
	else if (escolhaex == 2){
		int temperatura, escolhatemp;
	
		printf("Insira a temperatura: ");
		scanf("%d", &temperatura);
		printf("A temperatura inserida eh celcius ou fahrenheit? (escreva c ou f) ");
		scanf (" %c", &escolhatemp);
	
		if(escolhatemp == 'c'){
			printf("Temperatura em fahrenheit: %d", (temperatura*9/5) + 32 );
		} else if(escolhatemp == 'f'){
			printf("Temperatura em celcius: %d", (temperatura-32)*5/9 );
		}
	}
	
	
	
	//ex3
	else if (escolhaex == 3){
		float nota1, nota2, nota3, calculonota;
		
		printf("Insira as 3 notas do aluno: ");
		scanf("%f %f %f", &nota1, &nota2, &nota3);
		
		calculonota = ((nota1+nota2+nota3)/3.0);
		
		if (calculonota >= 7.0){
			printf("Aluno Aprovado\nMedia %f", calculonota);
		}
		else if (calculonota >= 4.0 && calculonota < 7.0){
			printf("Aluno de Recuperacao\nMedia %.2f \nFaltam %.2f pontos para aprovacao", calculonota, 7-calculonota);
		}	
		else if (calculonota < 4.0){
			printf("Aluno Reprovado\nMedia %f", calculonota);
		}	
	}

	return 0;
}
