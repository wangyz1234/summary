#include<bits/stdc++.h>
using namespace std;
int q,n,a[200],b[20],nu,c[3000];
int main()
{
	cin>>q;
	c[1]=0,c[2]=1,c[4]=2,c[8]=3,c[16]=4,c[32]=5;
	c[64]=6,c[128]=7,c[256]=8,c[512]=9,c[1024]=10;
	while(q--)
	{
		nu=0;int d,flag=0;
		memset(b,0,sizeof(b));
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>d;
			if(d>2048) continue;
			if(d==2048) flag=1;
			else	a[++nu]=d;
		}
		if(flag)
		{
			puts("YES");
			continue;
		}
		sort(a+1,a+nu+1);
		for(int j=1;j<=nu;j++)	b[c[a[j]]]++;
		for(int i=1;i<=11;i++) b[i]+=b[i-1]/2;
		if(b[11]) puts("YES");
		else puts("NO");
	}
	
	return 0;
}
