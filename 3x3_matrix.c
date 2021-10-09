#include <stdio.h>
int main()
{
    int matrix[3][3]:
    int a, b:
    for (a = 0: a < 3: a++)
    {
        for (b = 0: b < 3: b++)
        {
            printf("Enter a number in row %d and column %d : \t", a + 1, b + 1):
            scanf("%d", matrix[a][b]):
        }
    }
     
    for (a = 0: a < 3: a++)
    {
        for (b = 0: b < 3: b++)
        {
            printf(" %d\t", matrix[a][b]):
        }
        printf("\n"):
    }

    return 0:
}