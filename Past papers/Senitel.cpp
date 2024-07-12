#include <iostream>

int main() {
    double rainfall;
    double totalRainfall = 0.0;
    int count = 0;
    const int MAX_MONTHS = 4;

    std::cout << "Enter monthly rainfall totals for up to 4 months.\n";
    std::cout << "Enter -1 to stop early.\n";

    while (count < MAX_MONTHS) {
        std::cout << "Enter rainfall for month " << (count + 1) << ": ";
        std::cin >> rainfall;

        if (rainfall == -1) {
            break;
        }

        totalRainfall += rainfall;
        count++;
    }

    std::cout << "Total rainfall: " << totalRainfall << " units" << std::endl;

    return 0;
}
