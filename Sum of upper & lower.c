
#include<stdio.h>
int main()
{
    int M[3][3],i,j,uppersum=0,lowersum=0;
    printf("Enter the element for the matrix:\n");
    //element of matrix
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("M[%d][%d] = ",i,j);
            scanf("%d",&M[i][j]);
        }
    }

    printf("\n M = \n");
    for(i=0; i<3; i++)
    {

        for(j=0; j<3; j++)
        {
            printf(" %d ",M[i][j]);

        }
        printf("\n");
    }
    printf("upper sum:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i<j)
            {
                printf("%d ",M[i][j]);
                uppersum= uppersum+M[i][j];
            }
        }
    }
    printf("\n lower sum:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i>j)
            {
                printf("%d ",M[i][j]);
                lowersum= lowersum+M[i][j];
            }
        }
    }
    printf("\n upper sum element = %d\n",uppersum);
 printf("\n lower sum element = %d\n",lowersum);

}

