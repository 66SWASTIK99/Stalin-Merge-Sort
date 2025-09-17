#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include <fstream>

using namespace std;

int main() {
    const int SIZE = 10000;
    std::vector<int> arr(SIZE);

    // Setup random number generator
    std::mt19937 rng(static_cast<unsigned int>(std::time(nullptr)));
    std::uniform_int_distribution<int> dist(0, 10000);

    // Generate random numbers
    for (int i = 0; i < SIZE; ++i) {
        arr[i] = dist(rng);
    }

    // Save to file with commas
    std::ofstream out("random_numbers.csv");
    if (!out) {
        std::cerr << "Error opening file for writing.\n";
        return 1;
    }

    for (int i = 0; i < SIZE; ++i) {
        out << arr[i];
        if (i != SIZE - 1) {
            out << ",";
        }
    }
    out.close();

    // Print first 10 numbers as sample
    // std::cout << "First 10 random numbers:\n";
    // for (int i = 0; i < 10; ++i) {
    //     std::cout << arr[i] << " ";
    // }
    // std::cout << "\n";

    // std::cout << "1 million random numbers saved to random_numbers.csv (comma-separated)\n";

    return 0;
}
