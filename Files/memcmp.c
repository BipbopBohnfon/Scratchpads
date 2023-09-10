#include <stdio.h>
#include <string.h>
int main() {
	int vals1[] = {1, 2, 3, 4, 5};
	int vals2[] = {1, 2, 3, 4, 5};
	int vals3[] = {1, 3, 5, 7, 9};

	printf("%d\n%d\n%d\n", memcmp(vals1, vals2, sizeof(int) * 5), memcmp(vals3, vals2, sizeof(int) * 5), memcmp(vals1, vals3, sizeof(int) * 5));
}
