
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){

	   long long int n,ma=0,i;
        cin>>n;
        long long int arr[n]={0};
        for(i=0;i<n;i++){
            arr[i]=i+1;
        }


	long long int high = 0;
	for (i = 0; i < n; i++)
		high = max(high, arr[i]);


	long long int count[high + 1] = {0};
	for (i = 0; i < n; i++)
		count[arr[i]]++;



	long long int counter = 0;

	for (i = high; i >= 1; i--)
	{
		long long int j = i;
	counter = 0;


		while (j <= high)
		{

			if(count[j] >=2)
			cout<<j<<endl;

		else if (count[j] == 1)
				counter++;


			j += i;


			if (counter == 2)
				cout<<i<<endl;
		}
	}



	return 0;
}
}

