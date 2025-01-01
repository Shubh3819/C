#include <stdio.h>

int main()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("The alphabet in uppercase is %c.", ch - 32);
    }
    else
    {
        printf("Not a valid alphabet");
    }
}
