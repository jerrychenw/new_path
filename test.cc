#include <iostream>
#include <vector>
#include <algorithm>

void PrintVec(const std::vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] <<  ((i == vec.size() - 1) ? "\n" : " ");
    }
}

int main() {
    std::vector<int> to_be_sorted{1, 3, 16, 3};
    PrintVec(to_be_sorted);
    std::sort(to_be_sorted.begin(), to_be_sorted.end());
    PrintVec(to_be_sorted);
}