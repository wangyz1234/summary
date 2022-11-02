#include<bits/stdc++.h>
#define ull unsigned long long
using namespace std;
int num,x,a[10000100],nu;
unsigned long long n,ans=1;
const ull p=1e9+7;
ull ksm(ull a,ull b)
{
	ull an=1,no=a;
	while(b)
	{
		if(b&1)
			an=(an*no)%p;
		no=(no*no)%p;
		b>>=1;
	}
	return an;
}
int main()
{
	cin>>x>>n;
	
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0)	a[++nu]=i; 
		while(x%i==0)	x/=i;
	}
	if(x!=1) a[++nu]=x;
	for(int i=1;i<=nu;i++)
	{
		ull n1=n,cs=0;
		while(n1)
		{
			cs+=n1/a[i];
			n1/=a[i];
		}
	//	cout<<a[i]<<" "<<cs<<"\n";
		ans=(ans%p*ksm(a[i],cs)%p)%p;
	}
	cout<<ans;
	return 0;
}
