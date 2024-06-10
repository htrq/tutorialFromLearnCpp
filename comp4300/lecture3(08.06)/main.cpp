#include <iostream>

int main(int argс, char * argv[])
{
	int arr[4];
	arr[0] = 1;
	arr[1] = 11;
	*(arr+2) = 111; 	// is the same as arr[2] = 111 because arrays are pointers
	std::cout << "expression \"arr + 2 shows\": " << arr+2 << '\n';	// shows that array is an address

	for (int a : arr)
		std::cout << a << '\n';

	return 0;
}
