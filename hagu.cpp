#include<bits/stdc++.h>
using namespace std;
int main(){


    int t;
    unsigned long long int n,x,i;

     cin>>t;
     while(t--){

        cin>>n>>x;
        unsigned long long a[n]={0},c=0,sum=0,p=0,y=0;
        unsigned long long cc=0,su=0,pp=0,yy=0;
            for(i=0;i<n;i++){
                cin>>a[i];
            }

             for(i=0;i<n;i++){
                sum+=a[i];

                if(sum%x!=0){
                    p=i+1;
                }
                else if(sum%x!=0 && a[i]==0){
                    p=i+1;
                }
             }

                reverse(a,a+n);
                 for(i=0;i<n;i++){
                su+=a[i];

                if(su%x!=0){
                    pp=i+1;
                }
                else if(su%x!=0 && a[i]==0){
                    pp=i+1;
                }
                 }



                  p=max(pp,p);





            if(p==0){
                cout<<"-1"<<endl;
            }
            else{
                cout<<p<<endl;
            }

             }
     }
