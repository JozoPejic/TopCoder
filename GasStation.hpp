#ifndef GASSTATION_HPP
#define GASSTATION_HPP

#include <iostream>
#include <vector>
#include <algorithm>

const int maxn = 60;
const int inf = 0x3fffffff;

using namespace std;

class GasStation {
public:
	int p, d;
	friend int operator < (const GasStation& s1, const GasStation& s2) {
		return s1.d < s2.d;
	}
};

class GasStations {
	GasStation t[maxn];
	int n;

public:
	double tripCost(vector<int>, vector<int>, int, int, int);
};


#endif