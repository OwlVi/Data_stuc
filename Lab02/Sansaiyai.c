#include <stdio.h>

typedef struct Hand
{
    int right;
    int left;
} Hands;

int main()
{
    int i,j, count = 1, n = 0;
    int temp = 0, tempHand = 0;
    scanf("%d", &n);

    Hands nisit[n];

    // รับค่าจากผู้ใช้สำหรับ Hand
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &nisit[i].left, &nisit[i].right);
    }
    

    for (i = 0; i < n; i++)
    {
        temp = 0;
        if (nisit[i].left == 0 && nisit[i].right)
        {
            temp++;
            tempHand = nisit[i].right;
            for (int j = 1; j <= n; j++)
            {
                if (nisit[tempHand - 1].right == j)
                {
                    tempHand = j;
                    temp++;
                    j = nisit[tempHand - 1].right - 1;
                }
                else if (nisit[tempHand - 1].right == 0 )
                {
                    temp++;
                    break;
                }
            }
        }

        if (temp > count)
        {
            count = temp;
        }
    }
    printf("%d", count);

    return 0;
}