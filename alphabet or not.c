#include <stdio.h>

int main()
{
    char c;
    printf("enter the character c:");
    scanf("%c",&c);
    
    if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
    {
        printf("alphabet");
    }
    else
    {
        printf("no");
    }
   
    return 0;
}
