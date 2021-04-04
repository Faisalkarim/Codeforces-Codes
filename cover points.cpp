#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,ma=0;

        cin>>n;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            ma=max((x+y),ma);
        }
        cout<<ma<<endl;













}
