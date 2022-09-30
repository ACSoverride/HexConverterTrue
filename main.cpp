#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main() {
	int input1;
	int dividend;
	bool looper = true;
	string remain = "";
	cout << "please enter a number to convert to hexadecimal";
	cin >> input1;
	dividend = input1;
	while (looper){
		if (dividend%16 == 10){
			remain = remain.append("A");
		}
		else if (dividend%16 == 11){
			remain = remain.append("B");

		}
		else if (dividend%16 == 12){
			remain = remain.append("C");

		}
		else if (dividend%16 == 13){
			remain = remain.append("D");

		}
		else if (dividend%16 == 14){
			remain = remain.append("E");

		}
		else if (dividend%16 == 15){
			remain = remain.append("F");

		}
		else{
			remain = remain.append(to_string(dividend%16));
		}
		dividend = dividend/16;
		if (dividend%16 == 0){
			looper = false;
		}
	}
	for (int i = remain.length() - 1; i >= 0; i--){
		cout << remain[i];
	}
	return 0;
}
