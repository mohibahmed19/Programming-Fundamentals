#include<stdio.h>
int main()
{
	int dept,subdept;
	printf("Enter your Department:\n");
	printf("Enter 1 For Computer science:\n");
	printf("Enter 2 for Electrical Engineering:\nEnter your choice:");
	scanf("%d",& dept);
	switch (dept)
	{
		case 1:
			//if computer science;
			printf("Available departments\n");
			printf("1 for DS:\n");
			printf("2 for CY:\n");
			printf("3 for AI:\n");
			printf("Enter your choice:");
			scanf("%d",&subdept);
			switch(subdept)
			{
				case 1:
			    printf("You choose Data Science");
				break;
				case 2:
				printf("You choose Cyber Security");
				break;
				case 3:
			    printf("You choose Artificial Intelligence");
				break;
				default:
				printf("Invalid choice");
				
			}
			break;
		case 2:
		
			// if Electrical Engineering;
				printf("No Subdept");
			break;
			default: 
			printf("Invalid choice");
						
	}
}
	
	

