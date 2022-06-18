#include<stdio.h>
void dClock(int h,int m, int s, char c);
void myMinites(int h,int m, int s, char c);

void main()
{
	int s, m, h;
	char c;
	myMenu:
	printf("Formate: hh:mm a/p\na for AM and p for PM\nExample 3:58 p\nEnter current time:");
	scanf("%d:%d %c", &h, &m, &c);
	if (h>12 || m>59 || (c!='a' && c!='p'))
	{
		
		printf("invilide input !!\n");
		sleep(2);
		goto myMenu;
	}
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
		myMinites(h,m,s,c); 
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
	myMinites(h,m,s,c);
	m=0; 
	h=1; 
	goto myClock; 
}


void myMinites(int h,int m, int s, char c)
{

    for (m; m < 60; m++) 
	{
		for (s=0; s < 60; s++) 
		{
			if (c=='a') 
			{
				printf("%d:%d:%d AM",h,m,s);
			}
			else 
			{
				printf("%d:%d:%d PM",h,m,s);
			}
			sleep(1); 
			system("cls");
		}
	}
}