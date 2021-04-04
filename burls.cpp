#include<bits/stdc++.h>
using namespace std;
int main(){


    int t;
    cin>>t;

    while(t--){
        long long int n,sum,k;
        cin>>n;
        sum=n;
        while(1){
                if(n<10){
                    cout<<sum<<endl;
                    break;
                }
            sum+=(n/10);
            n=(n/10)+(n%10);
        }
    }









}
