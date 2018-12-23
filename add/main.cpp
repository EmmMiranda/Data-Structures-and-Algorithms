#include <iostream>

int add(int param1, int param2);

int main() {
	std::cout << add(3, 4);
	return 0;
}

int add(int param1, int param2) {
    return param1  + param2;
}
