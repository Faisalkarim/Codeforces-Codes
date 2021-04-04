#include <iostream>
#include <algorithm>

// Function to find a pair in an array with given sum using Sorting
void findPair(int arr[], int n, int sum)
{
	// sort the array in ascending order
	std::sort(arr, arr + n);

	// maintain two indices pointing to end-points of the array
	int low = 0;
	int high = n - 1;

	// reduce search space arr[low..high] at each iteration of the loop

	// loop till low is less than high
	while (low < high)
	{
		// sum found
		if (arr[low] + arr[high] == sum)
		{
			std::cout << "Pair found";
			return;
		}

		// increment low index if total is less than the desired sum
		// decrement high index is total is more than the sum
		(arr[low] + arr[high] < sum)? low++: high--;
	}

	// No pair with given sum exists in the array
	std::cout << "Pair not found";
}

// Find pair with given sum in the array

#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){
        long long int n,ma=0,i;
        cin>>n;
        long long int arr[n]={0};
        for(i=0;i<n;i++){
            arr[i]=i+1;
        }



	long long int low = 0;
	long long int high = n - 1;


	while (low < high)
	{

		ma=max(ma,__gcd(arr[low],arr[high]));


		(ma>__gcd(arr[low],arr[high]))? low++: high--;
	}
	cout<<ma<<endl;




}
}
