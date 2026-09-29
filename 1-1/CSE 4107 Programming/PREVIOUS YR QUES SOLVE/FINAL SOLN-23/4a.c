#include <stdio.h>
int main()
{
    FILE *src, *target;

    char targetfilename[20];
    char ch;
    for (int i = 1; i <= 3; i++)
    {
        src = fopen("main.jpg", "rb");
        sprintf(targetfilename, "%d.jpg", i);

        target = fopen(targetfilename, "wb");

        while ((ch = fgetc(src)) != EOF)
        {
            fputc(ch, target);
        }
        
        fclose(src);
        fclose(target);
    }

    return 0;
}