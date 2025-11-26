#include <stdio.h>


int feibonaci(int n)
{
if(n<=2)
{
    return 1;
}
else
{
  return feibonaci(n-1)+feibonaci(n-2);
}
}

int main() {
    int a;
    scanf("%d\n",&a);
 int b=feibonaci(a);
    printf("%d\n",b);
    return 0;
}