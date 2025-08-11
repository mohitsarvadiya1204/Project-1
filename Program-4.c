#include<stdio.h>

void pattern(int m)
{
    int i,j;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("@ ");
        }
        printf("\n");
    }
}

int main()
{
    int rows;

    printf("Enter No of rows:");
    scanf("%d",&rows);
    pattern(rows);
    return 0;
}