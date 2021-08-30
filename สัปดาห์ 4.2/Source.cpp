#include<stdio.h>
int main() {
	int a, b, c, d;
	int e = 0;
	int f = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	if (a < b && a < c)
		d = a;
	if (a < b && a > c)
		d = a;
	if (a < c && a > b)
		d = a;
	if (b < c)
		e = b;
	if (c < b)
		e = c;

	f = d + e;
	printf("%d", f);
	return 0;
}