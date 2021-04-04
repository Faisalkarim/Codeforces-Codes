#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){

        long long int a,aa,b,bb,x,y,n,mi,l,k,ll,kk;
        cin>>a>>b>>x>>y>>n;
        unsigned long long int s=0,ns=0;

       if(a<b){
        swap(a,b);
        swap(x,y);
       }
       if((a-x)+(b-y)<=n){
        s=x*y;
        cout<<s<<endl;
        continue;
       }
       aa=a;
       bb=b;

       l= (a-x);
       k= (b-y);

        if(l>=n){
            a=a-n;
            s= a*b;
        }
        else{

            b=b-(n-l);
            s= x*b;
        }

        ll= (aa-x);
        kk=(bb-y);

        if(kk>=n){
            bb=bb-n;
            ns=aa*bb;
        }
        else{
            aa=aa-(n-kk);
            ns=y*aa;
        }

       if(s>ns){
        cout<<ns<<endl;
       }
       else{
        cout<<s<<endl;
       }


    }
}
