#include <iostream>
using namespace std;

int main() {
    if (true)
        if (false)
            std::cout << "A\n";
        else
            std::cout << "B\n";
    return 0;
}
