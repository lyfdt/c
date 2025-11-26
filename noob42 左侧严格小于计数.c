#include <stdio.h>

int main() {
    int a;
    int b[100];
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<a;i++)
    {
        int c=0;
        for(int j=0;j<i;j++)
        {
         if(b[j]<b[i])
         {
            c+=1;
         } 
        }
        printf("%d ",c);
    }
    return 0;
}