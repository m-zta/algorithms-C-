#ifndef SORTING_ALGORITHMS_H
#define SORTING_ALGORITHMS_H

#include <vector>

// sorting algorithms ranked by complexity

// O(n^2)
std::vector<std::vector<int>> bubble_sort(std::vector<int>& vec);
std::vector<std::vector<int>> selection_sort(std::vector<int>& vec);
std::vector<std::vector<int>> insertion_sort(std::vector<int>& vec);

// O(n^2) but faster than bubble, selection and insertion
std::vector<std::vector<int>> merge_sort(std::vector<int>& vec, int first, int last);

// O(nlogn)
std::vector<std::vector<int>> quick_sort(std::vector<int>& vec, int first, int last);

# endif // SORTING_ALGORITHMS_H