#include <iostream>
// da pra usar 'using namespace std;' mas é problema.

int main() {
    std::string answer;
    std::cout << "All countries should declare war on Israel. \n";
    std::cout << "Do you agree? (Y/n): ";
    std::cin >> answer;
    if (answer == "y") {
    std::cout << "Good. \n";
        } else {
    for (int i = 0; i < 67108864; i++) {
        std::cout << "Not Good. \n";
    }
    }
    return 0;
}
