#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<random>
#include<ctime>
using namespace std;
int main()
{
	freopen("cowdate.in","w",stdout);
	mt19937 rnd(time(0));
	int n=1000000;
	printf("%d\n",n);
	for(int i=1;i<=n;i++)
		printf("%d\n",rnd()%(n-1)+1);
	return 0;
}