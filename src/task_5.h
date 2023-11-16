#include <iostream>
#include <vector>
#include <cstring>

int getSeparationLines(const std::vector<std::vector<char>>& matrix) {
    int rows = matrix.size();
    if (rows == 0) {
        return 0;
    }

    int cols = matrix[0].size();
    bool hasYellow = false;
    bool hasBlue = false;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 'y') {
                hasYellow = true;
            } else if (matrix[i][j] == 'b') {
                hasBlue = true;
            }
        }
    }

    if (!hasYellow || !hasBlue) {
        return 0;
    }

    int horizontalLines = 0;
    int verticalLines = 0;

    for (int i = 0; i < rows; i++) {
        bool yellowRow = false;
        bool blueRow = false;
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 'y') {
                yellowRow = true;
            } else if (matrix[i][j] == 'b') {
                blueRow = true;
            }
        }
        if (yellowRow && blueRow) {
            horizontalLines++;
        }
    }

    for (int j = 0; j < cols; j++) {
        bool yellowCol = false;
        bool blueCol = false;
        for (int i = 0; i < rows; i++) {
            if (matrix[i][j] == 'y') {
                yellowCol = true;
            } else if (matrix[i][j] == 'b') {
                blueCol = true;
            }
        }
        if (yellowCol && blueCol) {
            verticalLines++;
        }
    }

    return std::min(horizontalLines, verticalLines) + 1;
}

int main() {
    int rows, cols;
    std::cout << "Enter the number of rows in the matrix: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns in the matrix: ";
    std::cin >> cols;

    std::vector<std::vector<char>> matrix(rows, std::vector<char>(cols));

    std::cout << "Enter the matrix of symbols representing colors:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> matrix[i][j];
        }
    }

    int separationLines = getSeparationLines(matrix);

    std::cout << "The smallest number of lines needed to separate yellow points from blue points is: " << separationLines << std::endl;

    return 0;
}

