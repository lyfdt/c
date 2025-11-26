#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d",&a,&b);
    int c[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&c[i][j]);
        }
    }
    for(int j=0;j<b;j++)
    {
        for(int i=0;i<a;i++)
    {
printf("%d ",c[i][j]);
    }
printf("\n");
    }
    return 0;
}