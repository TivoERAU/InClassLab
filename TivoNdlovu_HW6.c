
/*
*    File:TivoNdlovu_Homework6.c
*    Author:Tivo Ndlovu
*    Course:CS125
*    Assignment:Homework 6
*    References:Class notes, google(for understanding+examples )
*    Date:16/02/25
*/
#include <stdio.h>

int generateTriangle(int n,int counter,int triangle[n][n])//n=4,3,2,1...break, counter=1, matrix updates
{
    if(n<=0)
    {
        return 0;//break the loop
    }
    
    int i;
    
    for(i=0;i<n;i++)
    {
        triangle[n-1][i]=counter;//3,0;3,1;3,2;3,3...2,0;2,1;2,2
        counter++;
    }
   
    //result is printing backwards
    generateTriangle(n-1,1,triangle);//reccursion call
    
    //after the loop! ( for back to front-last case to first)
     for(i=0;i<n;i++)
    {
        printf("%d",triangle[n-1][i]);    
    }
    printf("\n");
    
    
    
}
int main()
{
    int n;
    int counter=1;
    printf("Enter the number of rows (100 limit):\t");
    scanf("%d",&n);
    while(n>100||n<0)
    {
        printf("Invalid entry! Please enter an integer from 1-100\n");
        printf("Enter the number of rows (100 limit):\t");
        scanf("%d",&n);
    }
    int triangle[n][n];
    
    printf("Result:\n");
    generateTriangle(n,counter,triangle);
    
    
    

    return 0;
}