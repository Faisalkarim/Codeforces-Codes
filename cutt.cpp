#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,a,b,c,d,s;
        cin>>t;
      while(t--){
        cin>>a>>b>>c>>d;
       if(a>b) swap(a,b);
       if(c>d) swap(c,d);

       if(b==d && a+c==b){
        cout<<"Yes"<<endl;
       }
       else{
        cout<<"No"<<endl;
       }
      }



}
