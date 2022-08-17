#include <iostream>

using namespace std;

int main()
{
    int A[3][3];
    int row, col, sum = 0;

    /* Input elements in matrix from user */
    printf("Enter elements in matrix of 3: \n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    /* Find sum of main diagonal elements */
    for(row=0; row<3; row++)
    {
        sum = sum + A[row][row];
    }

    printf("\nSum of main diagonal elements = %d", sum);

    return 0;
}
