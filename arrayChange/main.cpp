#include <iostream>
#include <vector>

int arrayChange(std::vector<int> inputArray);
	
int main()
{
	std::cout << arrayChange({1, 1, 1}) << '\n';
	return 0;
}

int arrayChange(std::vector<int> inputArray) {
    int min_move{0};
    for (int i = 0; i < inputArray.size() - 1; i++) {
            while (inputArray[i] >= inputArray[i + 1]) {
                inputArray[i + 1]++;
                min_move++;
            }
    }
    return min_move;
}
