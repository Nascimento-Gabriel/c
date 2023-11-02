#include <stdio.h>

int main() {
	long double a, b, c;
	int n, i;

	a = 1;
	b = 1;
	scanf("%d", &n);

	//printf("%Lf\n%Lf\n", a, b);
	for (i=2; i<n; i++) {
		printf("%.0Lf\n%.0Lf\n", a, b);
		c = a+b;
		printf("%d: %0.Lf\n", i, c);
		a = b;
		b = c;
	}
	//printf("%d: %0.Lf\n", i, c);
	return 0;
}