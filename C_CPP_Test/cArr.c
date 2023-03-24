#include <stdio.h>

#include <iostream>

int main() {
	int* ints; 
	ints = (int*) malloc(3 * sizeof(int));
	ints[0] = 1;
	ints[1] = 2;
	ints[2] = 3;
	
	printf("aaa");

	int ints2[] = {4, 5, 6};
	
	printf("AAA");

	printf(" aa ");

	std::cout << ints[0] << " " << ints[1] << " " << ints[2] << " " <<  ints2[0] << " " <<  ints2[1] << " " <<  ints2[2];
	

	
	return 0;
}
