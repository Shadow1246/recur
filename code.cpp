#include<iostream>
#include<string>
using namespace std;
bool isPalindrome (string s)
{
string str2;
		if (str2 == s)	
		return true;

	else
		return isPalindrome (s);

	}



int main ()
{
	std::string str=" The letter is s my guy";

	std::string str2 = str.substr(12,1);
	std:: cout << str2;
	return 0;
}


