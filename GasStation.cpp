#include "GasStation.hpp"

double GasStations::tripCost(vector <int> d, vector <int> p, int mpg, int sz, int m) {
	n = d.size();
	for (int i = 0; i < n; i++) {
		t[i].p = p[i]; t[i].d = d[i];
	}
	t[n].p = inf, t[n].d = 0, n++;
	t[n].p = 0, t[n].d = m, n++;
	sort(t, t + n);
	double ans = 0;
	int now = mpg * sz;
	for (int i = 0; i < n - 1;) {
		int found = 0;
		for (int j = i + 1; !found && j < n; j++) {
			if (t[j].d - t[i].d > mpg * sz) break;
			if (t[j].p < t[i].p) found = j;
		}
		if (found) {
			if (t[found].d - t[i].d > now) {
				ans += (t[found].d - t[i].d - now) * 1.0 / mpg * t[i].p;
				now = 0;
			}
			else {
				now -= (t[found].d - t[i].d);
			}
			i = found;
		}
		else {
			ans += (mpg * sz - now) * 1.0 / mpg * t[i].p;
			now = mpg * sz - (t[i + 1].d - t[i].d);
			i++;
		}
	}
	return ans;
}