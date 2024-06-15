#include <iostream>
#include <cmath>
#include <vector>

double calc_mean(const std::vector<double> &numbers) {
    double sum = 0;
    for (double x : numbers) {
        sum += x;
    }
    return sum / numbers.size();
}

double calc_variance(const std::vector<double> &numbers, double mean) {
    double variance = 0;
    for (double x : numbers) {
        variance += (x - mean) * (x - mean);
    }
    return variance / numbers.size();
}

int main() {
    std::vector<double> numbers = {1, 2, 3, 4, 5};
    double mean = calc_mean(numbers);
    double variance = calc_variance(numbers, mean);
    double stddev = sqrt(variance);
    double cv = stddev / mean * 100;

    std::cout << "Standard Deviation: " << stddev << std::endl;
    std::cout << "Coefficient of Variation: " << cv << "%" << std::endl;

    return 0;
}
