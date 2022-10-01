#include <iostream>
#include <cmath>
#include <vector>
//Class : CSI 140-01
// Assignment : PA x or Lab x
// Date Assigned : Date - 9/26/2022
// Due Date : Due - 10/9/2022 11:59 pm
// Description :
//A program that converts base10 numbers to base16
// Certification of Authenticity :
//I certify that this is entirely my own work, except where I have given fully documented
// references to the work of others.I understand the definition and
// consequences of plagiarism and acknowledge that the assessor of this assignment
// may, for the purpose of assessing this assignment :
// -Reproduce this assignment and provide a copy to another member of
// academic staff; and / or
// - Communicate a copy of this assignment to a plagiarism checking service
// (which may then retain a copy of this assignment on its database for
// the purpose of future plagiarism checking)
using namespace std;
int main() {
	//setting up variables for the program
	int input1;
	int dividend;
	bool looper = true;
	string remain = "";
	//asking for input
	cout << "please enter a number to convert to hexadecimal";
	cin >> input1;
	dividend = input1;
	//appending a string for each remainder and checking to see if it needs to be converted to a letter
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
	//printing the string in reverse to get the base16 number
	for (int i = remain.length() - 1; i >= 0; i--){
		cout << remain[i];
	}
	return 0;
}
