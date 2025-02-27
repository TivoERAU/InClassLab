
/*
*    File:TivoNdlovu_Homework4.c
*    Author:Tivo Ndlovu
*    Course:CS 125
*    Assignment:Homework 4
*    references: Class Notes
*    Date:15/01/25
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int play=1;
    while(play==1)
    {
        int min=50;
        int max=70;
        int flightDistance=rand() % (max - min + 1) + min;
        int errorMargin=5;
        int autopilotStatus=0;
        int elevation=38000;
        int secondsToDest=10;
        int courseChoice;
        
        printf("\nAutopilot Simulator Initialized!\n");
        printf(" \n");
        printf("Elevation: %d\n",elevation);
        printf("Distance from flight path: %d\n",flightDistance);
        printf("Autopilot Status: disabled\n");
        printf("Time to destination: %d seconds\n",secondsToDest);
        
        while(secondsToDest>0)
        {
            printf("Would you like to correct the plane(1), or stay on course(2)?:\t ");
            scanf("%d",&courseChoice);
            while(courseChoice<1||courseChoice>2)
            {
                printf("Incorrect input, please select 1 or 2.\n");
                printf("Would you like to correct the plane(1), or stay on course(2)?:\t ");
                scanf("%d",&courseChoice);
                
            }
            int max2=25;
            int min2=1;
            int randDist=rand() % (max2-min2+1)+min2;
            
            if(courseChoice==1)
            {
                flightDistance=flightDistance-randDist;    
            }else{
                flightDistance=flightDistance+randDist;
            }
            sleep(1);
            --secondsToDest;
            printf(" \n");
            printf("Distance from flight path: %d\n",flightDistance);
            autopilotStatus=(flightDistance<=errorMargin&&flightDistance>=-errorMargin)? 1:0;
            if (autopilotStatus==0)
            {
                printf("Autopilot Status: disabled\n");    
            }else{
                printf("Autopilot Status: enabled\n");
            }
            printf("Time to destination: %d seconds\n",secondsToDest);
        }
        sleep(1);
        printf("\nTime has expired!\n");
        if(flightDistance>=-errorMargin-1&&flightDistance<=errorMargin-1)
        {
            printf("Congratulations, you have won!\n");
        }else{
            printf("You have strayed too far from course, you lose!\n");
        }
        printf("Would you like to play again(1) or quit(2)?\t");
        scanf("%d",&play);
        while(play<1 || play>2)
        {
            printf("Invalid selection, please select 1 or 2.\n");
            printf("Would you like to play again(1) or quit(2)?\t");
            scanf("%d",&play);
            
        }
    
    }
    printf("Thank you for playing!\n");
    return 0;
}