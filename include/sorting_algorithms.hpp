#ifndef SORTING_ALGORITHMS_H
#define SORTING_ALGORITHMS_H

#include <vector>

// sorting algorithms ranked by complexity

// O(n^2)
void bubble_sort(std::vector<int>& vec);
void selection_sort(std::vector<int>& vec);
void insertion_sort(std::vector<int>& vec);

// O(n^2) but faster than bubble, selection and insertion
void merge_sort(std::vector<int>& vec);

// O(nlogn)
void quick_sort(std::vector<int>& vec);

# endif // SORTING_ALGORITHMS_H