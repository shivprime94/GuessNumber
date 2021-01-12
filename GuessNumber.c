#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

void enter();
void glt_answer();

int main()
{
    int randomNumber, yourNumber, FriendNumber ;
    int total=0;
    float half =0 , AfterSubstractionNumber=0 ;
    srand(time(0));
    randomNumber = rand() % 100 + 1;

    printf("Me bata sakta hun tumhare dimaag me kya chal raha hai\n");
    printf("Chalo aek game khelte hain\n");
    printf("Please press Enter to continue :)\n");
    enter();

    printf("Enter yourNumber:\n");
    scanf("%d", &yourNumber);
    printf("Enter FriendNumber same as Your's number means Your and friend number is same:\n");
    scanf("%d", &FriendNumber);
    printf("The randomNumber is %d \n", randomNumber);
    
    
    printf("Add these 3 numbers and put here and Press Enter.......\n");
    scanf("%d" , &total);
    enter();
     
    printf("Now half the total sum you got and put value...and Press Enter\n");
     scanf("%f", &half);
  
  
    printf("Subtract Your friend number from half you have done! and put that in console..and  Press Enter\n");
     scanf("%f", &AfterSubstractionNumber);
   
   
    printf("Please press Enter if you have done calculation part\n");
    enter();
    printf("Mujhe pata chal gya tumhare dimaag me kya chal  raha hai xd.... Press enter.....\n");
     enter();
   
   
    printf("YourNumber is %d \n", (randomNumber) / 2.0);

    printf("Kyun maja aaya , dobara run karke dekh lo agar koi shak ho :)\n");
    return 0;
}

void enter()
{
    char enter;
    enter = 0;
    while (enter != '\r' && enter != '\n')
    {
        enter = getchar();
    }
}


