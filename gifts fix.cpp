#include<bits/stdc++.h>
using namespace std;
int main(){


    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        long long int a[n]={0},b[n]={0},aa[n]={0},bb[n]={0},mia,mib,i,sum=0;
            for(i=0;i<n;i++){
                cin>>a[i];
                aa[i]=a[i];
            }
            for(i=0;i<n;i++){
                cin>>b[i];
                bb[i]=b[i];
            }
           sort(aa,aa+n);
           sort(bb,bb+n);
            for(i=0;i<n;i++){
               a[i]=a[i]-aa[0];
            }
            for(i=0;i<n;i++){
               b[i]=b[i]-bb[0];
            }

            for(i=0;i<n;i++){
               sum+=max(a[i],b[i]);
            }
            cout<<sum<<endl;




    }
}
