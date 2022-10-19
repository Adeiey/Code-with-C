//multiplication table of any number.

#include<stdio.h>
int main (){
	int i,s,n;
	printf("ENTER THE NUMBER : ");
	scanf("%d",&n);
	for (i=0;i<=10;i++){
		s=1;
		s=n*i;
		printf("%d * ",n);
		printf("%d",i);
		printf(" = %d \n",s);
		
	}
	return 0;
}
