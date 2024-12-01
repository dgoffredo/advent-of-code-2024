#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> lefts, rights;
    int left, right;
    while (std::cin >> left >> right) {
        lefts.push_back(left);
        rights.push_back(right);
    }

    std::sort(lefts.begin(), lefts.end());
    std::sort(rights.begin(), rights.end());
    unsigned long long sum = 0;
    for (std::size_t i = 0; i < lefts.size(); ++i) {
        const auto [lesser, greater] = std::minmax(lefts[i], rights[i]);
        sum += greater - lesser;
    }
    std::cout << sum << '\n';
}
