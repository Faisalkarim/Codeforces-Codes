#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        long long int n,round=0,i,s=1;
        cin>>n;
        long long int a[n+1];
        for(i=1;i<=n;i++){
                cin>>a[i];
        }
         for(i=1;i<=n;i++){
            if(a[i]==1 && i!=n){
                    if(s==1){
                        s=2;
                    }
                    else if(s==2){
                        s=1;
                    }
                }
                else if(a[i]>1){
                    break;
                }
        }
        if(s==2){
            cout<<"Second"<<endl;
        }
        else{
            cout<<"First"<<endl;
        }
    }









}
