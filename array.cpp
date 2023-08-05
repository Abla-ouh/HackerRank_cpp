
#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> arr(N);

    for (int i = 0; i < N; ++i) {
        std::cin >> arr[i];
    }

    for (int i = N - 1; i >= 0; --i) {
        std::cout << arr[i];
        if (i != 0) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
