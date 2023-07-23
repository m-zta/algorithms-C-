#include "sorting_algorithms.hpp"
#include <iostream>

std::vector<std::vector<int>> bubble_sort(std::vector<int>& vec) {
    std::vector<std::vector<int>> steps {};
    steps.push_back(vec);
    std::size_t n {vec.size()};

    for (int i {0}; i < n - 1; i++) {
        bool swapped {false};

        for (int j {0}; j < n - i - 1; j++) {
            if (vec.at(j) > vec.at(j + 1)) {
                std::swap(vec.at(j), vec.at(j + 1));
                swapped = true;
            }
        }

        if (!swapped) break;
        steps.push_back(vec);
    }

    return steps;
}

std::vector<std::vector<int>> selection_sort(std::vector<int>& vec) {
    std::vector<std::vector<int>> steps {};
    steps.push_back(vec);
    std::size_t n {vec.size()};

    for (int i {0}; i < n - 1; i++) {
        int min_idx {i};

        for (int j {i + 1}; j < n; j++) {
            if (vec.at(j) < vec.at(min_idx)) {
                min_idx = j;
            }
        }

        std::swap(vec.at(i), vec.at(min_idx));
        steps.push_back(vec);
    }

    return steps;
}

std::vector<std::vector<int>> insertion_sort(std::vector<int>& vec) {
    std::vector<std::vector<int>> steps {};
    steps.push_back(vec);
    std::size_t n {vec.size()};

    for (int i {1}; i < n; i++) {
        int key {vec.at(i)};
        int j {i - 1};

        while (j >= 0 && vec.at(j) > key) {
            vec.at(j + 1) = vec.at(j);
            j--;
        }

        vec.at(j + 1) = key;
        steps.push_back(vec);
    }

    return steps;
}

// std::vector<std::vector<int>> merge_sort(std::vector<int>& vec, int first, int last) {
//     std::vector<std::vector<int>> steps {};
//     steps.push_back(vec);

//     // input validation
//     if (first < 0 || last >= vec.size()) {
//         std::cout << "Invalid input for merge_sort.\n";
//         return steps;
//     }

//     // base case
//     if (first == last) {
//         return steps;
//     }

//     int mid {(first + last) / 2};
//     if (first < mid) {
//         merge_sort(vec, first, mid);
//     }
//     if (mid + 1 < last) {
//         merge_sort(vec, mid + 1, last);
//     }

//     return steps;
// }