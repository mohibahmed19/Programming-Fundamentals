#include<stdio.h>
int main()
{
	int arr[3];
	//declare pointer variable
	int*ptr;
	//declare loop iterator variable
	int i;
	//ptr=&arr[0]
	ptr=arr;
	//use for loop to put values in all array elements using pointer notation
	for (i=0;i<3;++i)
	{
		*(ptr+i)=i+1;
	}
	//use for loop to printvalues of all array elements using pointer location
	printf("Displaying value using pointers:\n");
	for(i=0;i<3;i++){
		printf("%d\n",*(ptr+i));
	}
	//use for loop to print addressesof all array elements using pointer notation
	printf("\nDisplaying addresses using pointers:\n");
	for(i=0;i<3;i++){
	printf("%p\n",ptr+i);
	}
}
