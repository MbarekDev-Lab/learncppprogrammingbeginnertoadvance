#include <iostream>

using namespace std;



int main() {
    std::cout << "begining of the MainApp." << std::endl;

    std::cout << " Pointer : " << std::endl;
    int a = 10;
    int* p = &a;

	cout << "a  : " << a << std::endl;
	cout << "&a : " << &a<< std::endl;
	cout << "p  : " << p << std::endl;
	cout << "&p : " << &p << std::endl;
	cout << "*p : " << *p << std::endl;






    std::cout << "end of the MainApp." << std::endl;
    return 0;
}