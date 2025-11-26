#include <stdio.h>

int main() {
    int a, b;
    long long c=0;
    scanf("%d %d", &a, &b);
    int d[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
          scanf("%d",&d[i][j]);
        c+=d[i][j];
        }
    }
printf("%lld",c);
}