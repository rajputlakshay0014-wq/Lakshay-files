#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (isupper(ch))
        printf("Uppercase\n");
    else
        printf("Not Uppercase\n");
    return 0;
}
