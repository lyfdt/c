#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);
    for(int i = 0; i < T; i++) {
        int n, k;
        int S = 0, cnt = 0;
        scanf("%d%d", &n, &k);
        
        int arr[n];
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
        }
        
        for(int j = 0; j < n; j++) {
            if(arr[j] >= k) {
                S += arr[j];
            } else if(arr[j] == 0 && S >= 1) {  // 修正条件
                S -= 1;  // 修正操作
                cnt += 1;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}