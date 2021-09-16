#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, N, answer, flag;
	int resourceA[10000];
	int resourceB[10000];
	pair<int, int> resourceSum[10000];
	int valueA, valueB;
	cin >> T;
	while (T > 0) {
		cin >> N;
		for (int j = 0; j < N; j++) {
			cin >> valueA >> valueB;
			resourceA[j] = valueA;
			resourceB[j] = valueB;
			resourceSum[j] = (make_pair(resourceA[j] + resourceB[j], j));
		}
		sort(&resourceSum[0], &resourceSum[N]);

		answer = 0;
		flag = 1;

		for (int j = N - 1; j >= 0; j--) {
			if (flag == 1) {
				answer += resourceA[resourceSum[j].second];
				flag = 0;
			}
			else if (flag == 0) {
				answer -= resourceB[resourceSum[j].second];
				flag = 1;
			}
		}

		cout << answer << "\n";
		T--;
	}


}