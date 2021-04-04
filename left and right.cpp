#include<bits/stdc++.h>
using namespace std;
int main(){

    int l,r,a,m,b;
    cin>>l>>r>>a;

    if(a==0){
            if(l ==0 || r==0 ){
                cout<<0;
            }
            else{
       cout<<2*min(l,r);
    }
    }
    else{
        if(abs(l-r)>=a){
           m= min(l,r)+a;

            cout<<2*m;

        }
        else{
            m=min(l,r);
            b=max(l,r);

            m=m+abs(l-r);

            a=a-abs(l-r);
            m=m+(a/2);
            b=b+(a/2);



                    cout<<(m+b);




        }








}
}
