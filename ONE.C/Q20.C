#include <stdio.h>
int main() {
    int drink;
    printf("Choose Drink (1=Tea, 2=Coffee, 3=Juice): ");
    scanf("%d", &drink);
    switch (drink) {
        case 1: printf("Tea\n"); break;
        case 2: printf("Coffee\n"); break;
        case 3: printf("Juice\n"); break;
        default: printf("Invalid choice\n");
    }
    return 0;
}
