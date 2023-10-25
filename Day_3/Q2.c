#include<stdio.h>
#include<string.h>

int main()
{
	char frame[50][50], str[50][50];
	char flag[10];
	strcpy(flag,"flag");
	char esc[10];
	strcpy(esc,"esc");
	int i,j,k=0,len;
	strcpy(frame[k++],"flag");
	printf("Enter Length of String: \n");
	scanf("%d",&len);
	printf("Enter String:\n");
	for(int i=0;i<=len;i++)
	{
		gets(str[i]);
	}
	printf("\n Input String is: ");
	for(int i=0;i<=len;i++){
		puts(str[i]);
	}
	
	for(int i=1;i<=len;i++)
	{
		if(strcmp(str[i],flag) !=0 && strcmp(str[i], esc) != 0)
			strcpy(frame[k++],str[i]);
		else
		{
			strcpy(frame[k++],"esc");
			strcpy(frame[k++],str[i]);
		}
	}
	strcpy(frame[k++],"flag");
  	printf("------------------------------\n\n");
    	printf("Byte stuffing at sender side:\n\n");
    	printf("------------------------------\n\n");
    	for (i = 0; i < k; i++)
    	{
        	printf("%s\t", frame[i]);
    	}
    	return 0;
}
