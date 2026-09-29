#include <stdio.h>
#include <limits.h>

int main()
{
    int ways_buy, ways_sell, money_in_morning;
    scanf("%d %d %d", &ways_buy, &ways_sell, &money_in_morning);

    int opp_to_buy[ways_buy], opp_to_sell[ways_sell];

    for (int i = 0; i < ways_buy; i++)
    {
        scanf("%d", &opp_to_buy[i]);
    }

    for (int i = 0; i < ways_sell; i++)
    {
        scanf("%d", &opp_to_sell[i]);
    }

    int min = INT_MAX, max = INT_MIN;

    for (int i = 0; i < ways_buy; i++)
    {
        if (min > opp_to_buy[i])
        {
            min = opp_to_buy[i];
        }
    }

    for (int i = 0; i < ways_sell; i++)
    {
        if (max < opp_to_sell[i])
        {
            max = opp_to_sell[i];
        }
    }

    int money_at_last, total_bought;

    money_at_last = money_in_morning % min;

    total_bought = money_in_morning / min;

    money_at_last += (total_bought * max);

    if (money_at_last > money_in_morning)
    {
        printf("%d", money_at_last);
    }
    else
    {
        printf("%d", money_in_morning);
    }
    return 0;
}