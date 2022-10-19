//enter temperature in Celsius and convert it into Fahrenheit.

#include<stdio.h>

int main(){

	int c,f;
	
   	printf("\nEnter Temprature in celcius = ");
   	scanf("%d",&c);
   	
	f=((9*c)/5)+32;
	
	printf("\nCelsius to Fahrenheit =%d",f);
	
	return 0;
}
