#include <stdio.h>
int main() {
    int fuel;
    printf("Enter fuel type (1=Petrol, 2=Diesel, 3=Electric): ");
    scanf("%d", &fuel);
    switch (fuel) {
        case 1: printf("Petrol\n"); break;
        case 2: printf("Diesel\n"); break;
        case 3: printf("Electric\n"); break;
        default: printf("Invalid choice\n");
    }
    return 0;
}
