#include <iostream>
#include <string>
using namespace std;


int hasDuplicates(string s) {
	int index = -1;
	for (int i = 1; i < s.length(); i++) {
		if (s[i - 1] == s[i]) {
			index = i - 1;
			break;
		}
	}
	return index;
}

string super_reduced_string(string s) {
	int index;
	while((index = hasDuplicates(s)) != -1) {
		s.erase(index, 2);
	}
	return s;
}

int main() {
	string s;
	cin >> s;
	string result = super_reduced_string(s);
	if(result.length())
		cout << result << endl;
	else 
		cout << "Empty String" << endl;
	return 0;
}
