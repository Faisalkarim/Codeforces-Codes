#include<stdio.h>
int main()
{
	float j,k,c,sum=0;
	scanf("%f",&k);
	for (j=1;j<=k;j++)
	{
		scanf("%f",&c);
		sum=sum+c;
	}
	printf("%.12f",sum/k);

	}
