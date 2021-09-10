#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int minval = 1001;
int maxval = 0;

void maxmin(vector<int> num, int size) {

}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	int N;
	int q;
	int temp;
	int size = 0;

	vector<int> num;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N;
		for (int j = 0; j < N; j++) {
			cin >> q;
			if (q == 1) {
				cin >> temp;
				num.push_back(temp);

			}
			if (q == 2) {
				if (size == 0) {
					continue;
				}
				else {
					num.pop_back();
					size--;
				}
			}

		}

		num.clear();
		size = 0;
	}
}