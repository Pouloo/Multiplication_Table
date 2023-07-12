#include <stdio.h>
#include <stdlib.h>

/// For Design
void Design();

int main()
{
    int table, multiples, maxmlt;
    int continuance = 1;

    /// For Design
    Design();


    while(continuance == 1)
    {

        printf("Insert table: ");
        scanf("%d", &table);

        printf("\nInsert max multiple: ");
        scanf("%d", &maxmlt);

        printf("\nTABLE OF %d\n", table);

        for (multiples=0; multiples<=maxmlt; multiples++)
        {
            printf("%d x %d = %d\n", table, multiples, table*multiples);
        }

        printf("\nProceed with another table?\n");
        printf("-press 1 to proceed\n");
        printf("-press ANY OTHER NUMBER to end program\n");
        scanf("%d", &continuance);
        printf("\n");
        system("cls"); /// Clear the console screen

    }

    return 0;

}

void Design()
{
    for(int i = 0; i<50; i++)
    {
        printf("=");
    }
    printf("\n");

    printf("\t\tMultiplication Table\n\n");

    for(int i = 0; i<50; i++)
    {
        printf("=");
    }
    printf("\n\n");
}
