#include <stdio.h>

int calculateCost(char string[], int arr[])  // learning -- string[] use..not 2d er ta
/*
Passing whole 2D array → char string[][50] (column size required) ✅
Passing one row → char string[] (just 1D, no column needed) 
*/
{
    int totalcost = 0;
    int index;
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
            index = string[i] - 'A';

            totalcost += arr[index];
        }
    }

    return totalcost;
}

int main()
{
    int cost[26];

    for (int i = 0; i < 26; i++)
    {
        scanf("%d", &cost[i]);
    }

    int amount;
    scanf("%d", &amount);

    char string[amount][50];

    for (int i = 0; i < amount; i++)
    {
        scanf(" %[^\n]", string[i]);  /// memo-- string a space and newline buffer..eta use korbo
    }

    int total_cost_for_each[amount];
    for (int i = 0; i < amount; i++)
    {
        total_cost_for_each[i] = calculateCost(string[i], cost);

        printf("%s %d\n", string[i], total_cost_for_each[i]);
    }

    return 0;
}