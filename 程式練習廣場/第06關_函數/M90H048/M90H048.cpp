#include <stdio.h>
#include <stdlib.h>

int main()
{
	int k, n, i, j, ans=0, x=1;
	double y;
	scanf("%d%d", &k, &n);/*讀取k, n*/
	for(i=1; i<=n; i++)
	{
		for(j=0; j<k; j++)
		{
			x*=i;/*計算i的k次方*/
		}
		ans+=x;
		x=1;
	}
	printf("%d", ans);
	return 0;
}