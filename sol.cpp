#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string p;
		cin >> p;
		int store = INT_MIN;
		int cnt = 0;
		int res = 0;
		for (int i = 0; i < (int) p.size(); i++) {
			if (p[i] == '.') {
				// count the number of '.'
				cnt++;
			} else {
				if (cnt > store && cnt > 0) {
					// if it encounters a '#', check if the current count of '.'
					// is STRICTLY greater than what we have stored. If yes, then
					// we need to store this new value, and increment 'res' because
					// it means that we need to practice again for 1 day
					store = cnt;
					res++;
				}
				// reset 'cnt' to 0
				cnt = 0;
			}
		}
		cout << res << '\n';
	}
	return 0;
}
