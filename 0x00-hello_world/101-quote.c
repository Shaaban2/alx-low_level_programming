#include <unistd.h>
#define ERR_MSG "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"

/**
 * main - Entry point
 *
 * Description: program that prints a message to the standard error
 *
 * Return: Always 1 (failure)
 */

int main(void)
{
    ssize_t len = sizeof(ERR_MSG) - 1;
    ssize_t written = 0;

    while (written < len)
        written += write(STDERR_FILENO, ERR_MSG + written, len - written);

    return (1);
}

