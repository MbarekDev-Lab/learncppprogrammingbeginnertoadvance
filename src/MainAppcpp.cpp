#include <iostream>
#include <cstring>
#include <algorithm>
#include <type_traits>
#include <vector>
#include <thread>
#include <chrono>
#include <fstream>
#include "../includes/queueusingLinkedList.h"
//#include "../includes/ArraybasedQueue.h"
#include "../includes/IO.h"
#include "../includes/Headers.h"

using namespace std;
using namespace TestClasses;
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


// Template function for Min
template<typename T1, typename T2, typename T3>
auto Min1(T1 a, T2 b, T3 c) -> typename std::common_type<T1, T2, T3>::type {
	// Use std::min with a common type
	return std::min({ a, b, c });
}


// Template function for Min
template<typename T1, typename T2, typename T3>
auto Min2(T1 a, T2 b, T3 c) -> typename std::common_type<T1, T2, T3>::type {
	// Use std::min_element with an initializer list
	return *std::min_element(std::initializer_list<typename std::common_type<T1, T2, T3>::type>{a, b, c}.begin(),
		std::initializer_list<typename std::common_type<T1, T2, T3>::type>{a, b, c}.end());
}

// Template function for Min
template<typename T1, typename T2, typename T3>
auto Min(T1 a, T2 b, T3 c) -> typename std::common_type<T1, T2, T3>::type {
	// Use std::min_element with an initializer list
	return *std::min_element(
		std::initializer_list<typename std::common_type<T1, T2, T3>::type>{
		static_cast<typename std::common_type<T1, T2, T3>::type>(a),
			static_cast<typename std::common_type<T1, T2, T3>::type>(b),
			static_cast<typename std::common_type<T1, T2, T3>::type>(c)
	}.begin(),
			std::initializer_list<typename std::common_type<T1, T2, T3>::type>{
			static_cast<typename std::common_type<T1, T2, T3>::type>(a),
				static_cast<typename std::common_type<T1, T2, T3>::type>(b),
				static_cast<typename std::common_type<T1, T2, T3>::type>(c)
		}.end());
}

long long factorial(int n) {
	int rec = n - 1;
	if (n == 0 || n ==  1) {
		return 1; // Base case
	}return n * factorial(rec); // Recursive case
}

void printFactorial(int n) {
	for (int i = 1; i <= n; ++i) {
		if (n % i == 0) {  // If i is a divisor of n
			cout << i << " ";  // Print the factor followed by a space
		}
	}
	cout << endl;  // Print a newline after the list of factors
}


void checkPerfectNumber(int n) {
	int sum = 0;
	// Sum of proper divisors (excluding n itself)
	for (int i = 1; i < n; ++i) {
		if (n % i == 0) {
			sum += i;
		}
	}

	if (sum == n) {
		cout << "perfect";
	}
	else {
		cout << "not perfect";
	}
}

void primeChecker(int n) {
	int count = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			count++;
		}
	}
	if (count == 2) cout << "its a prime number " << endl;
	else cout << "its not a prim number" << endl;
}

void multiplicationTable(int n) {
	cout << "Multiplication table of " << n << ":" << endl;

	for (int i = 1; i <= 10; i++) {
		cout << n << "X" << i << " " << i * n << endl;
	}

}


void reverseNums(int n) {
	int rev = 0;
	int m = n;
	int r;
	while (n>0) {
		r = n % 10;
		rev = rev * 10 + r;
		n = n / 10;
	}
	cout << "reverse : " << rev << endl;
}

//write a loop to find reverse of a number
   //check it is a palindrome
void Palindrome(int n) {
	int rev = 0;
	int r;
	int m = n;// store the original number

	while(n > 0) {
		r = n % 10;
		rev = rev * 10 + r;
		n = n / 10;
	}
	if (rev ==m) {
		cout << "palindrome" << endl;
	}
	else {
		cout << "not palindrome" << endl;
	}
}
// Function to reverse a number
int reverseNumber(int num) {
	int rev = 0;
	while (num != 0 ) {
		rev = rev * 10 + (num % 10);
		num /= 10;
	}
	return rev;
}
void greet(const char* name = "User") {
	cout << "Hello, " << name << "!" << endl;
}
int calculate(int a, int b = 5, int c = 10) {
	return a + b + c;
}
int fun()
{
	static int x = 10;   // static means this variable keeps its value between calls
	return ++x;         // increment x and return it
}

int main() {
    std::cout << "begining of the MainApp." << std::endl;
	if (1) {
		std::cout << "Active code" << std::endl;
		

		Animal* pet = new Dog();
		pet->speak(); 

		delete pet;

		std::cout << "\nend of the MainApp." << std::endl;
	}else {
		//std::cout << "Inactive" << std::endl;
		/*
		
		IO::FileHandler fileHandler;

		// Writing to a file
		fileHandler.writeToFile("example.txt", "Hello, World!");

		// Reading from the file and displaying its content
		std::string content = fileHandler.readFromFile("example.txt");
		std::cout << "Content read from file:\n" << content << std::endl;

		// Printing file content line by line
		std::cout << "Printing file content line by line:\n";
		fileHandler.printFileContent("example.txt");

		// Appending to the file
		fileHandler.appendToFile("example.txt", "Appending some text.");

		// Displaying the updated content
		std::cout << "Updated file content:\n";
		fileHandler.printFileContent("example.txt");
		
		ifstream file("example.txt");  // Create an input file stream
		if (file.is_open()) {  // Check if the file was successfully opened
			std::cout << "File is open and associated with the stream.\n";
		}
		else {
			std::cout << "File is not open.\n";
		}

		file.close();  // Close the file
		
		ifstream file("example.txt", std::ios::binary);  // Open file in binary mode
		if (!file) {
			std::cerr << "Error opening file!" << std::endl;
			return 1;
		}
		file.seekg(-10, std::ios::end);
		char ch;
		while (file.get(ch)) {
			std::cout << ch;
		}

		file.close();
		Queue q(5);

		q.enqueue(10);
		q.enqueue(20);
		q.enqueue(30);
		q.display();

		q.dequeue();
		q.display();

		
		//Queue using linked list
		Queue q;
		q.enqueue(10);
		q.enqueue(20);
		q.enqueue(30);
		q.display();

		q.dequeue();
		q.display();

		q.dequeue();
		q.dequeue();
		q.dequeue();  // Attempt to dequeue from empty queue
		
		
		cout << fun() + fun();  // calling fun() twice and summing the results
		cout << calculate(1) << endl;          // Output: 16 (b=5, c=10)
		cout << calculate(1, 2) << endl;       // Output: 13 (c=10)
		cout << calculate(1, 2, 3) << endl;    // Output: 6

		greet("Mbarek");
		//for (int i = 0, j = 10; i < 5 || j > 5; i++, j--) {
		for (int i = 0, j = 10; i < 5 && j > 5; i++, j--) {
			cout << "i = " << i << ", j = " << j << endl;
		}
		int i = 1, j = 0;
		while (j < 10) {
			j = j + i++;
			cout << "j : " << j << endl;
		}

		using namespace std::chrono_literals;  // For "100ms" syntax
		int frame = 0;
		for (;;) {	

			std::cout << "Game Frame: " << frame << std::endl;
			std::this_thread::sleep_for(100ms);
			frame++;

			if (frame == 10) {  
				std::cout << "Reached 10 frames. Exiting loop." << std::endl;
				break;
			}
		}

		//check if the number is palindrome
		int n, num, digit, rev = 0;
		cout << "Enter a positive number: ";
		cin >> num;
		n = num;
		do
		{
			digit = num % 10;
			rev = (rev * 10) + digit;
			num = num / 10;
		} while (num != 0);
		cout << " The reverse of the number is: " << rev << endl;
		if (n == rev)
			cout << " The number is a palindrome";
		else
			cout << " The number is not a palindrome";
		int absNum = abs(num); // Get the absolute value of the number

		if (num < 0) {
			cout << "Negative number áre not supported" << endl;
			return 1;
		}
		
		cout << "the absolute number is : " << absNum << endl;
		int rev = reverseNumber(num);
		cout << "the reversed number is : " << rev << endl;
	
		if (num == rev) {
			cout << "the number is palindrome" << endl;
		}
		else {
			cout << "the number is not palindrome" << endl;
		}
		if (absNum == rev) {               
			cout << "Absolute number is a palindrome" << endl;
		}
		else {
			cout << "Absolute number is not a palindrome" << endl;
		}
		int n, r,rev=0;
		cout << "Enter a number: ";
		cin >> n;
		// Loop to print each digit of the number in reverse order
		while (n != 0) {
			r = n % 10;        // Extract the last digit
			cout << r << endl; // Print the last digit
			n = n / 10;        // Remove the last digit
			cout << n << endl; // Print the remaining number
			rev = rev *10+ r;
		}
		cout << "rev : " << rev << std::endl;

		int sum = 0, r, n=153;
		int m = n;

		while (n > 0) {
			int digits = n % 10;
			sum += digits * digits * digits;
			n = n / 10;
		}
		if (sum == m)
			cout << "armstrong";
		else
			cout << "not armstrong";

		int n , r,rev=0;
		cin >> n;
		while ( n > 0 ){
			r = n % 10;
			rev = rev * 10 + r;
			n = n / 10;
			cout << r << endl;
		}
		cout << "reverse : " << rev << endl;

		int n;
		cout << "Enter a number: ";
		cin >> n;
		multiplicationTable(n);
		checkPerfectNumber( n);
		// Print factors of the number n
		cout << "Factors of " << n << " are: ";
		for (int i = 1; i <= n; ++i) {
			if (n % i == 0) {
				cout << i << " ";  // Print factor followed by a space
			}
		} 
		cout << endl;  // To move to the next line after printing all factors
		
		// Calculate sum of first n natural numbers
		int sum = 0;
		for (int i = 1; i <= n; ++i) {
			sum = sum + i;
		}
		cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
		long long factorial = 1, num= 5;
		if (num < 0) {
			cout << "Error! Factorial of a negative number doesn't exist." << endl;
		} else {
			for (int i = 1; i <= num; i++) {
				factorial = factorial * i;
			}
			cout << "Factorial of " << num << " is: " << factorial << endl;
		}
		
		cout << "sum : " << sum << std::endl;

			// Prime Checker:
		int n, count = 0;
		cout << "Enter a number: ";
		cin >> n;
		for (int i = 1; i <= n; i++) {
			if (n % i == 0) {
				count++;
			}
		}
		if (count == 2)cout << "its a prime number " << endl;
		else cout<<"its not a prim number" <<endl;

		int row = 5;
		for (int i = 0; i < row ; ++i) {
			for (int j = 0; j < row-i-1; ++j) {
				cout << "  ";
			}

			for (int k = 0; k <= i ; k++) {
				cout << "* ";
			}
			cout << endl;
		}

		int rows = 5;
		for (int i = 0; i < rows; ++i) {
			for (int j = 0; j < rows - i; ++j) {
				cout <<"  ";
			}

			for (int k = 0; k <= i; ++k) {
				cout <<"* ";
			}
			cout << i <<" " << endl;
		}

		cout << "  " << endl;
		for (int i = 0; i < rows; ++i) {
			for (int j = 0; j < i; ++j) {
				//cout << "  ";
			}
			for (int k = 0; k < rows - i; ++k) {
				cout << "* ";
			}
			cout << endl;
		}

		int A[] = { 4,6,27,15,31,22,30,29,8,16 };
		int max = A[0];

		int n = sizeof(A);  // 	Total bytes occupied by array
		cout << "size of A : " << n << endl;
		
		int size = sizeof(A[0]); // Size of one int element
		cout << "size of A[0] : " << size << endl;	

		int arrSize = n / size; //Number of elements in the array

		for (int i = 0; i < arrSize; i++) {
			if (A[i]> max) {
				max = A[i];
			}
		}

		cout << max << endl;
		int x = 10, y;
		y = ++x;   // Pre-increment
		cout << y; // Output: 10
		cout << x<<endl; // Output: 10

		cout << (char)97 << endl;  // Output: a

		int a = 25;
		cout << (~a); // Output: -26


		 int a,b,c;

		cout << "Enter 3 no.s" << endl;
		cin>>a>>b>>c;

		if(a>b && a>c)
		{
			cout<<a<<endl;
		}
		else if(b>c)
		{
			cout<<b<<endl;
		}
		else
		{
			cout<<c<<endl;
		}
		//cout << "Min of (10, 5.5, 3.5): " << Min(10, 5.5, 3.5) << endl; // Mixed types
		//cout << "Min of (12.5, 8.7, 3.2): " << Min(12.5, 8.7, 3.2) << endl; // All floats
		//cout << "Min of (20, 15.5, 10.7): " << Min(20, 15.5, 10.7) << endl; // Mixed types

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
		
				cout << "Min of (10, 5): " << Min(10, 5) << endl;
		cout << "Min of (12, 7, 9): " << Min(12, 7, 9) << endl;
		cout << "Min of (18.0f, 9.0f): " << Min(1.5f ,18.5f, 9.9) << endl;

		//find theb pow
		cout << pow(2, 5);

		// find max
		int a = 10;
		int b = 20;
		int c = 30;
		int max = findMax(a, b, c);
		cout << "max : " << max << std::endl;
		// Example of using a function to add two numbers

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

