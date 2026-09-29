// #include <stdio.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);

//     int candies, kids, maxcandies_value, maxcadies_kids_num, maxcadies_given;
//     int kids_left, candies_left, leftcnadies_given_value, leftcandies_given_num, result;

//     while (t--)
//     {

//         scanf("%d %d", &candies, &kids);

//         maxcandies_value = (candies / kids) + 1;

//         maxcadies_kids_num = kids / 2;

//         maxcadies_given = maxcadies_kids_num * maxcandies_value;

//         kids_left = kids - maxcadies_kids_num;

//         candies_left = candies - maxcadies_given;

//         leftcnadies_given_value = candies_left / kids_left;

//         leftcandies_given_num = leftcnadies_given_value * kids_left;

//         result = maxcadies_given + leftcandies_given_num;

//         printf("%d\n", result);
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    int candies, kids, candiesgiven;
    while (t--)
    {
        scanf("%d %d", &candies, &kids);

        int range = kids / 2;

        if (candies < kids)
        {
            if (candies > range)
            {
                printf("%d\n", range);
            }

            else
                printf("%d\n", candies);
        }

        else
        {
            int first_per_kid = candies / kids;
            int first_candies_left = candies % kids;

            if (first_candies_left >= range)
            {

                candiesgiven = (first_per_kid * kids) + range;
            }
            else
            {
                candiesgiven = (first_per_kid * kids) + first_candies_left;
            }

            printf("%d\n", candiesgiven);
        }
    }

    return 0;
}