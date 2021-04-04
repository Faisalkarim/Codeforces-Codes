#include<bits/stdc++.h>
using namespace std;
int main(){


    int t,a,b,c;
    cin>>t;
    while(t--){
            int co=0,k[3]={0};
       cin>>k[0]>>k[1]>>k[2];
       sort(k,k+3);


         if(k[0]>=1){
            co++;
            k[0]--;
        }
        if(k[1]>=1){
            co++;
            k[1]--;
        }
        if(k[2]>=1){
            co++;
            k[2]--;
        }


        if(k[0]>=1 && k[2]>=1){
            co++;
            k[0]--;
            k[2]--;

        }
        if(k[2]>=1 && k[1]>=1){
            co++;
            k[2]--;
            k[1]--;

        }

        if(k[0]>=1 && k[1]>=1){
            co++;
            k[0]--;
            k[1]--;

        }
          if(k[0]>=1 && k[1]>=1 && k[2]>=1){
            co++;

        }

        cout<<co<<endl;




    }











}
