#include <iostream>
#include <string>
#include <queue>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, N, M, K, answer;
	string S;
	string sentence[2001];
	queue<string> word[21];

	cin >> T;
	while (T > 0) {
		cin >> N >> M;

		for (int i = 1; i <= M; i++) {
			cin >> sentence[i];
		}
		for (int i = 1; i <= N; i++) {
			cin >> K;
			for (int j = 1; j <= K; j++) {
				cin >> S;
				word[i].push(S);
			}
		}

		for (int i = 1; i <= M; i++) {
			answer = 0;
			for (int j = 1; j <= N; j++) {
				if (sentence[i] == word[j].front()) {
					word[j].pop();
					answer = 1;
					break;
				}
			}
			if (answer == 0) {
				break;
			}
		}
		cout << answer << "\n";

		for (int i = 1; i <= 20; i++) {
			while (!word[i].empty()) {
				word[i].pop();
			}
		}
		T--;
	}
}