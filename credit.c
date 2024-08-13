#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long number;
    int count = 0;
    int sum = 0;

    // Prompt user for credit card number
    do
    {
        number = get_long("Number: ");
    }
    while (number <= 0);

    // Calculate checksum
    for (long i = number; i > 0; i /= 10)
    {
        if (count % 2 == 0)
        {
            sum += i % 10;
        }
        else
        {
            int digit = 2 * (i % 10);
            sum += digit / 10 + digit % 10;
        }
        count++;
    }

    // Check if the number is valid
    if (sum % 10 == 0)
    {
        if ((count == 13 || count == 16) && number / 1000000000000 == 4)
        {
            printf("VISA\n");
        }
        else if (count == 15 && (number / 10000000000000 == 34 || number / 10000000000000 == 37))
        {
            printf("AMEX\n");
        }
        else if (count == 16 && number / 100000000000000 >= 51 && number / 100000000000000 <= 55)
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
