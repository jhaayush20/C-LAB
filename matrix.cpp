#include <iostream>
using namespace std;

const int MAX = 10;

// Function to input matrix
void inputMatrix(int mat[][MAX], int rows, int cols)
{
    cout << "Enter elements:\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> mat[i][j];
        }
    }
}

// Function to display matrix
void displayMatrix(int mat[][MAX], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

// Function for addition
void addition(int A[][MAX], int B[][MAX], int rows, int cols)
{
    int C[MAX][MAX];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Addition:\n";
    displayMatrix(C, rows, cols);
}

// Function for subtraction
void subtraction(int A[][MAX], int B[][MAX], int rows, int cols)
{
    int C[MAX][MAX];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    cout << "Subtraction:\n";
    displayMatrix(C, rows, cols);
}

// Function for multiplication
void multiplication(int A[][MAX], int B[][MAX],
                    int r1, int c1, int r2, int c2)
{
    int C[MAX][MAX] = {0};

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Multiplication:\n";
    displayMatrix(C, r1, c2);
}

// Function for transpose
void transpose(int A[][MAX], int rows, int cols)
{
    int T[MAX][MAX];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            T[j][i] = A[i][j];
        }
    }

    cout << "Transpose:\n";
    displayMatrix(T, cols, rows);
}

int main()
{
    int A[MAX][MAX], B[MAX][MAX];
    int r1, c1, r2, c2;
    int choice;

    cout << "Enter rows and columns of Matrix A: ";
    cin >> r1 >> c1;

    inputMatrix(A, r1, c1);

    cout << "\nEnter rows and columns of Matrix B: ";
    cin >> r2 >> c2;

    inputMatrix(B, r2, c2);

    do
    {
        cout << "\n----- MATRIX MENU -----\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Transpose of Matrix A\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                if (r1 == r2 && c1 == c2)
                    addition(A, B, r1, c1);
                else
                    cout << "Addition not possible!\n";
                break;

            case 2:
                if (r1 == r2 && c1 == c2)
                    subtraction(A, B, r1, c1);
                else
                    cout << "Subtraction not possible!\n";
                break;

            case 3:
                if (c1 == r2)
                    multiplication(A, B, r1, c1, r2, c2);
                else
                    cout << "Multiplication not possible!\n";
                break;

            case 4:
                transpose(A, r1, c1);
                break;

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}