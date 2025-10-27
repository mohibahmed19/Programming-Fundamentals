#include <stdio.h>
#include <string.h>
int main(){
	char str1[] = "Programming";
  char str2[5];
  
		strncpy(str2, str1, 4);
		str2[4]='\0';
		printf("First 4 letters:%s \n ", str2);
}

