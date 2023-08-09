#include<stdio.h>
int main()
{
		char i;
		i=0;
			
		while(i<=26){
			if(i%4==0){
				printf("%c ",i+65);
			}
			else{
				printf("%c ",i+97);
				}i+=2;
		}
}
				
				