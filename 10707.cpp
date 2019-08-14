#include <iostream>

using namespace std;

int main() {
	int xPay, yNormal, yUplimit, yAddpay, JOI;
	int selX, selY;
	cin >> xPay >> yNormal >> yUplimit >> yAddpay >> JOI;
	selX = JOI * xPay;

	if (JOI < yUplimit)
		selY = yNormal;
	else {
		selY = yNormal + (JOI - yUplimit)*yAddpay;
	}

	cout << ((selX > selY) ? selY : selX) << endl;

	return 0;
}