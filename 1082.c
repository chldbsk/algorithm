#include <stdio.h>
int main() {
	int n, i;
	int flag=0;
	scanf("%X", &n);


	for (i = 1; i <= n; i++) {
		//1. 3 6 9...
		//2. 33 36 39....

		if (i < 10) {
			if (i % 3 == 0)
				flag++;
		}
		else {
			if ((i / 10) % 3 == 0)
				flag++;
			if ((i % 10) % 3 == 0)
				flag++;
		}
		
		switch (flag)
		{
			case 1:
				printf("X");
				break;
			case 2:
				printf("XX");
				break;
		default:
			printf("%d", i);
			break;
		}
		if (i < n) printf(" ");
		flag = 0;
}