#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, N, valuex, valuey, pos, temp;
	cin >> T;
	vector<int> x, y;
	int xr = 0;
	int yr = 0;

	cin >> N;
	temp = N - 1;
	for (int j = 0; j < T; j++) {
		for (int i = 0; i < N; i++) {
			cin >> valuex >> valuey;

			x.push_back(valuex);
			y.push_back(valuey);
		}

		while (temp > 0) {
			pos = max_element(x.begin(), x.end()) - x.begin();
			xr += *max_element(x.begin(), x.end());
			x.erase(x.begin() + pos);
			y.erase(y.begin() + pos);
			temp--;


			if (temp == 0) {
				break;
			}

			pos = max_element(y.begin(), y.end()) - y.begin();
			yr += *max_element(y.begin(), y.end());
			x.erase(x.begin() + pos);
			y.erase(y.begin() + pos);
		}
		cout << xr - yr << "\n";

		x.clear();
		y.clear();
	}

}