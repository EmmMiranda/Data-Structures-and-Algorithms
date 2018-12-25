#include <iostream>
#include <unordered_map>


bool palindromeRearranging(std::string inputString);

int main()
{
	std::cout << std::boolalpha;
	std::cout << "Are these palindromes?\n";
	std::cout << palindromeRearranging({"aabb"}) << '\n';
	std::cout << palindromeRearranging({"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaabc"}) << '\n';
	std::cout << palindromeRearranging({"abbcabb"}) << '\n';
	std::cout << palindromeRearranging({"zyyzzzzz"}) << '\n';

	return 0;
}

bool palindromeRearranging(std::string inputString) {
    
    if (inputString.length() > 1) {
        
        std::unordered_map<char, int> char_count;
        for (int i = 0; i < inputString.size(); i++)
            char_count[inputString[i]]++;
            
        int odd_count{0};
        for (int i = 0; i < char_count.size(); i++)
            if (char_count[i] % 2)
                odd_count++;
            
        if (odd_count > 1)
            return false;
        
    }
    
    return true;
}
