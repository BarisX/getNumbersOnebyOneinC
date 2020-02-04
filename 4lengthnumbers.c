  #include "stdio.h"
#include "locale.h"

int main() 
{
    int number;

    do{
        printf("Enter a number maximum 4 length : ");
        scanf("%d", &number);
    } while(number < 999  || number > 9999);

    short binler, yuzler, onlar, birler;

    binler = (number/1000);
    yuzler = number%1000/100;
    onlar = number%100/10;
    birler = number%10;

    printf("First Number : %d", binler);
    printf("\nSecond Number : %d", yuzler);
    printf("\nThird Number : %d", onlar);
    printf("\nFourth Number : %d", birler);
    
}
