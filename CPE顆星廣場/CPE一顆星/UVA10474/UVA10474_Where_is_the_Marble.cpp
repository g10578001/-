#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

const int maxn = 10000;

int main()
{
	int n, q, x, stone[maxn], kase = 0;
	while(scanf("%d%d", &n, &q)==2 && n){
		printf("CASE# %d:\n", ++kase);
		for(int i=0; i<n; i++)cin >> stone[i];
		sort(stone, stone+n);
		while(q--){
			cin >> x;
			int place = lower_bound(stone, stone+n, x)-stone;
			if(stone[place]==x)printf("%d found at %d\n", x, place+1);
			else printf("%d not found\n", x);
		}
		for(int i=0; i<n; i++)stone[i]=0;
	}
	return 0;
}