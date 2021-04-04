#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){
        long long int n,k;
        cin>>n;

        if(n%2==0){
            cout<<n/2<<" "<<n/2<<endl;
        }
        else{
            if(n%9==0){
                k=n/9;
                cout<<k*3<<" "<<k*6<<endl;
            }
            else{
                cout<<"1 "<<n-1<<endl;
            }
        }


    }





}
