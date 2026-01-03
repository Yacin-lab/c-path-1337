#include <stdio.h>

void allCombLetter()
{
    int i = 65;
    while(i <= 90)
    {
        int j = 65;
        while(j <= 90)
        {
            int k = 65;
            while(k <= 90)
            {
                printf("%c", i);
                printf("%c", j);
                printf("%c\n", k);
                k++;
            }
            j++;
        }
        i++;
    }
}

int main(void)
{
    allCombLetter();
    return (0);
}