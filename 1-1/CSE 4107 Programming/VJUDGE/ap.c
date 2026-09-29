// #include <stdio.h>
// int main()
// {
//     int kirito_strength, numof_dragons;
//     scanf("%d %d", &kirito_strength, &numof_dragons);

//     int dragon_str[numof_dragons], bonus[numof_dragons];

//     for (int i = 0; i < numof_dragons; i++)
//     {
//         scanf("%d %d", &dragon_str[i], &bonus[i]);
//     }

//     int flag = 1;

//     for (int i = 0; i < numof_dragons; i++)
//     {
//         if (kirito_strength > dragon_str[i])
//         {
//             kirito_strength += bonus[i];
//         }
//         else
//         {
//             flag = 0;
//             break;
//         }
//     }

//     if (flag)
//     {
//         printf("YES");
//     }
//     else
//     {
//         printf("NO");
//     }

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

// idea was mine
// learnt from online -- first time using
typedef struct
{
    int strength;
    int bonus;
} Dragon;

int compare(void const *a, void const *b)
{
    // int x = *(int *)a;
    // int y = *(int *)b;

    Dragon *da = (Dragon *)a; // learnt from online -- first time using
    Dragon *db = (Dragon *)b;

    return da->strength - db->strength;
}

int main()
{

    int kirito_strength, numof_dragons;
    scanf("%d %d", &kirito_strength, &numof_dragons);

    Dragon arrays[numof_dragons];

    for (int i = 0; i < numof_dragons; i++)
    {
        scanf("%d %d", &arrays[i].strength, &arrays[i].bonus); // learn from online -- first time using
    }

    qsort(arrays, numof_dragons, sizeof(Dragon), compare);

    for (int i = 0; i < numof_dragons; i++)
    {
        if (kirito_strength > arrays[i].strength)
        {
            kirito_strength += arrays[i].bonus;
        }
        else
        {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");

    return 0;
}