#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float height,weight; 
	printf("�п�J����(m):"); 
	scanf("%f",&height);
	
    printf("�п�J�魫(kg):"); 
	scanf("%f",&weight); 
	
	printf("�z��BMI��=%f\n",weight/(height*height)); 

	system("PAUSE"); 
	return 0 ; 
 } 
