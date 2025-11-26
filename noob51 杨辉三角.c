#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int b[a][a];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            b[i][j]=0;
        }
    }
    for(int i=0;i<a;i++)
    {
        b[i][0]=1;
     for(int j=1;j<=i;j++)
     {
        b[i][j]=b[i-1][j]+b[i-1][j-1];
     }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<=i;j++)
        {
          printf("%d ",b[i][j]);
        }
        printf("\n");
        }
    return 0;
}