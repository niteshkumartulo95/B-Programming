/* Write a c program to swap any two integer numbers using call by value */
#include<stdio.h>
void swap (int,int);
int main()
{
	int a,b;
	printf("\n Enter any two integer numbers");
	scanf("%d%d",&a,&b);
	
	printf("\n before swapping a nd b values are %d%d",a,b);
	scanf(&a,&b);
	
	printf("\n after swapping and b values are %d%d",a,b);
}

  void swap(int x,int y)
  {
    int temp ;
    temp= x;
    x=y;
    y=temp;
}
