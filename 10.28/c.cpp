#include<bits/stdc++.h>
using namespace std;
int t,n,m,a[100010],b,po;
double p,ans=1.000000;

int main()
{
	cin>>t;
	while(t--)
	{
		scanf("%d%d", &n, &m);
		po=0;
		ans=1.0000000;
		for(int i=1;i<=n;i++) scanf("%d", &a[i]);
		for(int i=n;i>=1;i--)
		{
			if(a[i]!=i)
			{
				po=i;
				break;
			}	
		}
		if(po==0)
		{
			cout<<"1.000000"<<endl;
		//	continue;
		}
		else
		{
		for(int i=1;i<=m;i++)
		{
			scanf("%d%lf",&b,&p);
			if(b>=po)
			{
				ans*=(1.000000-1.0*p);
				//cout<<i<<" "<<ans<<"-------\n";
			}
		}
		printf("%.6lf\n", 1-ans);
		}
	}
	return 0;
}



//#include <bits/stdc++.h>
//using namespace std;
//int t,a[100010],n,m,po,b;
//double ans,p;
//int main()
//{
//    int t;
//    scanf("%d", &t);
//    while(t --)
//	{
//        po=0;ans=1;
//        scanf("%d%d", &n, &m);
//    	for(int i=1;i<=n;i++)
//        	scanf("%d", &a[i]);
//        for(int i=n;i>=1;i--)
//        	if(a[i]!=i)
//        	{
//        		po=i;
//        		break;
//        	}
//        for(int i=1;i<=m;i++)
//        {
//        	scanf("%d%lf",&b,&p);
//        	if(b>=po)
//        		ans*=(1.0-p);
//        }
//        if(po==0) printf("1.000000\n");
//        else printf("%.6lf\n", 1-ans);
//    }
//    return 0;
//} 
