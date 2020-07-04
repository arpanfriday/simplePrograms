#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ht = (n * 2) - 1, flag;
    // printf("%d\n", ht);
    for (int i = 0; i <= ht/2; i++)
    {
        flag = 0;
        for (int j = 0, k = n, m = n; j < ht; j++)
        {
            if (j >= i && j <= ht - i - 1)
            {
                flag = 1;
                printf("%d  ", k);
            }
            else
            {
                // printf("  ");
                if (flag == 0)
                {
                    printf("%d  ", k);
                    k--;
                }
                else if(flag == 1)
                {
                    k++;
                    printf("%d  ", k);
                }
                
            }
        }
        printf("\n");
    }
    
    for (int i = n, k = 2; i < ht; i++, k++)
    {
        flag = 0;
        for (int j = 0, m = n; j < ht; j++)
        {
            if (j >= ht-i-1 && j <= i)
            {
                flag = 1;
                printf("%d  ", k);
            }
            else
            {
                if (flag == 0)
                {
                    printf("%d  ", m);
                    m--;
                }
                else if(flag == 1)
                {
                    m++;
                    printf("%d  ", m);
                }
            }
        }
        printf("\n");
    }
    return 0;
}