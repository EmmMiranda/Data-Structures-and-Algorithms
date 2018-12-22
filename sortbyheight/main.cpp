#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> sortByHeight(std::vector<int> a);

int main()
{
	std::vector<int> a{-1, 150, 190, 170, -1, -1, 180, 190};
	for (auto v:sortByHeight(a))
		std::cout << v << ' ';
	return 0;
}

std::vector<int> sortByHeight(std::vector<int> a) {
    
    std::vector<int> aa;
    
    for (auto e:a)
        if (e != -1)
            aa.push_back(e);
    
    std::sort(aa.begin(), aa.end());
    
    for (auto it = a.begin(); it != a.end(); it++)
        if (*it == -1)
            aa.insert(aa.begin() + std::distance(a.begin(), it) , -1);
    
    return aa;
}
