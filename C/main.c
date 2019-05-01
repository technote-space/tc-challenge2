#include<stdio.h>

int main() {
	for (int i = 1; i <= 150; i++) printf(0 == i % 3 || 3 == i % 10 ? "%d!\n" : "%d\n", i);
}
