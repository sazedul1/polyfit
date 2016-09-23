#include<vector>
#include<iostream>
#include "polyfit.cpp"

using namespace std;

int main(){

	vector<double> oX;
	for (int i = 0; i < 5; i++){
		int x = i;
		oX.push_back(x);
		cout << x << " ";
	}
	cout << endl;
	vector<double> oY;
	for (int i = 0; i < 5; i++){
		int y = i*i*i + 2 * i*i - i + 1;
		y = 3 *i* i + 2*i-1;
		oY.push_back(y);
		cout << y << " ";
	}
	cout << endl;
	vector<double> res;
	int nDegree = 2;
	MathAlgo mathAlgo;
	res = mathAlgo.polyfit(oX, oY, nDegree);
	for (size_t i = 0; i < res.size(); i++){
		cout << " " << res[i];
	}
	cout << endl;

	res = mathAlgo.polyval(res, oX);
	for (size_t i = 0; i < res.size(); i++){
		cout << " " << res[i];
	}
	cout << endl;

	cin >> res[0];
	return 1;

}
