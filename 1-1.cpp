#include <iostream>
#include <string>
#include <vector>
using namespace std;


void zigzag(string sen, int s) {

	if (s == 1) {
		cout << sen;
		return;
	}

	int len = sen.length();

	vector<string> c(s);

	int row = 0;
	bool godown;
	bool change = false;
	for (int i = 0; i < len; i++) {
		c[row].push_back(sen[i]);
		if (row == s - 1) {
			godown = false;
		}
		else if (row == 0) {
			godown = true;

		}

		if (godown == true) {
			if (i == 0) {
				row++;
				continue;
			}

			if ((i % s == s - 1) && ((i / s) % 2 == 1)) {
				continue;
			}
			row++;
		}
		else {
			if ((i % s == s - 1) && ((i / s) % 2 == 0)) {
				continue;
			}
			row--;
		}

	}

	for (int i = 0; i < s; i++) {
		cout << c[i];
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string sen;
	vector <char> temp;
	int n;
	int s;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> sen;
		cin >> s;

		zigzag(sen, s);
		cout << "\n";
	}
}