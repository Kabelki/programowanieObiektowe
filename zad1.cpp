#include <iostream>
#include <vector>

int columns{};
int rows{};
// do ziomka pisać na teams bo tam odpowiada szybciej
unsigned bounded_rand(
    unsigned range) { // funkcja zapożyczona z dokumentacji rand na devdocs.io
  for (unsigned x, r;;)
    if (x = rand(), r = x % range, x - r <= -range)
      return r;
}

int main() {
  int mSum{};
  std::cout << "Podaj ilość wierszy macierzy: ";
  std::cin >> rows;
  std::cout << "Podaj ilość kolumn macierzy: ";
  std::cin >> columns;
  std::vector<std::vector<int>> matrix;
  for (int i = 0; i < rows; i++) {
    std::vector<int> row;
    for (int j = 0; j < columns; j++) {
      int value = bounded_rand(9);
      if (j % 2 == 0 || i % 2 == 1)
        mSum += value;
      std::cout << value << " ";
      row.push_back(value);
    }
    matrix.push_back(row);
    std::cout << std::endl;
  }
  std::cout << mSum << std::endl;

  return 0;
}