#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h> // Added for string comparison


// ... (Node and Stack structures remain the same as before) ...


int main() {
    Stack* stack = createStack();
    int choice, data;
    char operation[20]; //To store user input for operation


    do {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. IsEmpty\n");
        printf("6. IsFull\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);


        switch (choice) {
            case 1:
                printf("Enter the element to push: ");
                scanf("%d", &data);
                push(stack, data);
                break;
            case 2:
                data = pop(stack);
                printf("Popped element: %d\n", data);
                break;
            case 3:
                data = peek(stack);
                printf("Top element: %d\n", data);
                break;
            case 4:
                display(stack);
                break;
            case 5:
                printf("Is stack empty? %s\n", isEmpty(stack) ? "true" : "false");
                break;
            case 6:
                printf("Is stack full? %s\n", isFull(stack) ? "true" : "false");
                break;
            case 7:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 7);


    // Free the stack memory before exiting
    while (!isEmpty(stack)) {
        pop(stack); //Clear the stack before freeing
    }
    free(stack);
    return 0;
}

// ... (rest of the functions remain the same) ...