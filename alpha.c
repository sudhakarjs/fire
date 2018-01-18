#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);

    if( (c>='A' && c<='Z') || (c>='a' && c<='z'))
        printf("%c is an not an alphabet.",c);
    else
        printf("%c is an alphabet.",c);

    return 0;
}
