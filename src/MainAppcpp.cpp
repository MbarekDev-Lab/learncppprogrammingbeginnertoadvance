#include <iostream>

using namespace std;



int main() {
    std::cout << "begining of the MainApp." << std::endl;


	if (true) {
		std::cout << "Active code" << std::endl;

		// Declare an array of size 10
		int size;
		cout << "Enter the size of the array: ";
		cin >> size;

		if (size <= 0) {
			cout << "Invalid size. Exiting program." << endl;
			int Arr[size]; // Declare an array of the specified size
			return 1; // Exit with an error code
		}
		

		int* p = new int[size]; // Dynamically allocate an array of the specified size
		
		// Clean up the allocated memory
		delete[] p;
		p = new int[40];

	}
	else {
		std::cout << "Inactive" << std::endl;

		int* p = new int[10];// Dynamically allocate an array of size 10

		p[20] = 10;

		p[0] = 12;
		p[1] = 13;

		cout << "p[0] : " << p[0] << std::endl;
		cout << "p[1] : " << p[1] << std::endl;

		// Clean up the allocated memory
		delete[] p;
		p = nullptr;


		std::cout << " Pointer : " << std::endl;
		int a = 10;
		int* p = &a;

		cout << "a  : " << a << std::endl;
		cout << "&a : " << &a << std::endl;
		cout << "p  : " << p << std::endl;
		cout << "&p : " << &p << std::endl;
		cout << "*p : " << *p << std::endl;
	}

  

    std::cout << "end of the MainApp." << std::endl;
    return 0;
}

