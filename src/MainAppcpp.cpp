#include <iostream>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

void printArray(const int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}



float add(float x, float y) {
	return x+y;
}


int findMax(int a , int b, int c) {
	if (a>b && a>c) {
		return a;
	}
	else if (b > c) {
		return b;
	}
	else {
		return c;
	}
}

int pow(int x, int y) {

	int r = 1;
	for (int i = 0; i < y; i++) {
		r = r * x;
		cout << r << endl;

	}
	return r;
}


// 1. Min() function for 2 TEMPLATE types
template<typename  T>  // or template<class T>
T Min(T a , T b) {
	return (a < b) ? a : b;
}

// 2. Min() function for 3 integers
 template<typename T>
T Min(T a, T b, T c) {
	return Min(Min(a, b), c);  // reuse the 2-arg Min
}

int main() {
    std::cout << "begining of the MainApp." << std::endl;


    if (true) {
		std::cout << "Active code" << std::endl;
	
		cout << "Min of (10, 5): " << Min(10, 5) << endl;
		cout << "Min of (12, 7, 9): " << Min(12, 7, 9) << endl;
		cout << "Min of (18.0f, 9.0f): " << Min(1.5f ,18.5f, 9.9f) << endl;

		//find theb pow 
		cout << pow(2, 5);
		
		// find max 
		int a = 10;
		int b = 20;
		int c = 30;
		int max = findMax(a, b, c);
		cout << "max : " << max << std::endl;
		// Example of using a function to add two numbers

		std::cout << "\nend of the MainApp." << std::endl;
	}
	else {
		std::cout << "Inactive" << std::endl;
		/*	
		string email = "mbarek@gmail.com";
		int index = email.find("@");  // Find the position of '@'

		string userName = email.substr(0, index);      // Extract part before '@'
		string domain = email.substr(index + 1);      // Extract part after '@'

		cout << "userName : " << userName << endl;     // Output: mbarek
		cout << "domain   : " << domain << endl;       // Output: gmail.com
		string str = "MADAM";
		string rev = "";

		int len = (int)str.length();
		for (int i = 0, j = len - 1; i < len;i++,j--) {
			rev[i] = str[j];
		}

		rev[len] = '\0';
		cout << "rev : " << rev << endl;
		if (str.compare(rev) == 0) {
			cout << "palindrome" << endl;
		}
		else {
			cout << "not palindrome" << endl;
		}
		
		
		//count vowels, consonants, spaces, and digits in the given string
		string str = "how      are you7 123";
		int vowels = 0, consonants = 0, digits = 0, spaces = 0;

		// Loop through each character in the string
		for (int i = 0; i < str.length(); i++) {
			char ch = str[i];

			// Check if the character is a vowel (uppercase or lowercase)
			if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
				ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
				vowels++;
			}
			// Check if the character is a space
			else if (ch == ' ') {
				spaces++;
			}
			// Check if the character is a digit
			else if (ch >= '0' && ch <= '9') {
				digits++;
			}
			// Otherwise, it must be a consonant
			else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
				consonants++;
			}
		}

		// Output the results
		cout << "Vowels: " << vowels << endl;
		cout << "Consonants: " << consonants << endl;
		cout << "Digits: " << digits << endl;
		cout << "Spaces: " << spaces << endl;


		string str = "helloWorld";
		string::iterator it;
		for (it = str.begin(); it != str.end(); ++it) {
			*it = *it - 32;
			if (*it == 'o') {
				str.erase(it);
				it--; // Decrement iterator to stay at the same position
			}	
		}
		cout << "str : " << str << endl;
		string str = "WeLcOmE7";
		string result = "";

		for (int i = 0; str[i] != '\0'; i++) {
			if (str[i] >= 'A' && str[i] <= 'Z') {
				result += (str[i] + 32);  // Convert uppercase to lowercase
			}
			else if (str[i] >= 'a' && str[i] <= 'z') {
				result += str[i];         // Keep lowercase as is
			}
		}

		cout << "str : " << result << endl;

		vector<int> v = { 10, 20, 30, 40 };

		// Declare iterator
		vector<int>::iterator it;

		// Loop using iterator
		for (it = v.begin(); it != v.end(); it++) {
			cout << *it << " ";  // Dereference to access value
		}


		string s1 = "WELCOME";
		int count = 0;

		string::iterator it;

		for (auto it = s1.begin(); it != s1.end(); ++it) {
			count++;
		}
		cout << "length is : " << count << std::endl;

		for ( it = s1.begin(); it != s1.end(); it++) {
			count++;
		}
		cout << "length is : " << count << std::endl;

		for (int i= 0;i<  s1.length(); i++) {
			count++;
		}

		for (int i = 0;  s1[i] != '\0'; i++) {
			count++;
		}

		cout << "length is : " << count << std::endl;

		string s1 = "hello";
		string s2 = "HELLO";


		transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
		transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

		if (s1.compare(s2) == 0) {
			cout << "Strings are equal (ignoring case)" << endl;
		}

		string str = "Hello";
		string str2 = "World";
		cout << "str1 : " << str.compare(str2) << endl;

		cout << "str : " << str.substr(1, 6) << endl;

		cout << "str1 : " << str.find_last_not_of(" ") << endl;
		cout << "str1 : " << str.find_last_of("m ") << endl;

		string str = "HelloWorld";
		string str2 = "World";

		int result = str.compare(5, 5, str2);



		char str1[20] = {};  // Initialize to zero (safe)

		str.copy(str1, str.length());  // Copies the characters (but no null terminator!)
		str1[str.length()] = '\0';     // Manually add null terminator

		cout << "str1 : " << str1 << endl;
		string s = "Hello";
		cout << s.capacity() <<" "<<s.length() << endl;
		cout << "Length: " << s.length() << endl;
		cout << "Is Empty: " << s.empty() << endl;
		s.append(" World");
		cout << "Appended: " << s << endl;
		cout << "Substring: " << s.substr(0, 5) << endl;
		size_t pos = s.find("World");
		if (pos != string::npos) {
			cout << "'World' found at: " << pos << endl;
		}
		s.replace(6, 5, "C++");
		cout << "After Replace: " << s << endl;
		cout << "  " << s.c_str() << endl;

		string str = " mbaretk ";
		char str1[20] = {};  // Initialize to zero (safe)

		str.copy(str1, str.length());  // Copies the characters (but no null terminator!)
		str1[str.length()] = '\0';     // Manually add null terminator

		cout << "str1 : " << str1 << endl;
		string str = "hello";

		str.replace(0,2,"ben");
		cout << "str : " << str << endl;

		str.append(" world");
		str += "!";
		cout << "str : " << str << endl;


		//string.insert(position, source_string, number_of_characters);
		str.insert(3, "  mbarek ",3 ); // Insert at the beginning
		cout << "str : " << str << endl;

		string str = "nullptr";
		str += "hello";
		str.clear();
		if (str.empty()) {
			cout << "string is empty" << endl;
		}
		else {
			cout << "string is not empty" << endl;
		}

		cout << str<< endl;
		
		
		string str;
		cout << "Enter a string: ";
		cin >> str;              // Reads until the first space

		cin.ignore();            // Clear the leftover '\n'

		getline(cin, str);       // Now reads the rest of the line
		cout << "You entered: " << str << endl;
		
		// Declare an array of size 10

	// Example of using strtok_s with a string literal
		char s1[20] = "20";
		char s2[20] = "30";

		long x = strtol(s1,NULL,10);
		float y = strtof(s2, NULL);
		cout << "x : " << x << y<< std::endl;

		char* s = new char[100] {};  // Zero-initialize to be safe
		cout << "Enter a string: ";
		cin >> s;  // Input string

		cout << "You entered: " << s << endl;

		char s1[20] = "morning";

		strncat(s, s1, 3);  // Append first 3 letters of s1 to s

		cout << "After strncat: " << s << endl;

		delete[] s;  // Always free heap memory!

		char s[100];
		std::cout << "Enter a string: ";
		//cin >> s;// Read a string from the user

		cin.get(s, 100); // Clear the newline character from the input buffer
		cout << "welcom" << s << endl;


		cin.getline(s,100);

		std::cout << "You entered: " << s << std::endl;

		char s[] = {'M','B','C','\0'};
		cout << s << endl;

		const char* sptr = "hello";

		sptr = "world"; // This is allowed because sptr is a pointer to a string literal
		//sptr[0] = 'H'; // This is not allowed because string literals are immutable


		cout << sptr << endl;

			int a = 10;
		int b = 20;

		int* p = &a;
		int*& ref = p;  // ref is a reference to the pointer p
		cout << ref << endl;


		cout << *p << endl;   // Output: 10
		ref = &b;             // changes p to point to b
		cout << *p << endl;   // Output: 20


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

