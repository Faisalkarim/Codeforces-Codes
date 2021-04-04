#include<bits/stdc++.h>
using namespace std;
int main(){


   long long int t,n,k;


    int s[10000],a[10000],b[10000];

    cin>>t;
    while(t--){
        cin>>n;
        scanf("%s",s);
        for(int i=0;i<n;i++){
            if(s[i]==2){
                a[i]=1;
                b[i]=1;
            }
            else if(s[i]==1){
                a[i]=1;
                b[i]=0;
            }
              else if(s[i]==0){
                a[i]=2;
                b[i]=1;
            }
        }
       for(int i=0;i<n;i++){
        cout<<a[i];
       }
       cout<<endl;
       for(int i=0;i<n;i++){
        cout<<b[i];
       }
       cout<<endl;

    }

}
