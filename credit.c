#include <cs50.h>
#include <stdio.h>

int check_sum(int sum, int count, long number);
string check_validity(int sum, int count, long number);

int main(void)
{
    // Prompt user for credit card number
    long number;
    number = get_long("Number: ");

    int count = 0;
    int sum = 0;
4003600000000014
    // Calculate checksum
        // sum = check_sum(sum, count, number);
    for (long i = number; i > 0; i /= 10) {
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

    // Check if the number is valid
        // string result = check_validity(sum, count, number);
            // printf("%s\n", result);
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

/*
int check_sum(int sum, int count, long number)
{
    for (long i = number; i > 0; i /= 10) {
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

        return count;
}

string check_validity(int sum, int count, long number)
{
    if (sum % 10 == 0)
    {
        if ((count == 13 || count == 16) && number / 1000000000000 == 4)
        {
            return "VISA\n";
        }
        else if (count == 15 && (number / 10000000000000 == 34 || number / 10000000000000 == 37))
        {
            return "AMEX\n";
        }
        else if (count == 16 && number / 100000000000000 >= 51 && number / 100000000000000 <= 55)
        {
            return "MASTERCARD\n";
        }
        else
        {
            return "INVALID\n";
        }
    }
    else
    {
        return "INVALID\n";
    }
}
*/

}
