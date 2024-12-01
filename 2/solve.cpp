#include <iostream>
#include <unordered_set>
#include <vector>

int main() {
    std::unordered_set<int> lefts;
    std::vector<int> rights;
    int left, right;
    while (std::cin >> left >> right) {
        lefts.insert(left);
        rights.push_back(right);
    }

    unsigned long long sum = 0;
    for (const int right : rights) {
        if (lefts.contains(right)) {
            sum += right;
        }
    }

    std::cout << sum << '\n';
}
