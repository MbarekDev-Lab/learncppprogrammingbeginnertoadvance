#include <iostream>

using namespace std;



int main() {
    std::cout << "begining of the MainApp." << std::endl;


	if (true) {
		std::cout << "Active code" << std::endl;
		
		int a = 10;
		int b = 20;

		int* p = &a;
		int*& ref = p;  // ref is a reference to the pointer p

		cout << *p << endl;   // Output: 10
		ref = &b;             // changes p to point to b
		cout << *p << endl;   // Output: 20


		std::cout << "\nend of the MainApp." << std::endl;
	}
	else {
		std::cout << "Inactive" << std::endl;
		/*// Declare an array of size 10


		int A[] = { 2,4,6,8,10,12 };

		int* p = &A[3]; // Points to A[3] (value 8)

		cout << p[-2]; // Prints 6 (A[1])
		cout << p[2]; // Prints 10

		int A[] = { 2,4,6,8,10,12 };

		int* p = &A[3]; // Points to A[3] (value 8)

		cout << p[-2]; // Prints 6 (A[1])
		cout << p[2]; // Prints 10




		// reference

		int x = 10;
		int& y = x; // y is a reference to x

		cout << "x : " << x << std::endl;
		cout << "y : " << y << std::endl;

		y++; // Increment y, which also increments x and y 11
		x++; // Increment x, which also increments y x and y 12

		cout << "x : " << x << std::endl;
		cout << "y : " << y << std::endl;

		cout << "&x : " << &x << std::endl;
		cout << "&y : " << &y << std::endl;


		// arithmetic operations


		int A[5]{ 1, 2, 3, 4, 5 };
		int* start = A;
		int* end = A + 4;

		while (start < end) {
			int temp = *start;
			*start = *end;
			*end = temp;

			++start;
			--end;
		}

		cout << "Reversed array:\n";
		for (int i = 0; i < 5; ++i) {
			cout << A[i] << " ";
		}
		cout << endl;

		int A[5]{ 1, 2, 3, 4, 5 };
		int* p = A;
		cout << "p : " << p << std::endl;

		cout << "p+2 : " << p+2 << std::endl;

		cout << "p+2 : " << p-p << endl;

		cout << *(p + 2) << endl; // Prints 3

		int A[5]{ 1, 2, 3, 4, 5 };
		int* p = A;  // Points to A[0]

		cout << "Loop using pointer:\n";
		for (int i = 0; i < 5; ++i) {
			cout << *(p + i) << " ";
		}
		cout << endl;

		cout << "Pointer-style loop:\n";
		for (int* ptr = A; ptr < A + 5; ++ptr) {
			cout << *ptr << " ";
		}
		cout << endl;



		int* p = A;
		cout << *p << endl;
		p++;
		cout << *p << endl;
		p--;
		cout << *p << endl;
		
		int size;
		cout << "Enter the size of the array: ";
		cin >> size;

		if (size <= 0) {
			cout << "Invalid size. Exiting program." << endl;
			//int Arr[size]; // Declare an array of the specified size
			return 1; // Exit with an error code
		}

		int* p = new int[size]; // Dynamically allocate an array of the specified size

		// Clean up the allocated memory
		delete[] p;
		p = new int[40];

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
		
		*/
	}

  

    return 0;
}

