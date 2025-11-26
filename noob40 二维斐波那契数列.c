#include <stdio.h>
#include<math.h>
int main() {
    int a, b;
    long long d;
    d = 1000000007;
    scanf("%d%d", &a, &b);
    long long c[a + 1][b + 1];
    for (int i = 1; i < a + 1; i++) {
        for (int j = 1; j < b + 1; j++) {
            c[i][j] =0;
        }
    }
    for (int i = 1; i < a + 1; i++) {
        c[i][1] = 1;
    }
    for (int i = 1; i < b + 1; i++) {
        c[1][i] = 1;
    }
    for (int i = 2; i < a + 1; i++) {
        for (int j = 2; j < b + 1; j++) {
            c[i][j] =((c[i][j - 1] + c[i - 1][j]) % d);
        }
    }
    printf("%lld", c[a][b]);
    return 0;
}//和python的思路是一样的，就是实现还是有点难度的