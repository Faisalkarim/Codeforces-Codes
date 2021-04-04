#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        long long int n,i,sum=0,h=0,k=0;
        cin>>n;
        long long int a[n]={0};
        for(i=0;i<n;i++){
            cin>>a[i];
        }

        for(i=1;i<n;i++){
           if(a[i]-a[i-1]>0 && k==0){
            sum=sum-1;
            k=1;

            if(sum==0){
                cout<<i+1<<endl;
                break;
            }
           }
           else if( a[i]-a[i-1]<0 && h==0){
            sum+=1;
            h=1;

            if(sum==0){
                cout<<i+1<<endl;
                break;
            }
           }
        }

    }
}
