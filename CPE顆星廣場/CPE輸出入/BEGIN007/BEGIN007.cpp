#include <iostream>
#include <sstream>
#include <cstdio>

using namespace std;

int main()
{
	string line;
	int ans=0, x;
	while(getline(cin, line, '#'))
	{
		istringstream s(line);
		while(s >> x)ans+=x;
		printf("Sum=%d\n", ans);
		ans=0;
	}
	return 0;
}