// i.
// ii baki

#include <stdio.h>

int func(int n, char arr[n][2])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1 + i; j < n; j++)
        {
            if (arr[i][1] < arr[j][1])
            {
                int tempmarks = arr[i][1];
                arr[i][1] = arr[j][1];
                arr[j][1] = tempmarks;

                int tempid = arr[i][0];
                arr[i][0] = arr[j][0];
                arr[j][0] = tempid;
            }
        }
    }
}
int main()
{
    int num_of_applicants;
    scanf("%d", &num_of_applicants);

    char arr[num_of_applicants][2];

    printf("Enter id and total marks:\n");

    for (int i = 0; i < num_of_applicants; i++)
    {
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }

    func(num_of_applicants, arr);

    for (int i = 0; i < num_of_applicants; i++)
    {
        printf("%d %d\n", arr[i][0], arr[i][1]);
    }

    return 0;
}