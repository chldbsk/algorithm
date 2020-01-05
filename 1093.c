#include <stdio.h>
int main() {

	int a[23] = { 0 };
	int n, i, atd;

	scanf("%d", &n);
	//출석 부를 횟수
	for (i = 1; i <= n; i++) {
		scanf("%d", &atd);

		a[atd - 1]++;
	}

	for (i = 0; i < 23; i++)
		printf("%d ", a[i]);
}