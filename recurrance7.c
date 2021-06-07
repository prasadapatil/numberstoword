#include<stdio.h>
void main()
{
	int i,x,n,j;
	int count=0;
    	printf("Enter the value for N\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		j=i;
		while(j>10)
			{	
				x=j%10;
				if(x==7)
					count++;
				j=j/10;
			}
			if(j==7)
				count++;
	}
	printf("number of occourance of number 7 is %d\n",count);
}
