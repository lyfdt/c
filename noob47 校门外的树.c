#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d",&a,&b);
    int c[a+1];//创建了一个大小为a+1的数组
    for(int i=0;i<=a;i++)
    {
      c[i]=1;
    }
for(int i=0;i<b;i++)
{
 int d,f;
 scanf("%d%d",&d,&f);
 for(int j=d;j<=f;j++)
 {
 c[j]=0;
 }   
}
int g=0;
for(int i=0;i<=a;i++)
{
g+=c[i];
}
printf("%d",g);
    return 0;
}