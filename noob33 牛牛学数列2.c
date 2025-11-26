#include <stdio.h>

int main() {
    float a, b,c;
   scanf("%f",&a);
   for(int i=1;i<=a;i++)
   {
b=1.0/i;
c+=b;
   }
   printf("%.6f",c);
    return 0;
}