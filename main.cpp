/******************************
* Обработка массивов          *
* Вариант 11                  *
* Колосков Дмитрий Викторович *
******************************/

#include <iostream>

using namespace std;

int main() {
  int maxCount, maxCount;

  cout << "Enter the number of columns ​​for the matrix: "; cin >> maxCount;
  cout << "Enter the number of row ​​for the matrix: ";     cin >> maxCount;
  cout << endl << "Value of the initial matrix:" << endl;

  int matrix[maxCount][maxCount];

  for (int rowIndex = 0; rowIndex < maxCount; ++rowIndex) {
    for (int columnIndex = 0; columnIndex < maxCount; ++columnIndex) {
      cout << matrix[rowIndex][columnIndex] << ' ';
    }
    cout << endl;
  }

  for (int rowIndex = 0; rowIndex < maxCount; ++rowIndex) {
    for (int columnIndex = 0; columnIndex < maxCount; ++columnIndex) {
      if (matrix[rowIndex][columnIndex] > 0) {
        matrix[rowIndex][columnIndex] = 1;
      } else {
        matrix[rowIndex][columnIndex] = 0;
      }
    }
  }

  cout << endl << "Value of the finished matrix:" << endl;

  for (int rowIndex = 0; rowIndex < maxCount; ++rowIndex) {
    for (int columnIndex = 0; columnIndex < maxCount; ++columnIndex) {
      cout << matrix[rowIndex][columnIndex] << ' ';
    }
    cout << endl;
  }

  return 0;
}