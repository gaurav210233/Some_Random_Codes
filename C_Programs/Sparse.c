#include<stdio.h>
int main()
{	
	int R,C;
	printf("Enter the no. of ROWSs and COLUMNs respectively(space seperated): ");
	scanf("%d %d",&R,&C);
	int Inarr[R][C];
	int buff[2][R*C];
	int count = 0;
	
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			scanf("%d",&Inarr[i][j]);
			if(Inarr[i][j] != 0)
			{	buff[0][count]=i; // Save row no. of element 
				buff[1][count]=j; // Save column no. of element
				count++;
			}
			
		}
	}
	printf("\n");
	int Outarr[3][count];
	
	for(int j=0;j<count;j++)
		{
			Outarr[0][j] = buff[0][j]; // Setting row no.
			Outarr[1][j] = buff[1][j]; // Setting column no.
			Outarr[2][j] = Inarr[buff[0][j]][buff[1][j]]; // Setting value at that position
			
			
		}
		
		for(int i=0;i<3;i++)
	{	
		
		for(int j=0;j<count;j++)
		{
			printf("%d ",Outarr[i][j]);
			
			
		}
		printf("\n");
	}
	
}
