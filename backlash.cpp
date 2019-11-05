#include <iostream>
#include <regex>

using namespace std;
int main(int argc, char** argv)
{
	if (argc == 1) return -1;
	cout << std::regex_replace(argv[1], std::regex("\\\\"), "\\\\");
	return 0;
}
