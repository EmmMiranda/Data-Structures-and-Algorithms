#include <iostream>
#include <set>

bool areEquallyStrong(int yourLeft, int yourRight, int friendsLeft, int friendsRight);

int main()
{
	std::cout << std::boolalpha;
	std::cout << areEquallyStrong(10, 5, 5, 10) << '\n';
	std::cout << areEquallyStrong(1, 5, 1, 5) << '\n';
	std::cout << areEquallyStrong(1, 1, 1, 1) << '\n';
	return 0;
}

bool areEquallyStrong(int yourLeft, int yourRight, int friendsLeft, int friendsRight)
{
	std::multiset<int> yours{ yourLeft, yourRight };
	return std::equal(yours.begin(), yours.end(), 
		   			  std::multiset<int>{friendsLeft, friendsRight}.begin()); 
}
