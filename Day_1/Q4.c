#include<stdio.h>
struct node{
	int marks;
};
int main()
{
	struct node sub[3];
	printf("Enter Marks Scored in 3 Subjects");
	for(int i=0;i<3;i++)
	{
		scanf("%d",&sub[i].marks);	
	}
	for(int i=0;i<3;i++)
	{
		printf("Marks Scored in Subject %d:",i+1);
		printf("%d\n",sub[i].marks);	
	}
}
