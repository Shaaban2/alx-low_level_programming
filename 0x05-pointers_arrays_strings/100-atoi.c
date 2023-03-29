/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to convert
 *
 * Return: the converted integer
 */

int _atoi(char *s)
{
int result = 0;
int sign = 1;
int digit;

while (*s)
{
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
{
digit = *s - '0';

if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10))
{
// result will overflow if we add this digit, so stop parsing
// and return the appropriate value based on the sign
return (sign == 1) ? INT_MAX : INT_MIN;
}

result = result * 10 + digit;
}
else if (result > 0)
break;
s++;
}

return result * sign;
}

