#include <iostream>
#include <string>
#include <algorithm>

std::string reverseParentheses(std::string s);
	
int main()
{
	std::cout << reverseParentheses("23(890)sdf") << '\n';
	std::cout << reverseParentheses("23(fjh)") << '\n';
	std::cout << reverseParentheses("2(3(fjh)fhjr)qwe") << '\n';
	std::cout << reverseParentheses("23(fjh)f(hjr)qwe") << '\n';

	return 0;
}

std::string reverseParentheses(std::string s) {

    for (auto lit = s.end()-1; lit >= s.begin(); lit--) {
        if (*lit == '(') {
            for (auto rit = lit; rit != s.end(); rit++) {
                if (*rit == ')') {
                    
                    std::reverse(lit + 1, rit);
                    
                    rit = s.erase(rit);
                    lit = s.erase(lit);
                    break;
                }
            }
        }
    }
    
    return s;

}        
