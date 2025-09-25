//
// Created by Kilian on 25.09.25.
//

#include <iostream>
#include <algorithm>


int main() {
    std::vector<int> nums = {1, 3, 4, 5, 6, 7, 8, 9};
    std::string test = "Hello, World!";
    std::sort(nums.begin(), nums.end(),
          [](int a, int b) {
              std::cout << "Vergleiche: " << a << " mit " << b << std::endl;
              return a > b;
          });
    for (int i : nums) {
        std::cout << i << " ";
    }

    return 0;
}