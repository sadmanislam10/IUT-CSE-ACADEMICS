// #include <stdio.h>
// int main()
// {
//     int id;
//     printf("Enter your id\n");

//     scanf("%d", &id);

//     FILE *fp1, *fp2;

//     int ch;

//     char source_filename[50], target_filename[50];

//     // naming the file
//     sprintf(source_filename, "%d.jpg", id);

//     for (int i = 1; i <= 3; i++)
//     {
//         int targetid = id + i;

//         sprintf(target_filename, "%d.jpg", targetid);

//         fp1 = fopen(source_filename, "rb");

//         if (fp1 == NULL)
//         {
//             printf("Error ! Counldnt open source file\n");
//             return 1;
//         }

//         fp2 = fopen(target_filename, "wb");

//         if (fp2 == NULL)
//         {
//             printf("Error!! COunldnt open target file\n");
//             return 1;
//         }

//         while ((ch = fgetc(fp1)) != EOF)
//         {
//             fputc(ch, fp2);
//         }

//         printf("Successfully replaced %s\n",target_filename);

//         fclose(fp2);
//         fclose(fp1);
//     }

//     printf("Successfully replaced all 3 files\n");

//     return 0;
// }

#include <stdio.h>
int main()
{
    FILE *fp1, *fp2;

    int id;
    printf("Enter your id: ");
    scanf("%d", &id);

    int ch;

    char src_filename[50], targetfilename[50];

    sprintf(src_filename, "%d.jpg", id);

    for (int i = 1; i <= 3; i++)
    {
        int targetid = id + i;

        fp1 = fopen(src_filename, "rb");
        if (fp1 == NULL)
        {
            printf("Error\n");
            return 1;
        }

        sprintf(targetfilename, "%d.jpg", targetid);

        fp2 = fopen(targetfilename, "wb");
        if (fp2 == NULL)
        {
            printf("Error\n");
            return 1;
        }

        while ((ch = fgetc(fp1)) != EOF)
        {
            fputc(ch, fp2);
        }

        printf("Replaced %s\n", targetfilename);

        fclose(fp2);
        fclose(fp1);
    }

    printf("Successfully replaced 3 files\n");

    return 0;
}