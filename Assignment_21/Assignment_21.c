#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *source, *destination;
    char source_file[100], dest_file[100];
    char ch;
    printf("Enter source file name: ");
    scanf("%s", source_file);
    printf("Enter destination file name: ");
    scanf("%s", dest_file);
    source = fopen(source_file, "r");
    if (source == NULL)
    {
        printf("Error: Cannot open source file.\n");
        exit(1);
    }
    destination = fopen(dest_file, "w");
    if (destination == NULL)
    {
        printf("Error: Cannot create destination file.\n");
        fclose(source);
        exit(1);
    }
    while ((ch = fgetc(source)) != EOF)
        fputc(ch, destination);
    printf("File copied successfully.\n");
    fclose(source);
    fclose(destination);
}
