int l=4;
void question4()
{

	int year;
	printf("\n 4. Write a C program to find whether a given year is a leap year or not.\n");
	printf("\n enter a year :-> ");
	scanf("%d",&year);
	if(year%400==0)
	printf("%d is a leap year",year);
	else if(year%100==0)
	printf("\n%d is not a leap year",year);
	else if(year%4==0)
	printf("\n%d is a leap year",year);
 	 else
		printf("\n%d is a not leap year",year);
}

