#include<stdio.h>
#include<stdbool.h>
int main()
{
    printf("Enter the order of Square: ");
    int P;
    bool flag = true; 
    scanf("%d",&P);
    int inarr[P][P];

    printf("Enter the elements space-seperated: ");
    for(int i = 0; i < P; i++)
    {
        for(int j = 0; j < P ; j++)
        {
            scanf("%d",&inarr[i][j]);
        }    
    }

    for(int i = 0; i < P; i++) // Printing in Matrix-format
    {
        for(int j = 0; j < P ; j++)
        {
           printf("%d ",inarr[i][j]);
        }
        printf("\n");
    }

    int Sum[4] = {};        // Sum[0]--> D1-Sum; Sum[1]--> D2-Sum; Sum[2]--> R-Sum; Sum[3]--> C-Sum
    for(int i = 0; i < P; i++)
    {
        Sum[0] = Sum[0] + inarr[i][i];      // Diagonal_1 left to right
        Sum[1] = Sum[1] + inarr[i][P-i-1];  // Diagonal_2 right to left
    }

    if(Sum[0] != Sum[1])
    {
        flag = false;
        goto result;
    }

    for(int i = 0; i < P; i++)
    {
        for(int j = 0; j < P; j++)
        {
            Sum[2] = Sum[2] + inarr[i][j];  // Sum Row-wise
            Sum[3] = Sum[3] + inarr[j][i];  // Sum Column-wise
        }

        if(Sum[2] != Sum[0] || Sum[3] != Sum[1])
        {
            flag = false;
            goto result;
        }
        Sum[2] = Sum[3] = 0;
    }

    result:
    if(flag == true)printf("It\'s a Magic Square");
    else printf("It\'s not a Magic Square");
    return(0);
}