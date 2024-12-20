#include<stdio.h>
int main()
{
    int a[5][5]={
    {
        46,0,0,0,0
    },
    {
        66,0,0,0,0
    },
    {
        81,0,0,0,0
    },
    {
        93,0,0,0,0
    },
    {
        101,0,0,0,0
    },
    };
    for(int row=0;row<5;row++)
    {
        for(int column=0;column<5;column++)
        {
            printf("%d  ",a[row][column]);
        }
        printf("\n\n");
    }



    for(int column=1;column<5;column++)
    {
        for(int row=0;row<5-column;row++)
        {
            a[row][column]=a[row+1][column-1] - a[row][column-1];
        }
    }



    printf("\n\n\n");

    for(int row=0;row<5;row++)
    {
        for(int column=0;column<5;column++)
        {
            printf("%d  ",a[row][column]);
        }
        printf("\n\n");
    }



    for(int column=1; column<=5;column++)
    {
        int temp = a[5-column][column-1];

        a[5-column][column-1] = a[0][column-1];

        a[0][column-1] = temp;

    }




    printf("\n\nTransports \n");
    for(int row=0;row<5;row++)
    {
        for(int column=0;column<5;column++)
        {
            printf("%d  ",a[row][column]);
        }
        printf("\n\n");
    }
    return 0;
}
