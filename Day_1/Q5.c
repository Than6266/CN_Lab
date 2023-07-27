#include<stdio.h>

struct KIIT{
	int b_code;	//Branch Code
};
struct Stu
{
		struct KIIT k1;
		int roll_no;
};
int main()
{
	struct Stu s1;
	printf("Enter Student Branch Code,Roll No\n");
	scanf("%d %d",&s1.k1.b_code,&s1.roll_no);
	printf("The Student Details are:\n Roll: %d\n Branch Code: %d\n",s1.roll_no,s1.k1.b_code);
}
