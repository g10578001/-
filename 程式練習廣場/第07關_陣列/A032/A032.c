#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 1024

int main()
{
	char s[max];
	int ans[max]={0};
	gets(s);
	int i;
	for(i=0; i<strlen(s); i++)
	{
		ans[s[i]]++;
	}
	for(i='A'; i<='Z'; i++)
	{
		if(ans[i]>0)
		{
			printf("%c:%d\n", i, ans[i]);
		}
	}
	
	for(i='a'; i<='z'; i++)
	{
		if(ans[i]>0)
		{
			printf("%c:%d\n", i, ans[i]);
		}
	}
	return 0;
}