#include <stdio.h>
#include <stdlib.h>

int cycle_length(int n);

int main()
{
	int i, j, len, k;
	while(scanf("%d%d", &i, &j)!= EOF)
	{
		len = 0;
		if(i>j)
		{
			for(k=j; k<=i; k++)
			{
				int temp = cycle_length(k);
				if(temp > len)len = temp;
			}
		}
		else{
			for(k=i; k<=j; k++)
			{
				int temp = cycle_length(k);
				if(temp > len)len = temp;
			}
		
		}
		printf("%d %d %d\n", i, j, len);
	}
	
	return 0;
}

int cycle_length(int n)
{
	int cycle = 1;
	while(n!=1)
	{
		if(n%2)n = 3*n+1;
		else n = n/2;
		cycle++;
	}
	return cycle;
}