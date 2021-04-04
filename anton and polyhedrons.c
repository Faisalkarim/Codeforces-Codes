#include<stdio.h>
#include<string.h>
int main()
{
    int n,a=0;

    char s6[20];
    scanf("%d",&n);
    while(n--){

        scanf("%s",s6);
        if(s6[0]=='T'){
            a=a+4;
        }
        else if(s6[0]=='C'){
            a=a+6;
        }
        else if(s6[0]=='O'){
            a=a+8;
        }
        else if(s6[0]=='D'){
            a=a+12;
        }
        else if(s6[0]=='I'){
            a=a+20;
        }
    }
    printf("%d",a);
    return 0;
}
