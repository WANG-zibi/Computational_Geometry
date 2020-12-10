#include <stdio.h>
int main()
{
    int a[1001], len, i, j, m, key;
    for (m = 0; m < 1; m++)
    {
        scanf("%d", &a[m]);
    }
    len = sizeof(a) / 4;
    for (j = 2; j < len; j++)
    {
        key = a[j];
        i = j - 1;
        while (i > 0 && a[i] > key)
        {
            a[i + 1] = a[i];
            i = i - 1;
        }
        a[i + 1] = key;
    }
    for (m = 0; m < 1; m++)
        printf("%d ", a[m]);
    return 0;
}