#include<bits/stdc++.h>
using namespace std;
int n,p,q[2001000],x,nu;
void read(int &x)
{
	char ch=getchar();x=0;
	for(;ch<48||ch>57;ch=getchar());
	for(;ch>=48&&ch<=57;ch=getchar())
		x=x*10+ch-48;
}
void up(int i)
{
	if(i/2&&q[i/2]>q[i])
	{
		swap(q[i/2],q[i]);
		up(i/2);
	}
}
void add(int x)
{
	q[++nu]=x;
	up(nu);
}

void down(int x)
{
	int x1=x;
	if(x*2<=nu&&q[x*2]<q[x1]) x1=x*2;
	if(x*2+1<=nu&&q[x*2+1]<q[x1]) x1=x*2+1;
	if(x1!=x)
	{
		swap(q[x1],q[x]);
		down(x1);
	}
}
void push()
{
	swap(q[1],q[nu--]);
	down(1);
}

int main()
{
	read(n);
	while(n--)
	{
		read(p);
		if(p==1)
		{
			read(x);
			add(x);
		}
		else if(p==2)
			printf("%d\n",q[1]);
		else if(p==3)
			push();
	}
	return 0;
}
