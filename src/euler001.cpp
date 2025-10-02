#include <iostream>

int euler001() {
    int total = 0;
    for (int i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            total += i;
        }

    }

    return total;
}

int main() {
    std::cout << euler001() << "\n";
    return 0;
}