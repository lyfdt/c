/*这是自己写的有错误运行不了，地下有ai修正版
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int c[8]={-1,-1,-1,0,0,1,1,1};
    int d[8]={-1,0,1,-1,1,-1,0,1};
    char e[a][b],f[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++)
        {
            scanf("%c",&e[i][j]);
            f[a][b]=0;
        }
    }
   for(int i=0;i<a;i++)
   {
    for(int j=0;j<b;j++)
        {
        if(e[a][b]=='*')
        {
           f[a][b]='*';
        }
        else
        {
         int count =0;
         for(int k=0;k<8;k++)
         {
            int dx,dy;
            dx=i+c[k],dy=j+d[k];
            if((0<=dx || dx<a) && (0<=dy || dy<b) && (e[dx][dy]=='*'))//条件写错了不该这么写的
            {
            count+=1;
            }
        } 
        f[i][j]=count;
        }
        }
    }
    for(int i=0;i<a;i++)
   {
    for(int j=0;j<b;j++)
    {
        printf("%c",f[i][j]);
    }
    printf("\n");
    }
return 0;
}
*/
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    getchar(); // 读取换行符，避免影响后续输入
    
    int c[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int d[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
    char e[a][b], f[a][b];
    
    // 读取输入
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            scanf("%c", &e[i][j]);
        }
        getchar(); // 读取每行末尾的换行符
    }
    
    // 处理扫雷逻辑
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            if(e[i][j] == '*') {  // 修正：应该是 e[i][j]
                f[i][j] = '*';    // 修正：应该是 f[i][j]
            } else {
                int count = 0;
                for(int k = 0; k < 8; k++) {
                    int dx = i + c[k], dy = j + d[k];
                    if(0 <= dx && dx < a && 0 <= dy && dy < b && e[dx][dy] == '*') {
                        count += 1;
                    }
                }
                f[i][j] = count + '0'; // 将数字转换为字符
            }
        }
    }
    
    // 输出结果
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            printf("%c", f[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}//ai修正版