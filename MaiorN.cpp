#include <stdio.h>
#include <locale.h>

/*Escreva uma fun��o que recebe dois n�meros e 
retorna o maior n�mero entre eles. */

//fun��o:
int dobro(int num1, int num2) {
	int d;
	
	if (num2 > num1){
		d = num2;
	} else{
		d = num1;
	}
	
	return d;
}

//bloco principal:
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int nm1, nm2, d;
	
	printf("Digite um n�mero: ");
	scanf("%d", &nm1);
	
	printf("\nDigite outro n�mero: ");
	scanf("%d", &nm2);
	
	d = dobro(nm1, nm2);
	printf("\nO maior n�mero lido �: %d", d);
	
	return 0;
}
