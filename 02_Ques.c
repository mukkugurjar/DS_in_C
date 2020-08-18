#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100];
    printf("enter your input\n");
    scanf("%s",s);
    int len, i, j, k = 0;
    for (len = 0; s[len] != '\0'; len++);
    while (s[k] != '\0')
    {
        for (i = 0; i < len; i++)
        {
            for (j = 0; j < len; j++)
            {

                if ((j <= i))
                {
                    printf("%c", s[k]);
                    k++;
                }

                else
                {
                    printf(" ");
                }
            }
            if (k == len)
            {
                exit(0);
            }
            printf("\n");
            k = 0;
        }
    }
    return 0;
}
