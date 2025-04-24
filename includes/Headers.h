#pragma once
#include <iostream>
using namespace std;


namespace TestClasses{

#include <iostream>
    using namespace std;

    class Base {
    public:
        Base() {
            cout << "Base constructor" << endl;
        }
    };

    class Derived : public Base {
    public:
        Derived() {
            cout << "Derived constructor" << endl;
        }

        // Friend function to overload <<
        friend ostream& operator<<(ostream& os, const Derived& d) {
            os << "Derived object printed";
            return os;
        }
    };



    class A {
    public:
        int value = 10;
    };

    class B : virtual public A {};
    class C : virtual public A {};

    class D : public B, public C {
        // Only one shared A instance
    };


    class Animal {
    public:
        void eat() {
            cout << "Eating..." << endl;
        }
    };

    class Dog : public Animal {
    public:
        void bark() {
            cout << "Barking..." << endl;
        }
    };

    class Cat : public Animal {
    public:
        void meow() {
            cout << "Meowing..." << endl;
        }
    };




}