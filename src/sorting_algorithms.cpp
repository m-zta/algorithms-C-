#include "sorting_algorithms.hpp"
#include <iostream>

using std::vector;
using std::cout;
using std::size_t;

vector<vector<int>> bubble_sort(vector<int>& vec) {
    vector<vector<int>> steps {};
    steps.push_back(vec);
    size_t n {vec.size()};

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

vector<vector<int>> selection_sort(vector<int>& vec) {
    vector<vector<int>> steps {};
    steps.push_back(vec);
    size_t n {vec.size()};

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

vector<vector<int>> insertion_sort(vector<int>& vec) {
    vector<vector<int>> steps {};
    steps.push_back(vec);
    size_t n {vec.size()};

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