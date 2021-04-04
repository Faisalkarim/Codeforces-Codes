#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        int p=0,n,m=0;
        if(s.size()==1 && s[0]=='?'){
            cout<<'a'<<endl;
        }
        else{
        for(int i=1;i<s.size()-1;i++){
            if(s[i] != '?' && s[i]==s[i-1]){
                p=1;
                break;
            }
            if(s[i]=='?'){
                m=1;
            }
        }
        if(p==1){
            cout<<"-1"<<endl;

        }
        else if(m==0 && s[0]!='?'){
            cout<<s<<endl;

        }
        else{
                if(s[0]=='?' && s[1]=='a'){
                    s[0]='b';
                }
                else if(s[0]=='?' && s[1]=='b'){
                    s[0]='c';
                }
                else if(s[0]=='?' && s[1]=='c'){
                    s[0]='a';
                }
                else if(s[0]=='?' && s[1]=='?'){
                    s[0]='b';
                }


           n=s.size();


            for(int i=1;i<n-1;i++){
                if(s[i]=='?'){
                    if(s[i-1]=='a' && s[i+1]=='c'){
                        s[i]='b';
                    }
                    else if(s[i-1]=='a' && s[i+1]=='b'){
                        s[i]='c';
                    }
                    else if(s[i-1]=='b' && s[i+1]=='c'){
                        s[i]='a';
                    }
                    else if(s[i-1]=='b' && s[i+1]=='a'){
                        s[i]='c';
                    }
                    else if(s[i-1]=='c' && s[i+1]=='b'){
                        s[i]='a';
                    }
                    else if(s[i-1]=='c' && s[i+1]=='a'){
                        s[i]='b';
                    }
                    else if(s[i-1]== s[i+1]){
                        if(s[i-1]=='a'){
                            s[i]='b';
                        }
                        else if(s[i-1]=='b'){
                            s[i]='a';
                        }
                        else if(s[i-1]=='c'){
                            s[i]='b';
                        }
                    }



                    else if(s[i-1]=='a' && s[i+1]=='?'){
                        s[i]='b';
                    }
                    else if(s[i-1]=='b' && s[i+1]=='?'){
                        s[i]='a';
                    }
                    else if(s[i-1]=='c' && s[i+1]=='?'){
                        s[i]='b';
                    }
                }
            }
            if(s[n-1]=='?'){
                if(s[n-2]=='a'){
                    s[n-1]='b';
                }
                else if(s[n-2]=='b'){
                    s[n-1]='c';
                }
                else if(s[n-2]=='c'){
                    s[n-1]='a';
                }
            }


            cout<<s<<endl;


        }




    }



    }





}
