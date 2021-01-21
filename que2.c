
#include<stdio.h>
int main(){
	
	char i;
	
	printf("Small Letters:\n");
	
	for(i = 'a'; i <='z'; i++){
	    printf("%c", i);
	}
	
	printf("\n\nCapital Letters:\n");   
	
	for(i = 'A'; i <='Z'; i++){
	    printf("%c", i);
	}
	return(0);
}