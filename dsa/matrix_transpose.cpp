#include <iostream>
using namespace std;

void transpose(int m[3][3]);
void transpose(int matrix[3][3])
{
    int tp[3][3];
    int i, j;
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            tp[j][i] = matrix[i][j]; // transposing and storing in tp matrix
        }
    }
} // end of the function

int main()
{
    int matrix[3][3] = {{3, 4, 5},
                        {6, 7, 8},
                        {9, 10, 11}};
    int i, j;
    cout << "Matrix output" << endl;
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            cout << matrix[i][j] << "\t"; // display of matrix element
        }
        cout << endl;
    }

    transpose(matrix); // transposing the matrix

    cout << "Matrix after transpose" << endl;
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
// program to transpose the matrix