#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int input[3001], check[3001], dif, n, i;
	bool jolly = true;
	while(scanf("%d", &n)!= EOF)
	{
		jolly = true;
		
		//讀取input, check陣列歸零
		for(i=0; i<n; i++){
			scanf("%d", &input[i]);
			check[i]=0;
		}
		for(i=1; i<n; i++)
		{
			dif =abs( input[i]-input[i-1]);
			if(dif<=3000)check[dif]++;
		}
		
		if(check[0]!=0)jolly = false;
		for(i=1; i<(n); i++)
		{
			if(check[i]!= 1)jolly = false;
		}
		
		if(jolly){
			printf("Jolly\n");
		}else{
			printf("Not jolly\n");
		}
			
		
	}
}