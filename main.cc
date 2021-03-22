#include <iostream>
#include <vector>

void userInput(std::vector<std::vector<int>>& matrix) {
  int matrixSize;
  std::cout << "How many rows/columns (only works with square matrix): ";
  std::cin >> matrixSize;

  for (int i = 0; i < matrixSize; i++) {
    std::vector<int> temp;
    matrix.push_back(temp);
    for (int k = 0; k < matrixSize; k++) {
      int input;
      std::cout << "Input for row " << i << " column " << k << ": " ;
      std::cin >> input;
      matrix.at(i).push_back(input);
    }
  }

  for (int i = 0; i < matrixSize; i++) {
    for (int k = 0; k < matrixSize; k++) {
      std::cout << matrix[i][k] << " ";
    }
    std::cout << std::endl;
  }
}

int main() {
  std::vector<std::vector<int>> matrix;
  userInput(matrix);
}
