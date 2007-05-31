/*************************************************************
Author: AHMAD NU'MAN, AZIZAN HAKIM & YEW CHUO SHING
ID: DC95777, DC95766 & DC95793
Description: ASSIGNMENT ( QUESTION 3 )
Input: ENTER '5' TO PRINT NUMBERPATTERN OR '0' TO EXIT
Output: PATTERN OF NUMBER
*************************************************************/
#include <stdio.h> //Declaring Header file

int main()//start of the function
{

	int index, counter, num; //Declare variables
	index = counter = 0; //Set the initial value
	printf("   OoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOo\n");
	printf("     ******************************************\n");
	printf("    |                                          |\n");
	printf("    | ^_^  NUMBER PATTERN IN C PROGRAMING  ^_^ |\n ");
	printf("   |                                          |\n");
	printf("     ******************************************\n");
	printf("   OoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOoOo\n\n");
	printf("        Hi!Welcome to CMPD 144-PROGRAMMING 1!\n\n");

	printf("Try enter number '5'to see MAGIC or enter '0' to EXIT : "); //get user input 5 to run 0 to exit
	scanf_s("%i", &num);

	if (num != 0) //program will run if num is not equal to 0
	{
		printf("\n*****   MAGIC   *****\n");
		printf("         ||\n");
		printf("       __||__\n");
		printf("       \\    /\n");
		printf("        \\  /\n");
		printf("         \\/\n");

		
		
		for (index = num; index >= 1; index--)
		//for looping process run if index >=1;
		{
			for (counter = index; num >= counter; counter++)
			//nested for looping process run if num >=counter;  increment the value of counter by one each time the iteration is excuted
			{
				printf("%i", index);//display the index output
			}
			printf("\n");
		}
		printf("\n\nBye Bye :)\n");//display message when end of the looping process
	}
	else
		printf("\nBye!T.T\n\n");//if user enter 0, print the message
		return 0; //return value to the main() function & end of programme
}