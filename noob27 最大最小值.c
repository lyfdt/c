#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
    int a, b,c;
    scanf("%d%d%d",&a,&b,&c);
    int min=a;
    int max=a;
    if(min>b)min=b;
    if(max<b)max=b;
    if(min>c)min=c;
    if(max<c)max=c;
    printf("The maximum number is : %d\n",max);
    printf("The minimum number is : %d",min);
    return 0;
}//问ai的算法，确实厉害