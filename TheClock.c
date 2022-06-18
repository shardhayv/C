/*
DIGITAL CLOCK
Project by: Vedant Thakur
*/
#include<stdio.h>
#include<conio.h>
void dClock(int h,int m, int s, char c); // function for clock
void myMinites(int h,int m, int s, char c); //function for minute and second of clock
void main() // main function
{
	int s, m, h; // for clock
	// s for second, for minute, h for hour 
	char c; // for AM/PM
	// c for character
	myMenu: // used for goto statement
	printf("Formate: hh:mm a/p\na for AM and p for PM\nExample 3:58 p\nEnter current time:");
	// Displays Menu
	scanf("%d:%d %c", &h, &m, &c); // Example Enter: "3:45 p" 
	// Takes input from user
	if (h>12 || m>59 || (c!='a' && c!='p')) // checks error before displaying clock
	{
		printf("invilide input !!\n"); // displays if error found
		sleep(2); // holds for 2 second
		goto myMenu; // jumps to above Menu
	}
	while (1) // runs in infinate loop
	{
		dClock(h,m,s,c); // calls function of clock
		break; // breaks from loop
	}
	getch(); // holds the screen untill any key is pressed
}

void dClock(int h,int m, int s, char c) // function for clock
{
	myClock: // used for goto statement
	for (h; h < 12; h++) // loop for hour
    {
		myMinites(h,m,s,c); // calls function for minute
		m=0; // after reaching m=59 resets the value of m to 0
    }
	if (c=='a') // checks at 12 o clock whether it is AM
	{
		c='p'; // changes at 12 o clock whether AM to PM
	}
	else // executes when above if condition is false i.e. when it is PM (c=='p')
	{
		c='a'; // changes at 12 o clock from PM to AM
	}
	myMinites(h,m,s,c); // calls function for minute
	m=0; // after m goes above 59 resets the value of m to 0
	h=1; // after h goes above 12 resets the value of h to 1
	goto myClock; // jumps to myClock
}

void myMinites(int h,int m, int s, char c) //function for minute and second of clock
{
    for (m; m < 60; m++) // loop for minute
	{
		for (s=0; s < 60; s++) // loop for second
		{
			if (c=='a') // checks whether it is AM
			{
				printf("%d:%d:%d AM",h,m,s); // prints Digital Clock
			}
			else // executes when above condition is false
			{
				printf("%d:%d:%d PM",h,m,s); // prints Digital Clock
			}
			sleep(1); // holds for a second
			system("cls");	// clears the output screen
		}
	}
}