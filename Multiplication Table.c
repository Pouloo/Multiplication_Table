#include <stdio.h>
#include <stdlib.h>

// Prototypes
void Design();
void Multiplication();

int main()
{
	Design();
	Multiplication();
	
	return 0;
}

// For design 
void Design()
{
	int i;
	
    for(i = 0; i<50; i++)
    {
        printf("=");
    }
    printf("\n");

    printf("\t\tMultiplication Table\n\n");
	
    for(i = 0; i<50; i++)
    {
        printf("=");
    }
    printf("\n\n");
}

// For the muliplication table
void Multiplication()
{
    int table, multiples, maxMlt;
    int continuance = 1;

    while(continuance == 1)
    {

        printf("Insert table: ");
        scanf("%d", &table);

        printf("\nInsert max multiple: ");
        scanf("%d", &maxMlt);

        printf("\nTABLE OF %d\n", table);

        for (multiples=0; multiples<=maxMlt; multiples++)
        {
            printf("%d x %d = %d\n", table, multiples, table*multiples);
        }

        printf("\nProceed with another table?\n");
        printf("-press 1 to proceed\n");
        printf("-press ANY OTHER NUMBER to end program\n");
        scanf("%d", &continuance);
        printf("\n");
		
        system("clear"); // Clears the console screen
    }

}
