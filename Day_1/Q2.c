#include<stdio.h>
void swap(char **str1,char **str2)
{
	char *temp=*str1;
	*str1=*str2;
	*str2=temp;
};
int main(int argc, char* argv[])
{
	char *str1=argv[1];
	char *str2=argv[2];
	printf("Before Swapping String 1 is '%s' and String 2 is '%s'\n",str1,str2);
	swap(&str1,&str2);
	printf("AFter Swapping String 1 is '%s' and String 2 is '%s'",str1,str2);
	
}
