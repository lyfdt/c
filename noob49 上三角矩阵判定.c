#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int c[a][a];
    int d=0;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
         scanf("%d",&c[i][j]);
        }
    }
    for(int i=1;i<a;i++)
    {
        for(int j=0;j<i;j++)
        {
          if (c[i][j]!=0)
          {
            d+=1;
          }     
             }
    }
    if(d==0)
    {
printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}