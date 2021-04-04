#include<bits/stdc++.h>
using namespace std;
int main(){


    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n]={0},b[100]={0};
        vector<int>ele;

        for(int i=0;i<n;i++){
            cin>>a[i];
            b[a[i]]++;
        }
        int vv=0;
        for(int i=0;i<=50;i++){
            if(b[i]>1){
                vv=1;
            }
        }
        int sum[100]={0};
        if(vv==0){
        for (int i = 0; i < n-1; i++) {
            for (int j = 1; j < n; j++) {
                    int hh=a[i]+a[j];
                sum[hh]++;
        }
    }
    for(int i=0;i<100;i++){
        cout<<sum[i];
        cout<<endl;
    }


    int nn=0;
        for(int i=0;i<100;i++){
            nn=max(nn,sum[i]);
        }
        cout<<nn<<endl;
        }
        else{
        for(int i=1;i<=50;i++){
            if(b[i]>0){
                ele.push_back(b[i]);
            }
        }
        sort(ele.begin(),ele.end());
        reverse(ele.begin(),ele.end());

        int ma=min(ele[0],ele[1]);
        int y=ele[0]/2,o=ele[0]/2;
        int ta=max(y,o);
        cout<<max(ma,ta)<<endl;

        }
    }
}
