#include<stdio.h>
int main()
{
	float salary,taxrate,taxamount,remainingsalary;
	printf("Enter your salary:");
	scanf("%f", &salary);
	printf("Enter tax rate:");
	scanf("%f", &taxrate);
	taxamount=(salary*taxrate)/100;
	remainingsalary=salary - taxamount;
	printf("Remaing Salary after tax: %f \n",remainingsalary);
}
