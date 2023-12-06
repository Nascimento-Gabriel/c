#include <biblioteca.h>

int fatorial(int n) {
	if ((n==0)||(n==1))
		return 1;
	else
		return n*fatorial(n-1);
}

double fibonacci(int n) {
	if ((n==1)||(n==2))
		return 1;
	else
		return fibonacci(n-1)+fibonacci(n-2);
}