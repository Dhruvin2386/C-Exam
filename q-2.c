#include <stdio.h>

int main() {
    int n;

    printf("Enter the elements of an Array : ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int small = array[0];

    for (int i = 1; i < n; i++) {
        if (array[i] < small) {
            small = array[i];
        }
    }

    printf("The smallest element in the array is: %d\n", small);

    return 0;
}
