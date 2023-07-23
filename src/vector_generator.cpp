#include "vector_generator.hpp"

// Apparently, generating random numbers with rand() isn't "in" anymore,
// so I'm doing it the "modern" way.

std::vector<int> generate_random_vector(const int& size, const int& min, const int& max) {
    std::vector<int> vec(size);

    // Initialize random number generator with a random seed
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(min, max);

    for (int i {0}; i < size; i++) {
        vec.at(i) = dis(gen);
    }

    return vec;
}