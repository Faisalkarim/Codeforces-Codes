#include<bits/stdc++.h>
using namespace std;
int main(){


    int t;
    cin>>t;
    while(t--){
        unsigned long long int a,b,n,h,l,c=0;
        cin>>a>>b>>n;
        if(a==n || b==n){
            cout<<"1"<<endl;
        }
        else{
            h=max(a,b);
            l=min(a,b);

            while(l<=n){
               if(l>h){
                swap(h,l);
               }
               l+=h;
               c++;

            }


            cout<<c<<endl;

        }
    }









}
