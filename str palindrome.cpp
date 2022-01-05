#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    gets(a);
    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b)==0)
    {
        printf("yes");
    }
   
}
