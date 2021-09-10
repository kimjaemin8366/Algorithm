#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

queue<string> split(string str, char delimiter) {
	queue<string> ans;
	stringstream ss(str);
	string s;
	
	while (getline(ss, s, delimiter)) {
		ans.push(s);
	}

	return ans;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, N, M, kj;
	queue<string> w;
	queue<string> temp;
	string sen, sentemp;
	vector<vector<string>> sjk;
	bool ok = true;
	cin >> T;
	
	cin >> N >> M;
	getline(cin, sen);
	sjk.resize(N);
	for (int i = 0; i < T; i++) {
		getline(cin, sen);
		w = split(sen, ' ');
		
		for (int j = 0; j < N; j++) {
			cin >> kj;
			for (int k = 0; k < kj; k++) {
				cin >> sentemp;
				sjk[j].push_back(sentemp);
			}
		}

		for (int j = 0; j < w.size(); j++) {
			for (int k = 0; k < N; k++) {
				if (sjk[k].front() == w.front()) {
					w.pop();
					continue;
				}
				if (k == N - 1) {
					ok = false;
					break;
				}
			}
		}

		if (ok == true) {
			cout << 1 << "\n";
		}
		else {
			cout << 0 << "\n";
		}
	}

}

