#include "GasStation.hpp"


int main() {
	GasStations gasStations;

	//Primjer 1
	vector<int> dist0 = { 100, 100 };
	vector<int> prices0 = { 1000, 1500 };
	int mpg0 = 20, tankSize0 = 10, tripLength0 = 300;
	cout << "Example 0: " << gasStations.tripCost(dist0, prices0, mpg0, tankSize0, tripLength0) << endl;

	//Primjer 2
	vector<int> dist1 = { 300, 450, 525 };
	vector<int> prices1 = { 1659, 1529, 1439 };
	int mpg1 = 20, tankSize1 = 20, tripLength1 = 600;
	cout << "Example 1: " << gasStations.tripCost(dist1, prices1, mpg1, tankSize1, tripLength1) << endl;

	//Primjer 3
	vector<int> dist2 = { 300, 450, 525 };
	vector<int> prices2 = { 1659, 1439, 1529 };
	int mpg2 = 20, tankSize2 = 20, tripLength2 = 600;
	cout << "Example 2: " << gasStations.tripCost(dist2, prices2, mpg2, tankSize2, tripLength2) << endl;

	//Primjer 4
	vector<int> dist3 = { 300, 125, 450, 525 };
	vector<int> prices3 = { 1659, 1729, 1439, 1529 };
	int mpg3 = 20, tankSize3 = 20, tripLength3 = 600;
	cout << "Example 3: " << gasStations.tripCost(dist3, prices3, mpg3, tankSize3, tripLength3) << endl;

	//Primjer 5
	vector<int> dist4 = { 200 };
	vector<int> prices4 = { 1000 };
	int mpg4 = 20, tankSize4 = 20, tripLength4 = 400;
	cout << "Example 4: " << gasStations.tripCost(dist4, prices4, mpg4, tankSize4, tripLength4) << endl;

	//Primjer 6
	vector<int> dist5 = { 100, 400 };
	vector<int> prices5 = { 1549, 1649 };
	int mpg5 = 25, tankSize5 = 16, tripLength5 = 600;
	cout << "Example 5: " << gasStations.tripCost(dist5, prices5, mpg5, tankSize5, tripLength5) << endl;

	return 0;
}