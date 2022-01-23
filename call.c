#include<stdio.h>
int swap(int *a , int *b)
{
	int temp;
	temp = *a;// a= 5 , b= 6
	*a = *b;
	*b = temp;	
	return *a;
	return *b;


}

int main()
{
	int a=5;
	int b=6;
printf("one line= a=%d b=%d\n",swap(&a,&b),swap(&a,&b));
printf("\na =%d\n",swap(&a,&b));
printf("\nb =%d\n",swap(&a,&b));
		
	
	
	
}
