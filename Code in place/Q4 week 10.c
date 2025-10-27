#include <string.h>
#include <stdio.h>
int main(){
	char str1[20];
	char str2[10];
	printf("Enter string 1:");
	scanf("%s",&str1);
	printf("Enter string 2: ");
	scanf("%s",&str2);
	int result = strcmp(str1,str2);
	if (result==0){
		printf("Strings are equal.");
	}
	else if(result<0){
		printf("String 1 is smaller than string 2");
	}else{
		printf("String 1  is greater than string 2");
	}
	return 0;
	
}
