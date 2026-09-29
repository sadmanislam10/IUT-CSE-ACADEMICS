#include <stdio.h>

void func(int id)
{
    FILE *fp1, *fp2;

    char targetname[50];
    int ch;

    for (int i = 1; i <= 20; i++)
    {

        fp1 = fopen("240041107.jpeg", "rb");
        sprintf(targetname, "%d_backup%d.jpeg", id, i);
        fp2 = fopen(targetname, "wb");

        while ((ch = fgetc(fp1)) != EOF)
        {
            fputc(ch, fp2);
        }

        fclose(fp2);
        fclose(fp1);
    }
}

int main()
{
    int id = 240041107;

    func(id);

    return 0;
}