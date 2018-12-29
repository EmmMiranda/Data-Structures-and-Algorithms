#include <iostream>
#include <string>
#include <regex>


bool isIPv4Address(std::string inputString); 

int main()
{
	std::cout << "Is ip v4 address: " << std::boolalpha << isIPv4Address("9.") << '\n';
	std::cout << "Is ip v4 address: " << std::boolalpha << isIPv4Address("99") << '\n';
	std::cout << "Is ip v4 address: " << std::boolalpha << isIPv4Address("100.") << '\n';
	std::cout << "Is ip v4 address: " << std::boolalpha << isIPv4Address("200") << '\n';
	std::cout << "Is ip v4 address: " << std::boolalpha << isIPv4Address("200.234.9.99") << '\n';
	std::cout << "Is ip v4 address: " << std::boolalpha << isIPv4Address("255.200.123.99") << '\n';
	std::cout << "Is ip v4 address: " << std::boolalpha << isIPv4Address("255.200.123.256") << '\n';
	return 0;
}

bool isIPv4Address(std::string inputString) {
    std::string r0_255 {"([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])"};
    std::regex ipv4address{r0_255 + "[.]"+ r0_255 + "[.]" + r0_255 + "[.]" + r0_255};
    std::smatch matches;
    if (std::regex_match(inputString, matches, ipv4address) && matches[0].matched)
        return true;
    return false;
}
