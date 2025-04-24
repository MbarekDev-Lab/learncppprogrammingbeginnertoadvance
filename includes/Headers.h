#pragma once
#include <iostream>
using namespace std;


namespace TestClasses{
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


  //  runtime polymorphism.
    class Animal {
    public:
        virtual void speak() {
            cout << "Animal speaks" << endl;
        }
    };

    class Dog : public Animal {
    public:
        void speak() override {
            cout << "Dog barks 🐶" << endl;
        }
    };






}