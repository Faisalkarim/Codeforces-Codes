#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,sum=0;
    cin>>n;
    set<int>s;
    set<int>:: iterator itr;

        for(int i=0;i<n;i++){
            int h;
            cin>>h;
            s.insert(h);
        }
         for (itr = s.begin(); itr != s.end(); ++itr){
            int y= *itr;
                sum+= *itr;
            }









}
