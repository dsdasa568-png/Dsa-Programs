#include <iostream>
#include <vector>
#include <unordered_map>

int main() {
    std::vector<int> numbers = {2, 4, 2, 1, 4, 2, 5};
    std::unordered_map<int, int> frequencyMap;

    // Count frequencies
    for (int num : numbers) {
        frequencyMap[num]++;
    }

    // Display the results
    std::cout << "Element : Frequency\n";
    for (const auto& pair : frequencyMap) {
        std::cout << pair.first << " : " << pair.second << "\n";
    }

    return 0;
}
