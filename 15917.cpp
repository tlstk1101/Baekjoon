#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int Q;
	int a;

	scanf("%d", &Q);
	for (int i = 0; i < Q; i++) {
		scanf("%d", &a);
		if ((a & (a * -1)) == a)
			printf("1\n");
		else
			printf("0\n");
	}

	return 0;
}