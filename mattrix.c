#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    int matrix[m][n];
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate row sum
    int row_sum[m];
    for (int i = 0; i < m; i++) {
        row_sum[i] = 0;
        for (int j = 0; j < n; j++) {
            row_sum[i] += matrix[i][j];
        }
    }

    // Calculate column sum
    int col_sum[n];
    for (int j = 0; j < n; j++) {
        col_sum[j] = 0;
        for (int i = 0; i < m; i++) {
            col_sum[j] += matrix[i][j];
        }
    }

    // Print the row sum
    printf("Row sum: ");
    for (int i = 0; i < m; i++) {
        printf("%d ", row_sum[i]);
    }
    printf("\n");

    // Print the column sum
    printf("Column sum: ");
    for (int j = 0; j < n; j++) {
        printf("%d ", col_sum[j]);
    }
    printf("\n");

    return 0;
}

