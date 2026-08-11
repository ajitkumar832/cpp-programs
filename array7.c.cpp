#include<stdio.h>
int main()
{
	int a[3][4],b[3][4],i,j;
	printf("Entera 12 number of first matrix:\n ");
	for(i=0; i<3; i++)
	{
	 for(j=0; j<4; j++)
	 {
	 	scanf("%d",&a[i][j]);
	 }
	}
	printf("\nMatrix Addition Result:\n");
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%d",a[i]+[j]);
		}
		printf("\n");
	}
	return 0;
}
