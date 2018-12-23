#include <iostream>
#include <vector>
#include <algorithm>

bool areSimilar(std::vector<int> a, std::vector<int> b);

int main()
{
	std::cout << std::boolalpha;
	std::cout << areSimilar(std::vector<int>{3, 4, 5}, std::vector<int>{5, 4, 6}) << '\n';	
	std::cout << areSimilar(std::vector<int>{3, 4, 5}, std::vector<int>{3, 5, 4}) << '\n';	
	std::cout << areSimilar(std::vector<int>{3, 4, 5}, std::vector<int>{4, 3, 5}) << '\n';	
	std::cout << areSimilar(std::vector<int>{5, 4, 3}, std::vector<int>{3, 4, 5}) << '\n';	
	std::cout << areSimilar(std::vector<int>{5, 4, 3, 7}, std::vector<int>{7, 3, 4, 5}) << '\n';	
	
	return 0;

}

bool areSimilar(std::vector<int> a, std::vector<int> b)
{


	if (a == b) return true;

	if (a.size() != b.size())
		return false;

	for (auto e:a)
		if (std::find(b.begin(), b.end(), e) == b.end()) 
			return false;

	int num_swaps{0};
	for (int i = 0; i < a.size(); i++)
		if (a[i] != b[i])
			num_swaps++;
	if (num_swaps > 2)
		return false;

	if (std::accumulate(a.begin(), a.end(), 0) != std::accumulate(b.begin(), b.end(), 0))
		return false;

	return true;	
}
