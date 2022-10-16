#include <stdio.h>
int add(int a, int b) {
	int temp;
	temp = a + b;
	return temp;
}
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int result;
	result = add(a, b);

	printf("%d",result);
	return 0;
}
