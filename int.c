int printf_int(va_list ap)
{
    int n = va_arg(ap, int);
    unsigned int num;
    int len = 0;
    int div = 1;

    if (n == INT_MIN)
    {
        len += _putchar('-');
        num = (unsigned int)(-(n + 1)) + 1;
    }
    else if (n < 0)
    {
        len += _putchar('-');
        num = -n;
    }

    else
    {
        num = n;
    }

    while (num / div > 9)
        div *= 10;
    while (div != 0)
    {
        len += _putchar((num / div) + '0');
        num %= div;
        div /= 10;
    }
    return (len);
}
