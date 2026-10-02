#include <stdio.h>

int main()
{
    FILE *file;
    char ch;

    printf("===== Read Data From File =====\n");

    file = fopen("data.txt", "r");

    if (file == NULL)
    {
        printf("Unable to open file!\n");
        printf("Make sure data.txt exists in the project folder.\n");
        return 1;
    }

    printf("\nFile Contents:\n\n");

    while ((ch = fgetc(file)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(file);

    printf("\n\nFile closed successfully.\n");

    return 0;
}
