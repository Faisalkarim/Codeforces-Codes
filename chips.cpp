#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int n,i,k,cnt=0;


    cin>>n;
    for(i=0;i<n;i++){
        cin>>k;
        if(k%2!=0){
            cnt++;
        }
    }
    cout<<min(cnt,n-cnt);


}
