#include<stdio.h>
int main()
{
	int age,ID;
	printf("Enter Your Age:");
	scanf("%d", &age);
	//
	if(age>=18){
	printf("Do you have a valid id?  (1 for yes 0 for no):");
	scanf("%d", &ID);
	//
	if(ID==1){
		printf("You are eligible \n");
	}
	else{	
		printf("You dont have an ID card \n");
	}
	}
	else{
	printf("You are not eligible");
}
return 0;
}
