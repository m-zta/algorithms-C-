#include <iostream>
#include <vector>
#include <unordered_map>

// This script takes a certain alphabet, the probability
// of each character and encode those according to Huffman

int main() {
    std::unordered_map<char, int> char_to_int;
    
    char_to_int['M'] = '0';
    char_to_int['N'] = '1';
    char_to_int['O'] = '2';
    char_to_int['R'] = '3';
    char_to_int['S'] = '4';

    std::cout << char_to_int['M'] << std::endl;
    return 0;

}
