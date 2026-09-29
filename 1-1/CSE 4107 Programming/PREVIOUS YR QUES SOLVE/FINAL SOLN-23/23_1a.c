
/*
f the question says CSV, TXT, or "Formatted Input", use fscanf and fprintf.

If the question says Binary File or "Record-based", use fread and fwrite.
*/

// #include <stdio.h>
// #include <string.h>

// typedef struct
// {
//     int application_id;
//     float score;
//     char name[100];
// } Applicant;

// int main()
// {
//     FILE *fp1, *fp2;

//     fp1 = fopen("applicants.txt", "r");
//     fp2 = fopen("eligible.txt", "w");

//     if (fp1 == NULL || fp2 == NULL)
//     {
//         printf("Error in opening files\n");
//         return 1;
//     }

//     int count = 0;

//     Applicant eligible[9000];

//     int temp_appid;
//     float temp_score;
//     char temp_name[100];

//     while (fscanf(fp1, "%d,%f,%s", &temp_appid, &temp_score, &temp_name) != EOF)
//     {
//         if (temp_score >= 93.5)
//         {
//             eligible[count].application_id = temp_appid;
//             eligible[count].score = temp_score;
//             strcpy(eligible[count].name, temp_name);
//             count++;
//         }
//     }

//     for (int i = 0; i < count; i++)
//     {
//         fprintf(fp2, "%d,%.2f,%s\n", eligible[i].application_id, eligible[i].score, eligible[i].name);
//     }

//     fclose(fp1);
//     fclose(fp2);

//     printf("Processing Complete. Total Eligible Applicants: %d", count);

//     return 0;
// }

#include <stdio.h>
#include <string.h>

typedef struct
{
    int app_id;
    float score;
    char name[101];

} Applicant;

int main()

{
    FILE *fp1, *fp2;

    fp1 = fopen("applicants.txt", "r");
    fp2 = fopen("eligible.txt", "w");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("File opening Error\n");
        return 1;
    }

    Applicant eligible[9000];

    int count = 0;

    int temp_appid;
    float temp_score;
    char temp_name[101];

    while (fscanf(fp1, "%d,%f,%s", &temp_appid, &temp_score, &temp_name) != EOF)
    {
        if (temp_score >= 93.5)
        {
            eligible[count].app_id = temp_appid;
            eligible[count].score = temp_score;
            strcpy(eligible[count].name, temp_name);
            count++;
        }
    }

    // bubble sort
    for (int i = 0; i < count-1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (eligible[i].app_id > eligible[j].app_id)
            {
                Applicant temp = eligible[i];
                eligible[i] = eligible[j];
                eligible[j] = temp;
            }
        }
    }

    for (int i = 0; i < count; i++)
    {
        fprintf(fp2, "%d,%.2f,%s\n", eligible[i].app_id, eligible[i].score, eligible[i].name);
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}
