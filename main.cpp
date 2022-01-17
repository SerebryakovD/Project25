#include<iostream>
#include<string>

using namespace std;

string getShorName(string name) {
	string ret;
	ret += toupper(name[0]);
	ret += '.';

	for (int i = 1; i < name.length(); ++i) {
		if (name[i] == ' ') {
			ret += toupper(name[i + 1]);
		}
	}

	reverse(name.begin(), name.end());
	ret += '.';

	return ret;
}

string reverseString(string str)
{
	string newStr;
	for (int i = 0; i < str.size(); i++) {
		newStr += str[str.size() - i - 1];
	}

	return newStr;

	reverse(str.begin(), str.end());

	return str;
}

//// https://www.codewars.com/kata/57eae65a4321032ce000002d/train/cpp
//std::string fakeBin(std::string str) {
//	for (int i = 0; i < str.size(); i++) {
//		if (str[i] > '4') {
//			str[i] = '1';
//		}
//		else {
//			str[i] = '0';
//		}
//	}

//	return str;
//}

int main() {
	char letter[] = "hello";

	cout << letter << endl;

	string s0;
	string s1 = "good bye";
	string s2("hello again");
	string s3 = s1;
	string s4(10, 'g');

	cout << s0 << endl;
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 + " " + s1 << endl;

	string arr[3] = { "abc", "bca", "cab" };

	string s5 = "5";
	string s6 = "6";
	bool equals = s5 > s6;

	cout << equals << endl;

	for (int i = 0; i < s5.size(); i++) {
		cout << "s5[" << i << "] = " << s5[i] << endl;
	}

	cout << reverseString("Sam Harris");

	return 0;
}