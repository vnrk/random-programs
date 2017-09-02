//#include <iostream>
//#include <map>
//#include <string>
//#include <algorithm>
//using namespace std;
//#define ASCII_SIZE 1000
//using namespace std;
//
//
//string subsequenceAgain(string s, int k) {
//	string result;
//	int count[ASCII_SIZE] = { 0 };
//	for (int i = 0; i<s.size(); i++)
//		count[s[i]]++;
//
//	for (int i = 0; i < s.size(); i++) {
//		if (count[s[i]] >= k) {
//			result += s[i];
//		}
//	}
//
//	return result;
//}
//
//int main() {
//	string s;
//	cin >> s;
//	int k;
//	cin >> k;
//	string result = subsequenceAgain(s, k);
//	cout << result << endl;
//	return 0;
//}
