#include<stdio.h>
struct dob{
	int date;
	int month; int year;
	
};
struct student_info{
	int roll;
	float cgpa;
	char name[20];
	struct dob age;
};
void disp(struct student_info K)
{
	printf("\n\nThe Student Details are:\n");
	printf("Name: %s\n",K.name);
	printf("Age: %d ~\n",2023-K.age.year);
	printf("Roll No: %d\n",K.roll);
	printf("CGPA Secured: %f\n", K.cgpa);
	
}
void ref(struct student_info *K)
{
	printf("\n*****************************\nCall by reference version\n\n");
	printf("The Student Details are:\n");
	printf("Name: %s\n",K->name);
	printf("Age: %d ~\n",2023-K->age.year);
	printf("Roll No: %d\n",K->roll);
	printf("CGPA Secured: %f\n", K->cgpa);
	
}
int main()
{
	struct student_info s;
	printf("ENter Student Details:\n");
	printf("Enter Year of birth:");
	scanf("%d",&s.age.year);
	printf("Enter Date Month of Birth:\n");
	scanf("%d %d",&s.age.date,&s.age.month);
	printf("Enter Student Roll Number:-\n");
	scanf("%d",&s.roll);
	printf("Enter Student CGPA:\n");
	scanf("%f",&s.cgpa);
	printf("Enter Student Name:\n");
	scanf("%s",s.name);
	disp(s);
	ref(&s);
	return 0;
}
