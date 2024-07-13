#include <iostream>
#include <iomanip> // For setprecision
#include <cmath>

class ExponentialSeries {
private:
    int precision;  // Number of terms to calculate in the series
    double x;       // Value of x for which the series is computed

public:
    // Constructor to initialize with a given precision
    ExponentialSeries(double value, int prec) : x(value), precision(prec) {}

    // Function to calculate e^x for a given x and display the series
    double calculateExponential() {
        double result = 1.0;  // Initialize result with the first term (n=0)

        std::cout << "e^" << x << " = ";
        std::cout << result;  // Print the first term

        // Calculate subsequent terms in the series up to the specified precision
        for (int n = 1; n <= precision; ++n) {
            double term = pow(x, n) / factorial(n);
            result += term;

            // Print each term in the series
            if (term != 0.0) {
                std::cout << " + " << term;
                if (n > 1) {
                    std::cout << "x^" << n << "/" << n << "!";
                }
            }
        }

        std::cout << " = " << std::setprecision(10) << result << std::endl;

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
    double x = 1.0;
    int precision = 5; // Adjust precision as needed

    ExponentialSeries series(x, precision);

    double result = series.calculateExponential();

    return 0;
}
