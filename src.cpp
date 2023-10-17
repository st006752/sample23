#include <iostream>
int main(){
    std::cout << "Hello, World!" << std::endl;
    int var = 0;
    std::cin >> var;
    if ( var < 0 ) {
        std::cout << "Bad input" << std::endl;
	return 1;
    }
    return 0;
}
