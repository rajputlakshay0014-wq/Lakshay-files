#include <stdio.h>
#include <string.h>
int main() {
    char password[20];
    printf("Enter password: ");
    scanf("%s", password);
    if (strcmp(password, "admin123") == 0)
        printf("Welcome\n");
    else
        printf("Wrong Password\n");
    return 0;
}
