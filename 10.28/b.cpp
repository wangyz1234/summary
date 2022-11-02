#include<bits/stdc++.h>
using namespace std;
int t,n,b[200],a[400],flag;
int main()
{
	cin>>t;
	while(t--)
	{
		//cout<<t<<"------\n";
		cin>>n;
		memset(a,-1,sizeof(a));
		flag=0;
		//cout<<a[1]<<"\n";
		for(int i=1;i<=n;i++)
		{
			cin>>b[i];
			a[b[i]]=1;
		}
		int num=0;
		for(int i=2*n;i>=1;i--)
		{
			num+=a[i];
			if(num>0)
			{
				flag=1;
				break;
			}
		}
		if(flag)
		{
			puts("-1");
			continue;
		}
		for(int i=1;i<=2*n;i++)
		{
			if(i%2) printf("%d ",b[i/2+1]);
			else
			{
				for(int j=b[i/2]+1;j<=2*n;j++)
				{
					if(a[j]==-1)
					{
						
						printf("%d ",j);
						//system("pause");
						a[j]=1;
						break;
					}
				}
			}
		}	
	}
	return 0;
}
