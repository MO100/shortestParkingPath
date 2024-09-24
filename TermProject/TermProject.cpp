#include <iostream>
#include <fstream>

using namespace std;
int main() {
    const int MAX_ROWS = 10; // maximum number of rows in the 2D array
    const int MAX_COLS = 11; // maximum number of columns in the 2D array
    char characters[MAX_ROWS][MAX_COLS] = {}; // initialize a 2D array to hold characters
    ifstream infile("parkingLot.txt"); // open the text file

    // read each line from the file and store in the 2D array
    int row = 0;
    string line;
    while (getline(infile, line) && row < MAX_ROWS) {
        int col;
        for (col = 0; col < line.length() && col < MAX_COLS - 1; col++) {
            characters[row][col] = line[col];
        }
        characters[row][col] = '\0'; // add a null terminator to the end of the row
        row++;
    }
    infile.close(); // close the file

    // print out the contents of the 2D array
    for (int i = 0; i < row; i++) {
        cout << characters[i] << endl;
    }

    return 0;
}