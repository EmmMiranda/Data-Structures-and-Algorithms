#include <iostream>
#include <vector>

std::vector<std::vector<int>> boxBlur(std::vector<std::vector<int>> image);

void print(std::vector<std::vector<int>> image);

int main() {

  auto bimg = boxBlur({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}});
  print(bimg);

  auto bimg2 = boxBlur({{1, 1, 1}, {1, 7, 1}, {1, 1, 1}});
  print(bimg2);

  auto bimg3 = boxBlur({{7, 4, 0, 1}, {5, 6, 2, 2}, {6, 10, 7, 8}, {1, 4, 2, 0}});
  print(bimg3);

  return 0;
}

std::vector<std::vector<int>> boxBlur(std::vector<std::vector<int>> image) {
	
  std::vector<std::vector<int>> blured_image(
  image.size() - 2, std::vector<int>(image[0].size() - 2, 0));

  for (int i = 1; i < image.size() - 1; i++)
	  for (int j = 1; j < image[0].size() - 1; j++)
		  blured_image[i-1][j-1] = (image[i-1][j-1] + image[i-1][j] + image[i-1][j+1] +
				                    image[i][j-1] + image[i][j] + image[i][j+1] +
				         			image[i+1][j-1] + image[i+1][j] + image[i+1][j+1]) / 9; 
  
  return blured_image;
}
void print(std::vector<std::vector<int>> image)
{
  for (auto v : image) {
    std::cout << '[';
    for (auto i : v)
      std::cout << i << ',';
    std::cout << "]\n";
  }
}
