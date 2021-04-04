#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
     int n;
        cin>>n;
        int ind[n]={0},ele[n]={0};
        for(int i=0;i<n;i++){
            cin>>ele[i];
            ele[i]=ele[i]%2;
            ind[i]=i%2;
        }
        int s=0,h=0;
        for(int i=0;i<n;i++){
            if(ele[i]==0){
                h++;
            }
            if(ind[i]==0){
                s++;
            }

        }
        if(s!=h){
            cout<<"-1"<<endl;

        }
        else{



         int c=0;
        for(int i=0;i<n;i++){

            if(ele[i]!=ind[i]){
                c++;
            }
        }
      if(c%2==0){
            cout<<c/2<<endl;
        }
        else {
            cout<<"0"<<endl;
        }



        }
    }
}
