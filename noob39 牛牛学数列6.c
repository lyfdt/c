#include <stdio.h>
 int an(int a)
 {
if(a==1)
{
    return 0;
}
else if(a==2 || a==3)
{
    return 1;
}
else {
return an(a-3)+2*(an(a-2))+an(a-1);
}
 }

int main() {
    int a;
    scanf("%d",&a);
    printf("%d",an(a));
    return 0;
}