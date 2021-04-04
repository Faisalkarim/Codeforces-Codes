#include<bits/stdc++.h>
using namespace std;
int main(){


    int n,t,sum=0,su=0;
    cin>>n;
    int a[n];



      for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
      }
      for(int i=0;i<n;i++){
        su+=a[i];
        if(sum%2==0){
        if(su>=(sum/2)){
            cout<<i+1;
            break;
        }
        }
        else{
            if(su>=(sum/2)+1){
                cout<<i+1;
                break;
        }

        }
      }
















}
