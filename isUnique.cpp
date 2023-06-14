#include <cstring>
#include <iostream>
using namespace std;

const int MAX_CHAR = 256;

bool uniqueCharacters(string str)
{

	// If length is greater than 265,
	// some characters must have been repeated
	if (str.length() > MAX_CHAR)
		return false;

	bool chars[MAX_CHAR] = { 0 };
	for (int i = 0; i < str.length(); i++) {
		if (chars[int(str[i])] == true)
			return false;

		chars[int(str[i])] = true;
	}
	return true;
}

// driver code
int main()
{
	string str = "GeeksforGeeks";

	if (uniqueCharacters(str)) {
		cout << "The String " << str
			<< " has all unique characters\n";
	}
	else {

		cout << "The String " << str
			<< " has duplicate characters\n";
	}
	return 0;
}

