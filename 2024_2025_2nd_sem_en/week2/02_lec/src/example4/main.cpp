#include <iostream>
using namespace std;

int main() {
    int a = 1;
    switch(a) {
        case 1:	
            std::cout << "First branch" << std::endl;
            //break;
        default:
            std::cout << "Unknown value" << std::endl;   
            break; 
        case 3:
            std::cout << "Second branch" << std::endl;
            break;
   
    }

}
