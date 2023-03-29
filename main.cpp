#include <iostream>

int main() {
  const int ROWS = 10;
  const int COLS = 10;

  int arr[ROWS][COLS];

  // Initializing the array with values
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      arr[i][j] = 0;
    }
  }

  // Printing the array
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      std::cout << arr[i][j] << " ";
    }
    std::cout << std::endl;
  }

  return 0;
}