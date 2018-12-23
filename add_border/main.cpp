#include <iostream>
#include <string>
#include <vector>


std::vector<std::string> addBorder(std::vector<std::string> picture);

int main()
{
	for (auto v:addBorder(std::vector<std::string>{"abc", "ded"}))
		std::cout << v << '\n';
	return 0;
}

std::vector<std::string> addBorder(std::vector<std::string> picture) {

	auto boderd_picture = std::vector<std::string>{
			picture.size() + 2, std::string(picture.front().size() + 2, '*')};

	for (int i = 0; i < picture.size(); ++i)
		for (int j = 0; j < picture.front().size(); j++)
			boderd_picture[i + 1][j + 1] = picture[i][j];	

	return boderd_picture; 
}
