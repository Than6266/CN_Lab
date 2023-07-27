#include<stdio.h>

struct node{
	int roll;
	float cgpa;
};

int main(){
	struct node n1,*ptr;
	n1.roll=2834;
	n1.cgpa=8.62;
	ptr=&n1;
	printf("Using Structure Pointer\n");
	printf("Roll No is %d\n",ptr->roll);
	printf("CPGA is %f\n",ptr->cgpa);
}
