#include <stdio.h>

int main() {
    int a, b,d=0;
    scanf("%d %d", &a, &b);
    for(int i=1;i<=a;i++)
    {
        int num;
        num=i;
        while(num>0)
        {
          if(num%10==b) d++;
          num/=10;//int num = 1;
 // 结果是0，不是0.1
        }
    }
    printf("%d",d);
    return 0;
}//方法真的牛逼，和那个能否被x整除一样的思路