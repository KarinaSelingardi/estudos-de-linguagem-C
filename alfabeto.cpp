#include <stdio.h>

void code(void)
{
    char done, ch;

    done = 0;
    while (!done)
    {
        ch = getchar();
        if (ch == '$')
        {
            done = 1;
            continue;
        }

        putchar(ch + 1);
    }
    return 0;
}





