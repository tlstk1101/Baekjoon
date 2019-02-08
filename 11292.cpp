#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int N = 0;
	int index = 0;
	int check = 0;
	float max = 0;

	string *name;
	float *tall;

	while(true){
		cin >> N;
		if (N == 0) { break; }
		
		name = new string[N]{};
		tall = new float[N] {};

		for (int i = 0; i < N; i++) {
			cin >> name[i] >> tall[i];
			if (max <= tall[i]) {
				max = tall[i];
				index = i;
			}
		}
		
		for (int i = 0; i < N; i++) {
			if (max <= tall[i]) {
				cout << name[i] << endl;
				check = 1;
			}
		}
		if (check != 1)
			cout << name[index] << endl;
	
		max = index = check = 0;
		delete[] name;
		delete[] tall;
	}
}