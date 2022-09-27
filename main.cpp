#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main() {
	int input1;
	int dividend;
	bool looper;
	vector<int> remain;
	cout << "please enter a number to convert to hexadecimal";
	cin >> input1;
	dividend = input1;
	while (looper){
		remain.push_back(dividend%16);
		dividend = dividend/16;
		if (dividend/16 == 0){

		}
	}
	return 0;
}
