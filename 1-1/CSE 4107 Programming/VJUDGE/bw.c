#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    long long x = *(long long *)a;
    long long y = *(long long *)b;

    if (x < y)
        return 1;
    if (x > y)
        return -1;

    return 0;

    // learnt qsort
}

int main()
{
    long long monsternum, specialmove;
    scanf("%lld %lld", &monsternum, &specialmove);

    long long monster_health[monsternum];

    for (int i = 0; i < monsternum; i++)
    {
        scanf("%lld", &monster_health[i]);
    }

    qsort(monster_health, monsternum, sizeof(monster_health[0]), compare);

    // for (int i = 0; i < monsternum - 1; i++)
    // {
    //     for (int j = i + 1; j < monsternum; j++)
    //     {
    //         if (monster_health[j] > monster_health[i])
    //         {
    //             int temp;
    //             temp = monster_health[i];
    //             monster_health[i] = monster_health[j];
    //             monster_health[j] = temp;
    //         }
    //     }
    // } // tle with bubble sort

    // for (int i = 0; i < monsternum; i++)
    // {
    //     printf("%d ", monster_health[i]);
    // }

    if (specialmove > monsternum)
    {
        printf("0");
        return 0;
    }

    long long totalhealth = 0;
    for (int i = 0; i < monsternum; i++)
    {
        totalhealth += monster_health[i];
    }

    long long damaged_by_special = 0;

    for (int i = 0; i < specialmove; i++)
    {
        damaged_by_special += monster_health[i];
    }

    long long result;
    result = totalhealth - damaged_by_special;

    printf("%lld", result);

    return 0;
}