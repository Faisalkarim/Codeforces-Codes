#include<bits/stdc++.h>
using namespace std;
int n,i,a,aa,bb;
int main()
{
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%d",&a);
		if (a>0) ++aa;
		if (a<0) ++bb;
	}
	if (aa>=(ceil((double)n/2))) cout<<1<<endl;
	else if (bb>=(ceil((double)n/2))) cout<<-1<<endl;
	else cout<<0<<endl;
}
