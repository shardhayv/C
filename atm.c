#include<stdio.h>
#include<conio.h>

void main()
{
    int amount = 1000, withdraw, choice, pin, cpin=1234, k;
    char transaction = 'y';
  while (pin != cpin)
  {

    printf("ENTER YOUR PIN NUMBER:");

    scanf("%d", &pin);

    if (pin != cpin)

      printf("PLEASE ENTER VALID PASSWORD! \a\n");
  }

    printf("\n********Welcome to NRB Bank ATM Service***********\n");

    printf("1. Check Balance\n");

    printf("2. Withdraw Cash\n");

    printf("3. Change PIN\n");

    printf("4. Quit\n");

    printf("********************************************\n\n");

    printf("Enter your choice: ");

    scanf("%d", &choice);

    switch (choice)
    {

    case 1:

      printf("\n YOUR BALANCE IS : %d ", amount);

      break;

    case 2:

      printf("\n ENTER THE AMOUNT TO WITHDRAW: ");

      scanf("%d", &withdraw);

      if (withdraw % 100 != 0)

      {

        printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");

      } 
      else if (withdraw > (amount - 500))
      {

        printf("\n INSUFFICENT BALANCE");
      } 
      else
      {

        amount -= withdraw;

        printf("\n\n PLEASE COLLECT CASH");

        printf("\n YOUR CURRENT BALANCE IS %d", amount);
      }

      break;

    case 3:

      printf("\n ENTER THE NEW PIN");

      scanf("%d", &cpin);

      printf("YOUR NEW PIN IS %d", cpin);

      break;

    case 4:

      printf("\n THANK YOU FOR USING NRB Bank ATM");

      break;

    default:

      printf("\n INVALID CHOICE");
    }

  printf("\n\n THANKS FOR USING NRB Bank ATM SERVICE");

}