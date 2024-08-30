#include <stdio.h>

int main()
{

    int num = 0;

    if (num < 100 || num > 999){
        printf("the number is not between 100 and 999.");
    }

    printf("Enter the 3 digited number: ");
    scanf("%d", &num);

    num = (num % 10)*100 + (num / 10 % 10)*10 + (num / 100);
    printf("%d\n", num);


    return 0;
}