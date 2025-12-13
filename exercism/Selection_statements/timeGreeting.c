#include <stdio.h>

int main () {
        int h;

        printf("Enter the current hour (0–23): ");
        scanf("%d", &h);

        if (h < 0 || h > 23) {
                printf("invalide input\n");
                return 0;
        }

        if (h < 12) {
                if (h < 5)
                        printf("Good night\n");
                else
                        printf("Good morning\n");
        } else {
                if (h < 18)
                        printf("Good afternoon\n");
                else if (h < 22)
                        printf("Good evening\n");
                else
                        printf("Good night\n");
        }

        return 0;
}
