#include <stdio.h>

int main() {
    int choice;

    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You chose Add\n");
            break;
        case 2:
            printf("You chose Subtract\n");
            break;
        case 3:
            printf("You chose Multiply\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}