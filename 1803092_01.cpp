#include<bits/stdc++.h>
using namespace std;
int main(){

    int T;
    cin>>T;

    int n;
    cin>>n;

    int a[n]={0};

    for(int i=0;i<n;i++){
      cin>>a[i];
    }

    sort(a,a+n);
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]<=T){
            cnt++;
            T=T-a[i];
        }
        else{
            break;
        }
    }
    cout<<cnt;











}
