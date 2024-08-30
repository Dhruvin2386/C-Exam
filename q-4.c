#include <stdio.h>

int main(){

    int n;

    printf("Enter the elements of an Array : ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d\n", array[i]*array[i]);
    }
    
    return 0;
}