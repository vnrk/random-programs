//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//string uglyOrBeautiful(vector <int> a) {
//	// Complete this function
//	int *count = (int*)malloc(sizeof(int) * a.size());
//	//memset(count, 0, a.size());
//	fill(count, count + a.size(), 0);
//	int sflag = 0, cflag = 0;
//	int i;
//	for (i = 1; i < a.size(); i++) {
//		if (a[i - 1] > a[i]) {
//			sflag = 1;
//		}
//		if (a[i] > a.size() || count[i-1] == 1) {
//			cflag = 1;
//			break;
//		}
//		else 
//			count[i-1]++;
//	}
//	count[i - 1]++;
//	for (int i = 0; i < a.size(); i++) {
//		if (count[i] != 1)
//			cflag = 1;
//	}
//
//	if (sflag == 1 && cflag == 0)
//		return "Beautiful";
//	else
//		return "Ugly";
//}
//
//int main() {
//	int q;
//	cin >> q;
//	for (int a0 = 0; a0 < q; a0++) {
//		int n;
//		cin >> n;
//		vector<int> a(n);
//		for (int a_i = 0; a_i < n; a_i++) {
//			cin >> a[a_i];
//		}
//		string result = uglyOrBeautiful(a);
//		cout << result << endl;
//	}
//	return 0;
//}
