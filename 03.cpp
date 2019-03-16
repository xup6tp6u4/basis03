#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float height,weight; 
	printf("請輸入身高(m):"); 
	scanf("%f",&height);
	
    printf("請輸入體重(kg):"); 
	scanf("%f",&weight); 
	
	printf("您的BMI值=%f\n",weight/(height*height)); 

	system("PAUSE"); 
	return 0 ; 
 } 
