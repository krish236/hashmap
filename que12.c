#include <stdio.h>
#include <math.h>
 
int main()
{
  	int Number, FirstDigit, Count, LastDigit, Sum = 0;
 
  	printf("\n Please Enter any Number that you wish  : ");
  	scanf("%d", & Number);
  	
  	Count = log10(Number); 	
  	FirstDigit = Number / pow(10, Count);
  	
  	LastDigit = Number % 10;
  	
  	Sum = FirstDigit + LastDigit;
	    
	printf(" \n The Sum of First Digit (%d) and Last Digit (%d) of %d =  %d", FirstDigit, LastDigit, Number, Sum);
 
  	return 0;
}