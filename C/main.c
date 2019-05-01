#include<stdio.h>

int main() {
	for (int i = 1; i <= 150; i++) 0 == i % 3 || 3 == i % 10 ? printf("%d!\n", i) : printf("%d\n", i);
}
