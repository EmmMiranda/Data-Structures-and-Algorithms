#include <iostream>
#include <vector>
#include <algorithm>

int avoidObstacles(std::vector<int> inputArray); 
int avoidObstacles2(std::vector<int> inputArray); 

int main()
{
	std::cout << "Smallest jump: " << avoidObstacles({5, 3, 6, 7, 9}) << '\n';
	std::cout << "Smallest jump: " << avoidObstacles({1, 4, 10, 6, 2}) << '\n';
	std::cout << "Smallest jump: " << avoidObstacles2({1, 4, 10, 6, 2}) << '\n';
	std::cout << "Smallest jump: " << avoidObstacles2({5, 3, 6, 7, 9}) << '\n';
	return 0;
}

int avoidObstacles(std::vector<int> inputArray) {
  
	std::sort(inputArray.begin(), inputArray.end());
			
	for (int i = 1; i <= inputArray.front() + 1; i++) {

		bool valid_jump{true};
		for(auto obs:inputArray)
			if (obs % i == 0)
				valid_jump = false;

		if (valid_jump)
			return i;

	}

}

int avoidObstacles2(std::vector<int> inputArray) {

	for (int i = 1; i <= inputArray.front() + 1; i++) {

		if (std::all_of(inputArray.begin(), inputArray.end(), [i](int e) { return e % i != 0; }))
			return i;

	}

}
