#include<stdio.h>
void main()
{
	int i, k, j,flag,l;
	for(i=5;i>0;i--)
	{flag=0;
	l=0;
		for(j=0,k=5;j<5,k>0;j++,k--)
		{
			if(i==j||flag==1)
			{
				++l;
				printf("%d",j+k-l);
				flag=1;
			}
			else
			printf("%d",k+j);
		}
		printf("\n");
	}
}
