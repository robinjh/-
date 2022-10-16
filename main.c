#include <stdio.h>
int add(int a, int b) {
	int temp;
	temp = a + b;
	return temp;
}
int main() {
	int c, d;
	scanf("%d %d", &c, &d);
	printf("%d",add(c,d));
	return 0;
}
