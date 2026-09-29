#include <stdio.h>
int main()
{
    int numofstudents, numofques;
    scanf("%d %d", &numofstudents, &numofques);

    char answers[numofstudents][numofques];

    for (int i = 0; i < numofstudents; i++)
    {
        for (int j = 0; j < numofques; j++)
        {
            scanf("%c", &answers[i][j]);
        }
    }
    

    return 0;
}