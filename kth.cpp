#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    unsigned long long int n,k,i,c=0;

    cin>>t;
    while(t--){
        cin>>n>>k;
        for(i=1;;i++){
            if(i%n!=0){
                c++;
            }
            if(c==k){
                cout<<i<<endl;
                break;
            }
        }
        c=0;
    }







}
