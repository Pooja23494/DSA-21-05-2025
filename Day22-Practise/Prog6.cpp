// Create a class Complex with real and imaginary parts. Implement a method to add two complex numbers.

#include<iostream>
using namespace std;


class Complex {
public:
    double real, imaginary;

    Complex(double r, double i) : real(r), imaginary(i) {}

    Complex add(const Complex& other) {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    void display() const {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {

    Complex c1(2, 3);
    Complex c2(4, -5);

    Complex c3 = c1.add(c2);

    cout << "c1: ";
    c1.display();
    cout << "c2: ";
    c2.display();
    cout << "c1 + c2: ";
    c3.display();

    return 0;
}