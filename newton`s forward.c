#include<stdio.h>
int main()
{
    double a[5][5]={
        {
            0.1736,0,0,0,0
        },
        {
            0.3420,0,0,0,0
        },
        {
            0.5000,0,0,0,0
        },
        {
            0.6428,0,0,0,0
        },
        {
            0.7660,0,0,0,0
        }

    };
    int row,column;
    for(column=1;column<5;column++)
    {
        for(row=0;row<row-column;row++)
        {
            a[row][column]=a[row+1][column] - a[row][column-1];
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%lf  ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
