#include <iostream>
#include <vector>

using std::cout;

std::vector<int> alternatingSums(std::vector<int> a); 

int main() {

	cout << '[';
	for (auto e:alternatingSums(std::vector<int>{50, 60, 60, 45, 70}))
		cout << e << ' ';
	cout << "]\n";
	
	
	cout << '[';
	for (auto e:alternatingSums(std::vector<int>{40, 23}))
		cout << e << ' ';
	cout << "]\n";

	for (auto e:alternatingSums(std::vector<int>{24}))
		cout << e << ' ';
	cout << "]\n";

	return 0;
}

std::vector<int> alternatingSums(std::vector<int> a) {
    std::vector<int> team_weight(2,0);
    for (int team1_idx{0}; team1_idx < a.size(); team1_idx += 2) {
        team_weight[0] += a[team1_idx];
        if (team1_idx + 1 < a.size())
            team_weight[1] += a[team1_idx + 1];
    }
    return team_weight;
}
