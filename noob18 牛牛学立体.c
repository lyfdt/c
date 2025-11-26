#include<stdio.h>

int main() {
    int a,b,c;
scanf("%d%d%d",&a,&b,&c);
int s,v;
s=2*(a*b+a*c+c*b);
v=a*b*c;
printf("%d\n",s);
printf("%d",v);
    return 0;
}