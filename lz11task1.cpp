#include <windows.h>
#include <iostream>
using namespace std;

// Функція для обчислення суми двох матриць
void sumMatrix(int A[3][3], int B[3][3], int C[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Функція для виведення матриці
void printMatrix(int M[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int A[3][3], B[3][3], C[3][3];

    cout << "Введіть елементи першої матриці (3x3):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }

    cout << "\nВведіть елементи другої матриці (3x3):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "B[" << i << "][" << j << "] = ";
            cin >> B[i][j];
        }
    }

    // Викликаємо функцію для обчислення суми
    sumMatrix(A, B, C);

    cout << "\nСума двох матриць (матриця C):" << endl;
    printMatrix(C);

    return 0;
}
