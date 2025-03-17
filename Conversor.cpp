#include <stdio.h>
main(){
    float C, F;
    char resp;
    
	printf("Digite a temperatura em celsius para transformar em Fahrenheit: ");
    scanf("%f", &C);
    	
    F = (C*1.8)+32;
    	
   	printf("A temperatura em Fahehfh eh: %.2fF", F);
}
