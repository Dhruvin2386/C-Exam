#include<stdio.h>

int main(){

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == 1)
            {
                printf("100");
            }
            if (i == 2)
            {
                printf("81");
            }
            if (i == 3)
            {
                printf("64");
            }
            if (i == 4)
            {
                printf("49");
            }
            if (i == 5)
            {
                printf("36");
            }
            
        }
        printf("\n");
    }
    
}