#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void ss(char x[], int number[]);
int main()
{
    char a[3];
    int number[8];
    for (int i = 0; i < 8; i++)
        number[i] = 0;
    while (scanf("%s", a) != EOF)
        ss(a, number);
    int answer1 = number[0] * 8 + number[1] * 4 + number[2] * 2 + number[3];
    int answer2 = number[4] * 8 + number[5] * 4 + number[6] * 2 + number[7];
    printf("%x%x", answer1, answer2);

}
void ss(char x[], int number[])
{
    if (strcmp(x, "ma") == 0)
        number[7] = 1;
    else if (strcmp(x, "cl") == 0)
        number[6] = 1;
    else if (strcmp(x, "ha") == 0)
        number[5] = 1;
    else if (strcmp(x, "tr") == 0)
        number[4] = 1;
    else if (strcmp(x, "rd") == 0)
        number[3] = 1;
    else if (strcmp(x, "bw") == 0)
        number[2] = 1;
    else if (strcmp(x, "bk") == 0)
    {
        number[2] = 1;
        number[3] = 1;
    }
    else if (strcmp(x, "ge") == 0)
        number[1] = 1;
    else if (strcmp(x, "gy") == 0)
        number[0] = 1;
    else if (strcmp(x, "da") == 0)
    {
        number[0] = 1;
        number[1] = 1;
    }
}
