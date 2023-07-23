#include "sorting_algorithms.hpp"
#include "vector_generator.hpp"
#include <vector>
#include <iostream>

void print(std::vector<int>& vec) {
    // print vector with brackets
    std::cout << "[";
    for (int i {0}; i < vec.size(); i++) {
        std::cout << vec.at(i);
        if (i != vec.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}

int main() {
    std::vector<int> vec = generate_random_vector(10, 0, 100);
    std::cout << "Unsorted vector: ";
    print(vec);

    std::cout << "Sorted vector:    ";
    bubble_sort(vec);
    print(vec);

    return 0;
}
