#include <stdio.h>
#include <stdbool.h>
void main()
{
    int choice;
    printf("Choose an operation:\n1. Sum\n2. Saddle Point\n3. Inverse\n4. Magic Square\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        int rows, cols;
        printf("Enter the number of rows and columns: ");
        scanf("%d %d", &rows, &cols);
        int arr1[rows][cols], arr2[rows][cols];
        printf("Enter the elements of the first matrix:\n");
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                scanf("%d", &arr1[i][j]);
        printf("Enter the elements of the second matrix:\n");
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                scanf("%d", &arr2[i][j]);
        printf("The sum of the two matrices is:\n");
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
                printf("%d ", arr1[i][j] + arr2[i][j]);
            printf("\n");
        }
        break;
    }
    case 2:
    {

        int m, n;
        printf("Enter the number of rows and columns: ");
        scanf("%d %d", &m, &n);
        int arr[m][n];
        printf("Enter the elements of the matrix:\n");
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                scanf("%d", &arr[i][j]);
        printf("Entered matrix:\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
                printf("%d ", arr[i][j]);
            printf("\n");
        }
        for (int i = 0; i < m; i++)
        {
            int min = arr[i][0], minIndex = 0;
            for (int j = 1; j < n; j++)
            {
                if (arr[i][j] < min)
                {
                    min = arr[i][j];
                    minIndex = j;
                }
            }
            int max = arr[0][minIndex];
            for (int k = 1; k < m; k++)
            {
                if (arr[k][minIndex] > max)
                {
                    max = arr[k][minIndex];
                }
            }
            if (min == max)
            {
                printf("Saddle point found at (%d, %d): %d\n", i, minIndex, min);
            }
        }
        break;
    }
    case 3:
    {
        int n = 3;
        int arr[n][n];
        float inverse[n][n];
        printf("Enter the elements of the 3x3 matrix:\n");
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                scanf("%d", &arr[i][j]);
        int det = 0;
        for (int i = 0; i < n; i++)
            det += (arr[0][i] * (arr[1][(i + 1) % n] * arr[2][(i + 2) % n] - arr[1][(i + 2) % n] * arr[2][(i + 1) % n]));
        if (det == 0)
            printf("The matrix is singular and cannot be inverted.\n");
        else
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    int rows[2], cols[2];
                    int r = 0, c = 0;
                    for (int k = 0; k < n; k++)
                        if (k != i)
                            rows[r++] = k;
                    for (int k = 0; k < n; k++)
                        if (k != j)
                            cols[c++] = k;
                    int minor = arr[rows[0]][cols[0]] * arr[rows[1]][cols[1]] - arr[rows[0]][cols[1]] * arr[rows[1]][cols[0]];
                    inverse[j][i] = ((i + j) % 2 == 0 ? minor : -minor) / (float)det;
                }
            }
            printf("The inverse of the matrix is:\n");
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                    printf("%.2f ", inverse[i][j]);
                printf("\n");
            }
        }
        break;
    }
    case 4:
    {
        int n;
        printf("Enter the size of the square matrix: ");
        scanf("%d", &n);
        int arr[n][n];
        printf("Enter the elements of the matrix:\n");
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                scanf("%d", &arr[i][j]);
        int sum = n * (n * n + 1) / 2;
        bool isMagic = true;
        for (int i = 0; i < n; i++)
        {
            int rowSum = 0, colSum = 0;
            for (int j = 0; j < n; j++)
            {
                rowSum += arr[i][j];
                colSum += arr[j][i];
            }
            if (rowSum != sum || colSum != sum)
            {
                isMagic = false;
                break;
            }
        }
        if (isMagic)
            printf("The matrix is a magic square.\n");
        else
            printf("The matrix is not a magic square.\n");
        break;
    }
    default:
        printf("Invalid choice.");
    }
}