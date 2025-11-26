#include <stdio.h>
int main() {
    int a,b,c,f;
    scanf("%d%d%d",&a,&b,&c);
     int d[a];
     f=a;
    for(int i=0;i<a;i++)
    {
      d[i]=i;
    }
    for(int i=1;i<a;i++)
    {
      b=(b+c-1)%f;
      for(int j=b;j<f-1;j++)
      {
        d[j]=d[j+1];
      }
      f-=1;
    }
printf("%d",d[0]);
    return 0;
}