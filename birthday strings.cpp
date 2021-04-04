#include<bits/stdc++.h>
using namespace std;
int main(){
        string s,t;
        cin>>s;
        cin>>t;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        transform(t.begin(),t.end(),t.begin(),::tolower);
        if(s==t){
            cout<<"0";
            return 0;
        }
        for(int i=0;i<s.size();i++){
                if(s[i]>t[i]){
                        cout<<"1";
                        break;
        }
        else if(s[i]<t[i]){
            cout<<"-1";
            break;
        }


        }

}
