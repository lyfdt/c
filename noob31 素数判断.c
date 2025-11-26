#include <stdio.h>
#include<math.h>
#include<string.h>
int is_prime_optimized(int b)
{
if(b==1)printf("No\n");
else if(b==2)printf("Yes\n");
else if(b%2==0)printf("No\n");
else{
for(int i=3;i<=sqrt(b)+1;i++)
{
if(b%i==0)
{
    printf("No\n");
    return 0;
}
}
printf("Yes\n");
}
return 0;
}

int main() {
    int a;
    scanf("%d",&a);
for(int i=0;i<a;i++)
{
    int b;
    scanf("%d",&b);
    is_prime_optimized(b);
}
    return 0;
}//历经磨难Ovo