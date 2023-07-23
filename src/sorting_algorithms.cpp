#include "sorting_algorithms.hpp"

void bubble_sort(std::vector<int>& vec) {
    int n = vec.size();
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (vec[j] > vec[j + 1]) {
                std::swap(vec[j], vec[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

void selection_sort(std::vector<int>& vec) {
    int n = vec.size();
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (vec[j] < vec[min_idx]) {
                min_idx = j;
            }
        }
        std::swap(vec[i], vec[min_idx]);
    }
}

void insertion_sort(std::vector<int>& vec) {
    int n = vec.size();
    for (int i = 1; i < n; i++) {
        int key = vec[i];
        int j = i - 1;
        while (j >= 0 && vec[j] > key) {
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = key;
    }
}

void merge(std::vector<int>& vec, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    
    std::vector<int> L(n1);
    std::vector<int> R(n2);
    
    for (int i = 0; i < n1; i++) {
        L[i] = vec[l + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = vec[m + 1 + j];
    }
    
    int i = 0;
    int j = 0;
    int k = l;
    
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vec[k] = L[i];
            i++;
        } else {
            vec[k] = R[j];
            j++;
        }
        k++;
    }
    
    while (i < n1) {
        vec[k] = L[i];
        i++;
        k++;
    }
    
    while (j < n2) {
        vec[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort(std::vector<int>& vec, int l, int r) {
    if (l >= r) return;
    
    int m = l + (r - l) / 2;
    merge_sort(vec, l, m);
    merge_sort(vec, m + 1, r);
    merge(vec, l, m, r);
}

void merge_sort(std::vector<int>& vec) {
    merge_sort(vec, 0, vec.size() - 1);
}

void quick_sort(std::vector<int>& vec, int l, int r) {
    if (l >= r) return;
    
    int pivot = vec[r];
    int i = l - 1;
    
    for (int j = l; j < r; j++) {
        if (vec[j] < pivot) {
            i++;
            std::swap(vec[i], vec[j]);
        }
    }
    
    std::swap(vec[i + 1], vec[r]);
    
    quick_sort(vec, l, i);
    quick_sort(vec, i + 2, r);
}