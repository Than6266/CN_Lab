#include<stdio.h>

void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
};
int main()
{
	int a=5,b=8;
	printf("Before Swapping a=%d, b=%d\n",a,b);
	swap(&a,&b);
	printf("After Swapping a=%d, b=%d\n",a,b);
}
