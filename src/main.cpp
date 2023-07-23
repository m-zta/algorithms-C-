#include "sorting_algorithms.hpp"
#include "vector_generator.hpp"
#include <vector>
#include <iostream>

// Print a vector with comma and brackets
void print(std::vector<int> vec) {
    std::cout << "[";
    for (int i {0}; i < vec.size(); i++) {
        std::cout << vec.at(i);
        if (i != vec.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}

// Print every step of the sorting algorithm
void print_steps(std::vector<std::vector<int>> steps) {
    std::cout << "\nSorting process: \n";

    for (int i {0}; i < steps.size(); i++) {
        std::cout << "Step " << i << ": ";
        print(steps.at(i));
    }
}



int main() {
    std::vector<int> vec = generate_random_vector(10, 0, 100);
    std::cout << "Unsorted vector: ";
    print(vec);

    std::cout << "\nSelect mode:\n- 1: Bubble sort\n- 2: Selection sort\n- 3: Insertion sort\n- 4: Merge sort\n- 5: Quick sort\n";
    do {
        int mode {0};
        std::cin >> mode;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid mode, please enter a number.\n";
            continue;
        }

        switch(mode) {
            case 1:
                print_steps(bubble_sort(vec));
                break;
            case 2:
                print_steps(selection_sort(vec));
                break;
            case 3:
                print_steps(insertion_sort(vec));
                break;
            case 4:
                // print_steps(merge_sort(vec));
                break;
            case 5:
                // print_steps(quick_sort(vec));
                break;
            default:
                std::cout << "Invalid mode, please enter a number between 1 and 5.\n";
                continue;
        }
    } while (true);

    std::cout << "\nEnd result: ";
    print(vec);

    return 0;
}
