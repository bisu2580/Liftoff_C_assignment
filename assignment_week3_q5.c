#include <stdio.h>
#include <math.h>
int rev(int num)
{
    int digit = log10(num);

    if (num == 0)
    {
        return 0;
    }
    return (num % 10 * pow(10, digit) + rev(num / 10));
}
int ispal(int h)
{
    if (h == rev(h))
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    if (ispal(n) == 1)
    {
        printf("the number is palindrome\n");
    }
    else
    {
        printf("Number is not palindrome\n");
    }
    return 0;
}