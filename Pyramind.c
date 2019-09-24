#include<stdio.h>
int main()
{
	int i,j,k,t=65;
	for(i=1;i<6;i++)
	{
		for(j=11-2*i;j>1;j--)
		{
			printf(" ");
		}

        for(j=1;j<=(2*i)-1;j++)
		{
			printf("%c ",t);
		}
		t++;

		printf("\n");
	}
	return 0;
}
