/*
*File:TivoNdlovu_Homework7
*Author: Tivo ndlovu
*Course: CS 125
*Assignment: Homework 7
*References: Class Notes
*/
#include <stdio.h>
#include <string.h>
int add(num1,num2)
{
    int ans;
    ans=num1+num2;
    return ans;
}
int subtract(num1,num2)
{
    int ans;
    ans=num1-num2;
    return ans;
}
int multiply(num1,num2)
{
    int ans;
    ans=num1*num2;
    return ans;
}
int divide(num1,num2)
{
    int ans;
    ans=num1/num2;
    return ans;
}
int main (int argc,char * argv[])
{
    printf("Inputs entered: %d\n",argc-1);
    printf("Printing inputs:\n");
    int i;
    for(i=1;i<argc;i++)
    {
        printf("Input: %d,%s\n",i,argv[i]);
    }
    int ans;
    int num1;
    int correctCase=1;
    char operator;
    int num2;
    num1= atoi(argv[1]);
    num2= atoi(argv[3]);
    if(strcmp(argv[2],"+")==0)
    {
        ans=add(num1,num2);
    }else if(strcmp(argv[2],"-")==0)
    {
        ans=subtract(num1,num2);
    }else if(strcmp(argv[2],"x")==0)
    {
        ans=multiply(num1,num2);
    }else if(strcmp(argv[2],"/")==0)
    {
        if (num2==0)
        {
            printf("Cannot Divide by 0!\n");
        correctCase=0;
        }else{
            ans=divide(num1,num2);
        }
    }else{
        printf("Incorrect operator choice");
        correctCase=0;
    }
    if(correctCase==1)
    {
        printf("Your answer is: %d\n",ans);
    }
    return 0;
}