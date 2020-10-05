#include <stdio.h>
int main()
{
    int a, b, c, d, e, r1, r2, r3, r4, result;
    char op1, op2, op3, op4;
    scanf("%d%c%d%c%d%c%d%c%d",&a, &op1, &b, &op2, &c, &op3, &d, &op4, &e);
    if (op1 == '+')
    {
        r1 = a + b;
    }
    if (op1 == '-')
    {
        r1 = a - b;
    }
    if (op1 == 'x')
    {
        r1 = a * b;
    }
    if (op1 == '/')
    {
        r1 = a / b;
    }
    if (op2 == '%')
    {
        r1 = a % b;
    }
    if (op2 == '+')
    {
        r2 = r1 + c;
    }
    if (op2 == '-')
    {
        r2 = r1 - c;
    }
    if (op2 == 'x')
    {
        r2 = r1 * c;
    }
    if (op2 == '/')
    {
        r2 = r1 / c;
    }
    if (op2 == '%')
    {
        r2 = r1 % c;
    }
    if (op3 == '+')
    {
        r3 = r2 + d;
    }
    if (op3 == '-')
    {
        r3 = r2 - d;
    }
    if (op3 == 'x')
    {
        r3 = r2 * d;
    }
    if (op3 == '/')
    {
        r3 = r2 / d;
    }
    if (op3 == '%')
    {
        r3 = r2 % d;
    }
    if (op4 == '+')
    {
        r4 = r3 + e;
    }
    if (op4 == '-')
    {
        r4 = r3 - e;
    }
    if (op4 == 'x')
    {
        r4 = r3 * e;
    }
    if (op4 == '/')
    {
        r4 = r3 / e;
    }
    if (op4 == '%')
    {
        r4 = r3 % e;
    }
    result = r4;
    printf("%d\n", result);
    return 0;
}