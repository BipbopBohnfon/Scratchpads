#include <iostream>

using namespace std;

int main() {
	cout << "Hello World";
	int *arr = new int[5];
	arr[0] = 1;
	arr[1] = 5;
	arr[2] = 7;
	arr[3] = 2;
	arr[4] = 12;
	cout << arr[1];
	cout << '\n' << (*arr + 1);
	return 0;
}
