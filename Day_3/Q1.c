//Bit Stuffing
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	char stuff[50];
	char destuff[50];
	char *p,*q;
	int count=0;
	printf("Enter String\n");
	scanf("%s",&str);
	p=str;
	q=stuff;
	while(*p!='\0')
	{
		if(*p=='0')
		{
			*q=*p;
			p+=1;
			q+=1;
		}
		else
		{
			while(*p=='1' && count!=5)
			{
				count++;
				*q=*p;
				p+=1;
				q+=1;
			}
			if(count==5)
			{
				*q='0';
				q+=1;	
			}
			count=0;
		}
	}
	*q='\0';

	printf("\nThe stuffed  character  string is");
	printf("\n%s",stuff);

	p=stuff;
	q=destuff;
	while(*p!='\0')
	{
		if(*p=='0')
		{
			*q=*p;
			q++;
			p++;
		}
		else
		{
			while(*p=='1' && count !=5)
			{
				count++;
				*q=*p;
				q++;
				p++;
			}
			if(count==5)
			{
			p++;
			}
			count=0;
		}
	}
	*q='\0';
	printf("\nDestuffed character string is\n");
	printf("%s\n",destuff);
	return 0;
	
}
