#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){
        unsigned long long int n,k,c=0;
        cin>>n>>k;
        while(n){
            c=c+(n%k)+1;
            n=n/k;

        }


        cout<<c-1<<endl;
    }




}
