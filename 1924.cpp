#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main(){
	int x, y, temp;
	x = y = temp = 0;
	int array[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	string date[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	scanf_s("%d %d", &x, &y);
	
	for (int i = 1; i < x; i++) {
		temp += array[i - 1];
	}
	temp += y;

	cout << date[temp % 7] << endl;
	return 0;
}