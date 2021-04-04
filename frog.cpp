#include<bits/stdc++.h>
using namespace std;
int main(){

long long int t,a,b,k;
cin>>t;
while(t--){
    cin>>a>>b>>k;
    if(k%2==0){
        cout<<(a*(k/2))-(b*(k/2))<<endl;
    }
    else{
        cout<<(a*((k/2)+1))-(b*(k/2))<<endl;
    }
}




}
