#include <iostream>
using namespace std;

const int MAX_ROWS = 5;
const int MAX_COLS = 5;

class Matrices {
private:
    int rows;
    int cols;
    int data[MAX_ROWS][MAX_COLS];

public:
    Matrices(int r, int c) : rows(r), cols(c) {
        // Initialize all elements to 0
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                data[i][j] = 0;
            }
        }
    }

    // Set value at position (i, j)
    void setValue(int i, int j, int value) {
        if (i >= 0 && i < rows && j >= 0 && j < cols) {
            data[i][j] = value;
        } else {
            throw out_of_range("Index out of range");
        }
    }

    // Matrix multiplication operator
    Matrices operator*(const Matrices &obj) {
        if (cols != obj.rows) {
            throw invalid_argument("Matrix dimensions mismatch for multiplication");
        }

        Matrices result(rows, obj.cols);

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < obj.cols; ++j) {
                result.data[i][j] = 0;  // Initialize result matrix element
                for (int k = 0; k < cols; ++k) {
                    result.data[i][j] += data[i][k] * obj.data[k][j];
                }
            }
        }

        return result;
    }

    // Display matrix elements
    void display() {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrices m1(2, 3);  // Matrix with 2 rows and 3 columns
    m1.setValue(0, 0, 1); m1.setValue(0, 1, 2); m1.setValue(0, 2, 3);
    m1.setValue(1, 0, 4); m1.setValue(1, 1, 5); m1.setValue(1, 2, 6);

    Matrices m2(3, 2);  // Matrix with 3 rows and 2 columns
    m2.setValue(0, 0, 7);  m2.setValue(0, 1, 8);
    m2.setValue(1, 0, 9);  m2.setValue(1, 1, 10);
    m2.setValue(2, 0, 11); m2.setValue(2, 1, 12);

    try {
        Matrices result = m1 * m2;  // Multiplication result will have 2 rows and 2 columns
        cout << "Result of matrix multiplication:" << endl;
        result.display();
    }
    catch (const exception& e) {
        cerr << "Exception: " << e.what() << endl;
    }

    return 0;
}
