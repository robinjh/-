#include <stdio.h>
int add(int a, int b) {
	int temp;
	temp = a + b;
	return temp;
}
int main() {
	int c, d;
	scanf("%d %d", &c, &d);
	int result;
	result = add(c, d);

	printf("%d",result);
	return 0;
}
