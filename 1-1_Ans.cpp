#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main() {
	int t, k;
	string S;

	cin >> t;
	while (t > 0) {
		cin >> S;
		cin >> k;

		int len = S.length();
		for (int i = 0; i <= k - 1; i++) {
			for (int j = 0; j < len; j += 2 * k) {
				if (j + i >= len) {
					break;
				}
				cout << S[i + j];
				if (j + 2 * k - i - 1 >= len) {
					break;
				}
				cout << S[j + 2 * k - i - 1];
			}
		}
		cout << "\n";
		t--;
	}
}