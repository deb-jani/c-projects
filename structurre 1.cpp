#include <stdio.h>
struct stud
{
	int rlno;
	char name;
	float eng;
	float math;
	float sci;
};
int main()
{
	struct stud s[5];
	printf("Enter info\n");
	for (int i=0;i<5;i++)
	{
		printf("Enter roll no of student %d\t", i+1);
		scanf("%d", &s[i].rlno);
		printf("Enter name of student");
		scanf("%s", &s[i].name);
		printf("Enter english marks");
		scanf("%f",&s[i].eng);
		printf("Enter math marks");
		scanf("%f",&s[i].math);
		printf("Enter science marks");
		scanf("%f",&s[i].sci);
		float total=0.0;
		total=(s[i].eng+s[i].sci+s[i].math)/3;
		printf("Average of student %d is %.2f",i+1,total);
	}
	return 0;
}
