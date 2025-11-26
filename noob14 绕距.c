#include <stdio.h>
#include<math.h>

int main() {
float a,b,c,d,e;
scanf("%f%f\n",&a,&b);
scanf("%f%f\n",&c,&d);
float de,dm;
de=sqrt(pow(a-c,2)+pow(b-d,2));
dm=fabs(a-c)+fabs(b-d);
e=fabs(dm-de);
printf("%.9f\n",e);
    return 0;
}//这里要用fabs。浮点数取绝对值，用abs就是默认转化为整数。还用了一个pow幂函数；