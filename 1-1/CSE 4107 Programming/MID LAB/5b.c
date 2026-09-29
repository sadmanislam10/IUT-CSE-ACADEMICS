#include <stdio.h>
int main()
{
    int current_streak = 0, max_streak = 0, input;

    while (1)
    {
        scanf("%d", &input);

        if (input == -1)

            break;

        if (input == 1 && input != -1)
        {
            current_streak++;
        }
        if (current_streak > max_streak)
        {
            max_streak = current_streak;
        }

        if (input == 0 && input != -1)
        {
            current_streak = 0;
        }
    }
    printf("%d", max_streak);

    return 0;
}