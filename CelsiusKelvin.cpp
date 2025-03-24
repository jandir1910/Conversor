#include <stdio.h>
main(){
    float C, F, K;
    char resp;

	printf("Qual Conversor Farenheint(f) - Kelvin(k) ");
	scanf("%s", &resp);
	
	if(resp=='f' || resp=='F'){
		printf("Digite a temperatura em celsius para transformar em Fahrenheit: ");
    	scanf("%f", &C);
    	
    	F = (C*1.8)+32;
    	
   		printf("A temperatura em Fahehfh eh: %.2fF", F);
	}
	else if(resp=='k' || resp=='K'){
		printf("Digite a temperatura em Celsius para transformar em  Kelvin: ");
    	scanf("%f", &C);
    	
    	K = C+273;
    	
    	printf("A temperatura em Kelvin eh: %.2fK", K);
	}
}
