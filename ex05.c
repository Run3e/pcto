#include <stdio.h>

int main()
{
    int a= 1969;
    int b;

    printf("In che anno sei nato?\n");  
    scanf("%d", &b);

    if(b > a)
    {
        printf("Sei nato dopo l'allunaggio. precisamente dopo %d anni ", b - a);  //printf ("%d\n", b-a);

    }
    
    else
    {
        printf("Sei nato prima dell'allunaggio. precisamente %d anni prima. ", a - b);  //printf ("%d\n", a-b);
    }
}