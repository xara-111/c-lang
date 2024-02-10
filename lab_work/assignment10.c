/*
//FIND X TO THE POWER K

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int base;
    int power;
    int result;
    printf("Enter the base: ");
    scanf("%d",&base);

    printf("Enter the power: ");
    scanf("%d",&power);

    result=pow(base,power);
    printf("Result is %d\n",result);
}
*/


/*
#include<stdio.h>
#include<math.h>

void roots(float a, float b, float c);

int main()
{
    float a;
    float b;
    float c;

    printf("Enter the value of a: ");
    scanf("%f",&b);

    printf("Enter the value of b: ");
    scanf("%f",&a);

    printf("Enter the value of c: ");
    scanf("%f",&c);

    roots(a,b,c);
}

void roots(float a, float b, float c)
{
    float d;
    float root1;
    float root2;

    d=(b*b)-(4*a*c);
    printf("d will be: %f\n",d);

    if(d>0)
    {
        root1=-b+sqrt(d)/(2*a);
        root2=-b-sqrt(d)/(2*a);
        printf("The real roots are %f, %f\n", root1, root2);
    }
    else if(d==0.000)
    {
        root1=root2=(-b)/(2*a);
        printf("Roots are equal %f\n", root1);
    }
    else
    {
        root1=(-b)/(2*a);
        root2=sqrt(d)/(2*a);
        printf("Roots are imaginary\n");
        
    }
   

}
*/

/*
#include <stdio.h>
int main() {
  int a[10][10], transpose[10][10], r, c;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);

  // asssigning elements to the matrix
  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }

  // printing the matrix a[][]
  printf("\nEntered matrix: \n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("%d  ", a[i][j]);
    if (j == c - 1)
    printf("\n");
  }

  // computing the transpose
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    transpose[j][i] = a[i][j];
  }

  // printing the transpose
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c; ++i)
  for (int j = 0; j < r; ++j) {
    printf("%d  ", transpose[i][j]);
    if (j == r - 1)
    printf("\n");
  }
  return 0;
}
*/

#include<stdio.h>


struct studata
{
	int roll;
	char name[50];
	char depart[50];
	char course[20];
	int yoj;
}nos[450] = { 03, "Kishor", "IT", "B.tech", 2014,
10, "Mohammad Siraj Alam", "Computer Science", "B.Tech", 2014,
53, "Deepak", "Computer Applications", "BCA", 2013,
13, "Karan", "Mechanical", "Diploma", 2013,
1, "Aakash", "Tool and Die", "Diploma", 2012,
2, "Ramesh", "IT", "B.tech", 2014
};
void student_in_year(int year)
{
	int i;
	printf("\n\t\tYear of joining : %d\n\n", year);
	for (i = 0; i <= 450; i++)
	{
		if (nos[i].yoj == year)
		{

			printf("\nRoll Number : %d", nos[i].roll);
			printf("\nName : %s", nos[i].name);
			printf("\nDepartment : %s", nos[i].depart);
			printf("\nCourse : %s\n", nos[i].course);
		}
	}
}
void student_data(int enroll)
{
	int i;
	printf("\nRoll number : %d", enroll);
	for (i = 0; i <= 450; i++)
	{
		if (nos[i].roll == enroll)
		{
			printf("\nName : %s", nos[i].name);
			printf("\nDepartment : %s", nos[i].depart);
			printf("\nCourse : %s\n", nos[i].course);
			printf("\nYear of joining : %d\n", nos[i].yoj);
		}
	}
}
int main()
{
	int yoj, roll;
	printf("\nEnter year of joining of the students : ");
	scanf("%d", &yoj);
	student_in_year(yoj);
	getch();
	//system("cls");
	printf("\nEnter the roll number of the studnet you want data : ");
	scanf("%d", &roll);
	student_data(roll);
	getch();
	return 0;
}