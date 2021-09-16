#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, N, M, kj, words;
	queue<string> w;
	string sen, sentemp;
	vector<vector<string>> sjk;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> N >> M;
		sjk.resize(N);
		bool ok = true;
		cin.ignore();


		for (int j = 0; j < M; j++) {
			cin >> sen;
			w.push(sen);
		}

		for (int j = 0; j < N; j++) {
			cin >> kj;
			for (int k = 0; k < kj; k++) {
				cin >> sentemp;
				sjk[j].push_back(sentemp);
			}
		}

		for (int j = 0; j < M; j++) {
			for (int k = 0; k < N; k++) {
				if (sjk[k].front() == w.front()) {
					w.pop();
					sjk[k].erase(sjk[k].begin());
					break;
				}
				if (k == N - 1) {
					ok = false;
				}
			}
			if (ok == false) {
				break;
			}
		}

		if (ok == true) {
			cout << 1 << "\n";
		}
		else {
			cout << 0 << "\n";
		}

		while (!w.empty()) {
			w.pop();
		}
		sjk.clear();
	}

}
