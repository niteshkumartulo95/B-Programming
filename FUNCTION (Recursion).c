/* write a c program to find factorial of a given number using recursion */
#include<stdio.h>
int fact (int);
int main()
{
	int n;
	printf("\n Enter any +ve number");
	scanf("%d",&n);
	printf("\n Factorial is %d",fact(n));
}
   int fact(int x)
   {
   	if(x==1)
   	  return 1;
   	  else return x*fact(x-1);
   }
