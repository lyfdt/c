#include <stdio.h>
#include<string.h>
int main() 
{
    char a[10];
    scanf("%s",a);
    int b=a[5]-'0';//-'0'的作用是将对应字符转化为数字
    int c=a[4]-'0';
    int d=b+c*10;
    if(d>=3 && d<=5)
    {
printf("spring");
    }
    else if(d>=6 && d<=8)
    {
printf("summer");
    } 
    else if(d>=9 && d<=11)
    {
printf("autumn");
    }   
     else 
    {
printf("winter");
    }       
       return 0;
}