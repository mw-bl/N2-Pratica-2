#include <stdio.h>
#include <locale.h>

/*Escreva uma função que recebe dois números como parâmetros 
e retorna o dobro do maior dos números recebidos. */

//função:
int dobro(int num1, int num2) {
	int d;
	
	if (num2 > num1){
		d = 2 * num2;
	} else{
		d = 2 * num1;
	}
	
	return d;
}

//bloco principal:
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int nm1, nm2, d;
	
	printf("Digite um número: ");
	scanf("%d", &nm1);
	
	printf("\nDigite outro número: ");
	scanf("%d", &nm2);
	
	d = dobro(nm1, nm2);
	printf("\nO dobro do maior número lido é: %d", d);
	
	return 0;
}
