#include <stdio.h>
int add(int a, int b) {
	int temp;
	temp = a + b;
	return temp;
}
int main() {
	int c, d, e, f;
	scanf("%d %d %d %d", &c, &d, &e, &f);	
	printf("%d\n",add(c,d));
	printf("%d",add(e,f));
	return 0;
}
