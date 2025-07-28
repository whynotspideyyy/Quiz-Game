#include<stdio.h>
int main()
{
	int i ;
	int answer1,answer2,answer3,answer4,answer5;
	
	printf("Welcome To The Virat Kohli Game\n\n");
	printf("Press 18 To Start The Game\n");
	printf("Press 0 To Quit The Game\n");
	scanf("%d", &i);
	
	if(i==18)
	{
		printf("The Game Has Start\n\n");
	}
	else if(i==0)
	{
		printf("The Game Has End\n\n");
	}
	else
	{
		printf("Invalid\n\n");
	}
	
	
	if(i==18)
	{
		//First Question
		printf("1. When was Virat Kohli born?\n\n");
		printf("1) 5 November 1988\n");
		printf("2) 15 August 1987\n");
		printf("3) 23 April 1989\n");
		printf("4) 17 December 1990\n");

		printf("Enter Answer : ");
		scanf("%d",&answer1);
		
		if(answer1==1)
		{
			printf("Correct Answer\n\n\n");
		}
		else
		{
			printf("Wrong Answer\n\n\n");
		}
		
		
		//Second Question
		printf("2. Which team did Virat Kohli lead to victory in the 2008 ICC U-19 Cricket World Cup?\n\n");
		printf("1) Australia U-19\n");
		printf("2) India U-19\n");
		printf("3) England U-19\n");
		printf("4) South Africa U-19\n");

		printf("Enter Answer : ");
		scanf("%d",&answer2);
		
		if(answer2==2)
		{
			printf("Correct Answer\n\n\n");
		}
		else
		{
			printf("Wrong Answer\n\n\n");
		}
		
		
		//Third Question
		printf("3. Against which team did Virat Kohli make his ODI debut?\n\n");
		printf("1) Sri Lanka\n");
		printf("2) Pakistan\n");
		printf("3) West Indies\n");
		printf("4) Australia\n");

		printf("Enter Answer : ");
		scanf("%d",&answer3);
		
		if(answer3==1)
		{
			printf("Correct Answer\n\n\n");
		}
		else
		{
			printf("Wrong Answer\n\n\n");
		}
		
		
		//Fourth Question
		printf("4. In which year did Virat Kohli win the Rajiv Gandhi Khel Ratna Award?\n\n");
		printf("1) 2016\n");
		printf("2) 2017\n");
		printf("3) 2018\n");
		printf("4) 2019\n");

		printf("Enter Answer : ");
		scanf("%d",&answer4);
		
		if(answer4==3)
		{
			printf("Correct Answer\n\n\n");
		}
		else
		{
			printf("Wrong Answer\n\n\n");
		}


		//Fifty Question
		printf("5. Which IPL team does Virat Kohli play for?\n\n");
		printf("1) Royal Challengers Bangalore\n");
		printf("2) Mumbai Indians\n");
		printf("3) Chennai Super Kings\n");
		printf("4) Delhi Capitals\n");

		printf("Enter Answer : ");
		scanf("%d",&answer5);
		
		if(answer5==1)
		{
			printf("Correct Answer\n\n\n");
		}
		else
		{
			printf("Wrong Answer\n\n\n");
		}
	}
	return 0;
}
