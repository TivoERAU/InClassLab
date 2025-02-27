/*
*   File: InClassEx4
*   Author: Tivo Ndlovu
*   Course: CS 125
*   Assignment: In class Ex
*   References: Class Slides
*   Date: 27/01/25
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice1;
    int num1;
    int num1bin;
    int num2;
    int num2bin;
    int choice2;
    int ans;
    int shiftCount;
    int shiftDirection;
    int num1shift;
    int num2shift;
    int randNum1;
    int randNum2;
    int max=100;
    int min=1;
    int currentIndex;
    
    printf("Would you like to (1)Enter 2 numbers or (2)Randomly generate 2 numbers?: \t");\
    scanf("%d",&choice1);
    switch(choice1)
    {
    case 1:
        printf("Enter first number:\t");
        scanf("%d",&num1);
        printf("Enter the second number:\t");
        scanf("%d",&num2);
        printf("Do you want to do (1)Bitwise AND (2)Bitwise OR (3)Bitwise XOR or (4)Shift bits:\t");
        scanf("%d",&choice2);
        
        switch(choice2)
        {
        case 1:
            printf("Input 1: %d\n",num1);
            printf("Input 2: %d\n",num2);
            ans=(num1&&num2);
            printf("%d",ans);
            break;
        case 2:
            printf("Input 1: %d\n",num1);
            printf("Input 2: %d\n",num2);
            ans=(num1||num2);
            printf("%d",ans);
            break;
        case 3:
            printf("Input 1: %d\n",num1);
            printf("Input 2: %d\n",num2);
            ans=(num1^num2);
            printf("%d\n",ans);
            break;
        case 4:
            printf("Input 1: %d\n",num1);
            printf("Input 2: %d\n",num2);
            printf("Enter the number of time you want to shift:\t");
            scanf("%d",&shiftCount);
            printf("Enter (1) for Left shift and (2) for right shift:\t");
            scanf("%d",&shiftDirection);
            switch(shiftDirection)
            {
            case 1:
                num1shift=(num1<<shiftCount);
                num2shift=(num2<<shiftCount);
                printf("Output 1: %d\n",num1shift);
                printf("Output 2: %d\n",num2shift);
                break;
            case 2:
                num1shift=(num1>>shiftCount);
                num2shift=(num2>>shiftCount);
                printf("Output 1: %d\n",num1shift);
                printf("Output 2: %d\n",num2shift);
                break;    
            }
            break;
            
        }
        
        break;
    case 2:
        randNum1=rand() % (max-min+1) +min;
        randNum2=rand() % (max-min+1) +min;
        num1=randNum1;
        num2=randNum2;
        printf("Random number 1: %d\n",num1);
        printf("Random number 2: %d\n",num2);
        printf("Do you want to do (1)Bitwise AND (2)Bitwise OR (3)Bitwise XOR or (4)Shift bits:\t");
        scanf("%d",&choice2);
        
        switch(choice2)
        {
        case 1:
            printf("Input 1: %d\n",num1);
            printf("Input 2: %d\n",num2);
            ans=(num1&&num2);
            printf("%d\n",ans);
            break;
        case 2:
            printf("Input 1: %d\n",num1);
            printf("Input : %d\n",num2);
            ans=(num1||num2);
            printf("%d\n",ans);
            break;
        case 3:
            printf("Input 1: %d\n",num1);
            printf("Input 2: %d\n",num2);
            ans=(num1^num2);
            printf("%d\n",ans);
            break;
        case 4:
            printf("Input 1: %d\n",num1);
            printf("Input 2: %d\n",num2);
            printf("Enter the number of time you want to shift:\t");
            scanf("%d",&shiftCount);
            printf("Enter (1) for Left shift and (2) for right shift:\t");
            scanf("%d",&shiftDirection);
            switch(shiftDirection)
            {
            case 1:
                num1shift=(num1<<shiftCount);
                num2shift=(num2<<shiftCount);
                printf("Output 1: %d\n",num1shift);
                printf("Output 2: %d\n",num2shift);
                break;
            case 2:
                num1shift=(num1>>shiftCount);
                num2shift=(num2>>shiftCount);
                printf("Output 1: %d\n",num1shift);
                printf("Output 2: %d\n",num2shift);
                break;    
            }
            break;
            
        }
        
        break;
        
   
    }



}
