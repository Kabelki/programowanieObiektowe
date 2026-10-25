#include <iostream>
#include <vector>

// do ziomka pisać na teams bo tam odpowiada szybciej
unsigned bounded_rand() {
  return rand() % 9;
}

int mSum(std::vector<std::vector<int>> A); //kopiuję elementy, a mogłem użyć referencji, co byłoby bardziej wydajne - do poprawki

int main() {
  int columns{};
  int rows{};

  std::cout << "Give the numbers of rows of matrix: ";
  std::cin >> rows;
  std::cout << "Give the number of columns of matrix: ";
  std::cin >> columns;

  std::vector<std::vector<int>> matrix;
  for (int i = 0; i < rows; i++) {
    std::vector<int> row;
    for (int j = 0; j < columns; j++) {
      int value = bounded_rand();
      std::cout << value << " ";
      row.push_back(value);
    }
    matrix.push_back(row);
    std::cout << std::endl;
  }

  std::cout << "Sum of numbers in even columns and odd rows is: " << mSum(matrix) << std::endl;
  return 0;
}



int mSum(std::vector<std::vector<int>> A) {
  int sum = 0;
  for (int i = 0; i < A.size(); i++) {
    for (int j = 0; j < A[i].size(); j++) {
      if (i % 2 || j % 2 == 0) {
      sum += A[i][j];
      }
    }
  }
  return sum;
}