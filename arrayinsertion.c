#include <stdio.h>
int main() {
    // Declare an array
    int array[10] = {1, 2, 3, 4, 5};
    // Size of the array
    int size = 5;
    // Element to be inserted
    int element = 10;
    // Position at which the element should be inserted
    int position;//user 
    printf("enter position: ");
    scanf("%d",&position);
    printf("array before insertion:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    if (position < 0 || position > size) {
        printf("Invalid position for insertion.\n");
    }
    // Shift elements to make space for the new element
    for (int i = size - 1; i >= position; --i) {
        array[i + 1] = array[i];
    }
    // Insert the new element 
    array[position] = element;
    // Update the size of the array
    size++;
    // Print the updated array
    printf("\narray after insertion:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    return 0;
}
