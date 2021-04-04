#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--){

	long long int N,num;

	string s;
	cin>>N;
	cin>>s;
	num = stoi(s,0,2);


	if(num%2==0){
        cout<<"even"<<endl;
	}
	else{
        cout<<"odd"<<endl;
	}
}
}

