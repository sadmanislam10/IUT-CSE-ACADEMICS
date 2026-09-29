#include <stdio.h>
#include <string.h>

// strcmp("Tetrahedron", "Tetrahedron") == 0 → returns 0 because strings are equal
// strcmp("Tetrahedron", name) == 0 → checks if name is equal to "Tetrahedron"

int main()
{
    int n, count = 0;
    scanf("%d", &n);

    char name[20];

    while (n--)
    {
        scanf("%s", name);

        if (strcmp(name, "Tetrahedron") == 0)
        {
            count += 4;
        }
        else if (strcmp(name, "Cube") == 0)
        {
            count += 6;
        }
        else if (strcmp(name, "Octahedron") == 0)
        {
            count += 8;
        }
        else if (strcmp(name, "Dodecahedron") == 0)
        {
            count += 12;
        }
        else if (strcmp(name, "Icosahedron") == 0)
        {
            count += 20;
        }
    }
    printf("%d", count);

    return 0;
}