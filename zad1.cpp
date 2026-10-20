#include <iostream>
#include <vector>

int columns{};
int rows{};
// do ziomka pisać na teams bo tam odpowiada szybciej

int main() {
  std::cout << "Podaj ilość wierszy macierzy: ";
  std::cin >> rows;
  std::cout << "Podaj ilość kolumn macierzy: ";
  std::cin >> columns;
  std::vector<std::vector<int>> matrix;
  for (int i = 0; i < rows; i++) {
    std::vector<int> row;
    for (int j = 0; j <  columns; j++) {
        int value = rand();
        std::cout << value << " ";
        row.push_back(value);
    }
    matrix.push_back(row);
    std::cout << std::endl;
  }

  return 0;
}