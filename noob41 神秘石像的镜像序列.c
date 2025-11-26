#include<stdio.h>
int main()
{
int a[100];
int b=0,c;
while(1)
{
scanf("%d",&c);
if(c==0)
{
    break;
}
a[b]=c;
b++;//这个结束会比输入的整数个数多了1
}
for(int i=b-1;i>=0;i--)
{
printf("%d ",a[i]);
}
    return 0;
}