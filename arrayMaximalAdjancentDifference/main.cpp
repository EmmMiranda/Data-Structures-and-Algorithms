#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

int main()
{
	std::vector<int> inputArray{ 2, 4, 1, 0 };
	std::cout << *(std::max_element(inputArray.begin() + 1, 
				   std::adjacent_difference(inputArray.begin(), inputArray.end(), 
					                        inputArray.begin(),
											[] (int rhs, int lhs) { return std::abs(lhs - rhs); }))) << '\n'; 
							 
	
	return 0;
}
