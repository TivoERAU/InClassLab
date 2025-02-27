
/*
*    File: TivoNdlovu_Homework5
*    Author: Tivo Ndlovu
*    Course: CS 125
*    Assignment: Homework 5
*    References: Class Slides, google, minimal chatgpt for input validation
*    Date: 09/02/25
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int createAndValidateNumber1()
//This function prompts the user to enter an integer and runs through the input to insure only numbers are used, otherwise it returns an error.
//it returns the first number.
{
    char num1[50]="";
    int firstNumber;
    int i;
    int checkInt=0;
    
    
    printf("Enter the first number:\t");
    scanf("%s",num1);
    while (checkInt==0)//this validation part was what took me the longest, I referred to chatgpt, stackoverflow and google to figure
    {//out why my implementation wasn't working and was able to find a solution
        for(i=0;i<strlen(num1);i++)
        {
            if(num1[i]<'0'||num1[i]>'9')//since these are characters its checking ACSII values 48 to 57-->Needed google
            {
                printf("Invalid input! Please enter only integers!\n");
                printf("Enter the first number:\t");
                scanf("%s",num1);
                
            }else{
                checkInt=1;
                
            }    
        }
        
            
    }
    checkInt=0;
    firstNumber=atoi(num1);//char [] to int conversion google
    
    
    return firstNumber;    
}

int createAndValidateNumber2()//unlike python you can only return 1 int value, hence me making 2 functions
//This function prompts the user to enter an integer and runs through the input to insure only numbers are used, otherwise it returns an error.
//it returns the secnd number
{
    char num2[50]=""; 
    int secondNumber;
    int i;
    int checkInt=0;
    
    printf("Enter the second number:\t"); 
    scanf("%s",num2);
    while (checkInt==0)
    {
        for(i=0;i<strlen(num2);i++)
        {
            if(num2[i]<'0'||num2[i]>'9')//since these are characters its checking ACSII values 48 to 57-->Needed google
            {
                printf("Invalid input! Please enter only integers!\n");
                printf("Enter the second number:\t");
                scanf("%s",num2);
                
            }else{
                checkInt=1;
                
            }    
        }
        
            
    }
    secondNumber=atoi(num2);//char [] to int conversion google
    
    
    
    return secondNumber;
}
void bitwiseAnd(int num1,int num2)
//This function takes in 2 integers and performs the AND operation. It prints the result and returns nothing.
{
    int ans=(num1&num2);
    printf("Your result: %d\n",ans);
}
void bitwiseOR(int num1,int num2)
//This function takes in 2 integers and performs the OR operation. It prints the result and returns nothing.
{
    int ans=(num1|num2);
    printf("Your result: %d\n",ans);
}
void bitwiseXOR(int num1,int num2)
//This function takes in 2 integers and performs the XOR operation. It prints the result and returns nothing.
{
    int ans=(num1^num2);
    printf("Your result: %d\n",ans);
}
void twosComp(int num1,int number)
//This function takes in 1 integer and performs the 2's compliment operation. It prints the result and returns nothing.
{
    int ans=(~num1)+1;
    printf("Result for number %d: %d\n",number,ans);//not operator +1 givs you 2's complement
}


int main()
{
    printf("Welcome to the Binary Helper tool!\n");
    printf("First enter 2 numbers and select the type of operation you want.\n");
    
    int play=1;
    int choice1;
    int num1;
    int num2;
    num1=createAndValidateNumber1();
    num2=createAndValidateNumber2();
    printf("Your first number is: %d\n",num1);
    printf("Your second number is: %d\n",num2);
    while(play==1)
    {
    
        printf("Would you like to (1)XOR operation, (2)OR operation, (3)AND operation, (4)2's Complement operation,(5)Change numbers, or (6)Quit Application?:\t");
        scanf("%d",&choice1);
        while(choice1>6||choice1<1)
        {
            printf("Invalid input, please choose an integer from 1-5\n");
            printf("Would you like to (1)XOR operation, (2)OR operation, (3)AND operation, (4)2's Complement operation,(5)Change numbers, or (6)Quit Application?:\t");    
            scanf("%d",&choice1);
            
        }
        switch(choice1)
        {
            case 1:
                bitwiseXOR(num1,num2);
                break;
            case 2:
                bitwiseOR(num1,num2);
                break;
            case 3:
                bitwiseAnd(num1,num2);
                break;
            case 4:
                twosComp(num1,1);
                twosComp(num2,2);
                break;
            case 5:
                num1=createAndValidateNumber1();
                num2=createAndValidateNumber2();
                printf("Your new first number is: %d\n",num1);
                printf("Your new second number is: %d\n",num2);
                break;
            case 6:
                printf("Thank you for using the program!\n");
                play=0;
                break;
        }
    
        
    }
    
    
    
}
