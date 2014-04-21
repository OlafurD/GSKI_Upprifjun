#include <iostream>
#include <string>

using namespace std;

void reverse(string& s, int start, int end)
{
	if(start >= end) // base case
		return;

	char tmp = s[start];
	s[start] = s[end];
	s[end] = tmp;	
	reverse(s, ++start, --end);
}

bool isPalindrome(string& s, int start, int end)
{
	if(start >= end) // base case
		return true;

	if(s[start] == s[end]) // recursive case
		return isPalindrome(s, ++start, --end);

	else
		return false;
}



int main()
{
	string s = "abcde";
	reverse(s, 0, s.length() - 1);
	cout << s << endl;

	s = "racecar";
	if(isPalindrome(s, 0, s.length() - 1))
		cout << "s is palindrome" << endl;

	else
		cout << "s is not palindrome" << endl;

	return 0;
}