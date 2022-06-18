#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

void timer();
void pcClock();

void main()
{
	int c,i;
	upar:
	printf("Menu\nEnter 1 for Local time of PC\nEnter 2 for timer");
	scanf("%d",&c);
	switch (c)
	{
	case 1:
		for (i = 0; i < 99999; i++)
		{
			pcClock();
			sleep(1);
			system("cls");
		}
		break;

	case 2:
		timer();
		break;
	
	default:
		printf("Wrong input !");
		sleep(1);
		system("cls");
		goto upar;
		break;
	}
    getch();
}

void timer()
{
	int n, s, m=0, h, i;
	for (h = 0; h < 24; h++)
    {
		for (m = 0; m < 60; m++)
		{
			for (s = 0; s < 60; s++)
			{
				printf("%d:%d:%d",h,m,s);
        		sleep(1);
        		system("cls");	
			}
		}
    }
}

void pcClock()
{
	time_t rawtime;
	struct tm* timeinfo;

	// Used to store the time
	// returned by localetime() function
	char buffer[80];

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer, 80,"Time is %I:%M:%S%p.",timeinfo);

	// strftime() function stores the
	// current time as Hours : Minutes
	//%I %M and %p-> format specifier
	// of Hours minutes and am/pm respectively*/

	// prints the formatted time
	puts(buffer);
}