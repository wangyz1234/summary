#include<bits/stdc++.h>
using namespace std;
int fa[5010],x,y,z,n,m,nu,ans;
struct bian{
	int u,v,w,ne;
}q[400100];
void read(int &x)
{
	x=0;char ch=getchar();int sign=1;
	for(;ch<48||ch>57;ch=getchar());
	for(;ch>=48&&ch<=57;ch=getchar())
		x=x*10+ch-48;
}
bool cmp(const bian &a,const bian &b)
{
	return a.w<b.w;
}
int find(int x)
{
	if(fa[x]==x) return x;
	return fa[x]=find(fa[x]);
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++) fa[i]=i;
	for(int i=1;i<=m;i++)
	{
		read(x);read(y);read(z);
		q[i].u=x;q[i].v=y;q[i].w=z;
	}
	sort(q+1,q+m+1,cmp);
	for(int i=1;i<=m;i++)	
	{
		int k1=find(q[i].u),k2=find(q[i].v);
		if(k1!=k2)
		{
			ans+=q[i].w;
			fa[k2]=k1;
			nu++;
		}
	}
	if(nu!=n-1) puts("orz");
	else cout<<ans;
	return 0;
}
