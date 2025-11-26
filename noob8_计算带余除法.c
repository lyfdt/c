#include <stdio.h>
int main() {
int a,b,c,d;
scanf("%d%d",&a,&b);
c=(int)a/b;
d=(int)a%b;
printf("%d %d",c,d);
return 0;
}//scanf里面的参数一定要记得加&