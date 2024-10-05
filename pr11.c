#include <stdio.h>

int main()
{
   int matchStick = 21;
   int user,i;
   printf("WELCOME TO OUR GAME.\n");
   printf("Initially There are Total 21 Matchsticks.\n");
   
   for(i=1; i<10; i++)
   {
     printf("\nPick Matchstick from 1 to 4 : ");
     scanf("%d",&user);
   
     if(user<5)
     {
       int comp = 5 - user;
   
       printf("Computer picks %d Matchstick.\n",comp);
     
       int a = 5*i;
       int totalMatchstick = matchStick - a;
   
       printf("There are Total %d Matchsticks are Left.",totalMatchstick);
     
       if(totalMatchstick==1)
       {
           break;
       }
     }
     
     else
     {
         printf("Please Pick Matchstick From 1 to 4 Only...");
     }
     
   }
   
   printf("\nSorry You Lost The Game.");
  
  
  
  return 0;
}