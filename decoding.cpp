#include<bits/stdc++.h>
using namespace std;
int main(){


    int n;
    string s;
    cin>>n;
    cin>>s;
    int y=n;
    char a[y]={0};


    for(int i=0;i<s.size();i++){
        double t= ceil(double(n)/2);
        for(int j=int(t)-1;j<y;j++){
        if(a[j]==0){
            a[j]=s[i];
            break;
        }

        }
    n--;

    }




for(int i=0;i<y;i++){
    cout<<a[i];
}






}
