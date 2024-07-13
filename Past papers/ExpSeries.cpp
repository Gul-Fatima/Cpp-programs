#include <iostream>
#include <cmath>

class ExponentialSeries {
private:
    int precision;  // Number of terms to calculate in the series

public:
    // Constructor to initialize with a given precision
    ExponentialSeries(int prec) : precision(prec) {}

    // Function to calculate e^x for a given x
    double calculateExponential(double x) {
        double result = 1.0;  // Initialize result with the first term (n=0)

        // Calculate subsequent terms in the series up to the specified precision
        for (int n = 1; n <= precision; ++n) {
            result += pow(x, n) / factorial(n);
        }

        return result;
    }

private:
    // Helper function to calculate factorial of a number
    int factorial(int n) {
        return (n == 0 || n == 1) ? 1 : n * factorial(n - 1);
    }
};

int main() {
    // Example usage:
    ExponentialSeries series(10);  // Precision of 10 terms

    double x = 1.0;
    double result = series.calculateExponential(x);

    std::cout << "e^" << x << " = " << result << std::endl;

    return 0;
}
