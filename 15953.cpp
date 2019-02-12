#include <iostream>

using namespace std;

int main() {
	int T;
	int a, b, total = 0;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> a >> b;
		total = 0;
		if (a) {
			if (a == 1)
				total += 5000000;
			else if (a <= 3)
				total += 3000000;
			else if (a <= 6)
				total += 2000000;
			else if (a <= 10)
				total += 500000;
			else if (a <= 15)
				total += 300000;
			else if (a <= 21)
				total += 100000;
		}
		if (b) {
			if (b == 1)
				total += 5120000;
			else if (b <= 3)
				total += 2560000;
			else if (b <= 7)
				total += 1280000;
			else if (b <= 15)
				total += 640000;
			else if (b <= 31)
				total += 320000;
		}
		cout << total << endl;
	}

	return 0;
}



//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//
//int main() {
//	int T;
//	int a, b, total = 0;
//	int money_2017[21] = {5000000, 
//						3000000, 3000000, 
//						2000000, 2000000, 2000000, 
//						500000, 500000, 500000, 500000,
//						300000, 300000 , 300000 , 300000 , 300000, 
//						100000, 100000,  100000,  100000,  100000,  100000};
//	int money_2018[31] = {5120000,
//						2560000 , 2560000 ,
//						1280000 ,1280000 ,1280000 ,1280000, 
//						640000 ,640000 ,640000 ,640000 ,640000 ,640000 ,640000 ,640000, 
//						320000 ,320000 ,320000 ,320000 ,320000 ,320000 ,320000 ,320000, 
//						320000 ,320000 ,320000 ,320000 ,320000 ,320000 ,320000 ,320000 };
//	scanf("%d", &T);
//
//	for (int i = 0; i < T; i++) {
//		total = 0;
//		scanf("%d %d", &a, &b);
//		if ((a <= 21 && b <= 31) && a > 0 && b > 0) {
//			total = money_2017[a - 1] + money_2018[b - 1];
//			printf("%d\n", total);
//		}
//		else {
//			if (a > 21)
//				if (b <= 31 && b > 0)
//					total += money_2018[b - 1];
//				else
//					continue;
//			else if (b > 31)
//				if (a <= 21 && a > 0)
//					total += money_2017[a - 1];
//				else
//					continue;
//		}
//	}
//
//	return 0;
//}