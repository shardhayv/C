#include <stdio.h>
#include<conio.h>
void dClock(int h,int m, int s, char c);
void main()
{
	int n, s, m=0, h, i;
	char c;
	printf("Formate: hh:mm a\nExample:3:58 p\nEnter current time:");
	scanf("%d:%d %c", &h, &m, &c);
	while (1)
	{
		dClock(h,m,s,c);
		break;
	}
	getch();
}

void dClock(int h,int m, int s, char c)
{
	myClock:
	for (h; h < 12; h++)
    {
		for (m; m < 60; m++)
		{
			for (s=0; s < 60; s++)
			{
				if (c=='a')
				{
					printf("%d:%d:%d AM",h,m,s);
				}
				if (c=='p')
				{
					printf("%d:%d:%d PM",h,m,s);
				}
				
        		sleep(1);
        		system("cls");	
			}
		}
		m=0;
    }
	if (c=='a')
	{
		c='p';
	}
	else
	{
		c='a';
	}
	for (m; m < 60; m++)
	{
		for (s=0; s < 60; s++)
		{
			if (c=='a')
			{
				printf("%d:%d:%d AM",h,m,s);
			}
			if (c=='p')
			{
				printf("%d:%d:%d PM",h,m,s);
			}
			sleep(1);
			system("cls");	
		}
	}
	m=0;
	h=1;
	goto myClock;
}
