#include <stdio.h>
int main()
{

    int row;
    scanf("%d", &row);

    int point[row][2];
    int neg_count = 0, pos_count = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &point[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        if (point[i][0] < 0)
        {
            neg_count++;
        }
        if (point[i][0] > 0)
        {
            pos_count++;
        }
    }

    if (pos_count > neg_count && neg_count < 2)
    {
        printf("Yes\n");
    }
    else if (neg_count > pos_count && pos_count < 2)
    {
        printf("Yes\n");
    }

    else if ((pos_count==neg_count)&&(pos_count==1 || neg_count==1))
    {
        printf("Yes\n");
    }
    
    else
    {
        printf("No\n");
    }

    return 0;
}