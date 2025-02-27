/*
*   File:TivoNdlovu_InclassEx7.c
*   Author:Tivo Ndlovu
*   Course:CS125
*   Assignment:In Class Ex 7
*   references:Class notes
*   Date:10/02/25
*/
#include <stdio.h>
#include <stdlib.h>

#define ROWS 4
#define COLUMNS 4

void addMatrix(int matrixA[4][4],int matrixB[4][4])
{
    int matrixC[4][4];
    int i;
    int j;
    int k;
    int l;
    int count=0;

    for(i=0;i< ROWS;i++)
    {
        for(j=0;j<COLUMNS;j++)
        {
            matrixC[i][j]=matrixA[i][j]+matrixB[i][j];
        }
    }
//PRINTING RESULT
    printf("\n The result of adding  matrix A and matrix B is:\n");
    for(k=0;k<ROWS;k++)
    {
        for(l=0;l<COLUMNS;l++)
        {
            printf("%d ",matrixC[k][l]);
            count++;
            if(count==4)
            {
                printf("\n");
                count=0;
            }

        }
    } 
}

int main()
{

    int matrixA[4][4]={{5,8,4,9},{1,0,0,2},{8,0,9,8},{7,1,0,4}};
    int matrixB[4][4]={{5,8,0,6},{5,0,7,8},{9,4,8,7},{5,1,9,9}};
    addMatrix(matrixA,matrixB);
}
