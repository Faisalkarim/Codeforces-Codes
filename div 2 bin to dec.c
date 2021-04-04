#include<stdio.h>
#include<math.h>
long long dectobin(int n);
int bintodec(long long n);
int main(){

int t,in;
long long n,s1,s2,reverse;

    scanf("%d",&t);
    while(t--){
        scanf("%lld",s1);
        scanf("%lld",s2);
            in = bintodec(s1)+bintodec(s2)*pow(2,1);
            n = dectobin(in);

             while (n != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + n%10;
      n       = n/10;
   }
   printf("%lld",reverse);
    }
    int bintodec(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}
long long dectobin(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;
    while (n!=0)
    {
        remainder = n%2;
        printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, n, remainder, n/2);
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}









return 0;
}
