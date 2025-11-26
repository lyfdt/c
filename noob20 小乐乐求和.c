#include <stdio.h>

int main() {
    long long a;
    long long b=0;
    scanf("%lld",&a);
    for(int i=0;i<=a;i++)
    {
      b+=i;
    }
   printf("%lld",b);
    return 0;
}//用longlong 是怕数太大int不够用 注意格式化longlong是lld不是dll