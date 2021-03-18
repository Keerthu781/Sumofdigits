#include <stdio.h>
int sum (int a);
 int main()
{
    int num, result;
    printf("\n\tSUM OF DIGITS");
    printf("\n\t______________");
    printf("\n\tEnter the number: ");
    scanf("%d", &num);
    result = sum(num);
    printf("\n\tSum of digits in %d is :%d\n", num, result);
    return 0;
}
 
int sum (int num)
{
    if (num != 0)
    {
        return (num % 10 + sum (num / 10));
    }
    else
    {
       return 0;
    }
}
