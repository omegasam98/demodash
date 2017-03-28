/*                                                        WORKING OF THE PROGRAM

The Games is basically to generate a 4 digit random number that doesn't repeat or reccur. So then we use rand func to generate random digits and use arrays so that the numbers generated do not reccur again. Then if the guess number is same as the randomly generated number u win. Otherwise for every digit u guessed that matches with the randomly generated digit and have the same position u get one bull point and if the postions do not match you get a cow point.
*/


#include<stdio.h>
#include<stdlib.h>
main()
{
   int i, j, bull=0, cow=0, hex[10], gu[10];
/*
  1. Bull is to count the score "Bull"
  2. Cow is to count the score "Cow"
  3.hex[] is used to generate the 4-digit number randomly generated
  4.gu[] is used to store the guessed 4 digit number
*/
   for(i=0;i<4;i++)
    {
      hex[i]=random() %10 ; //Generates a random number between 0 and 9
	if(i!=0)
	  {
	    for(j=0;j<i;j++)
	     {
		if(hex[i]==hex[j])
			{
			   hex[i]=random() %10;
			    j--;
			}
	     }
	  }
    }
    printf("\n Enter the guessed 4-digit number(press enter after each digit): ");
    for(i=0;i<4;i++)
      {
          scanf("%d",&gu[i]);
      }
    printf("\n The randomly generated 4-digit number is: ");
    for(i=0;i<4;i++)
        printf("%d",hex[i]);
    printf("\n The guessed 4-digit number is: ");
    for(i=0;i<4;i++)
        printf("%d",gu[i]);
    for(i=0;i<4;i++)
      {
	if(hex[i]==gu[i])
           bull++;
        else
          for(j=0;j<4;j++)
	     {
               if(gu[i]==hex[j])
                  { cow++;
                      break;
                  }
	     }
      }
    if(bull==4)
       printf("\n Congradulations! The digits are matching.. You are the winner!");
    else
       printf("\n You have scored %d bulls and %d cows!", bull, cow);
}
    









