#include <stdio.h>
#include<string.h>
int main() {
    
    char a[5];
    scanf("%s",a);
int b,c,d,e,f;
b=a[0]-'0';//-'0'是将字符串转化为整形
c=a[1]-'0';
d=a[2]-'0';
e=a[3]-'0';
f=b+c+d+e;
printf("%d\n",f);
    return 0;
}//（int）能把float型转化成整型，但是不能把char转化成整形，要用库函数或这上面的那个