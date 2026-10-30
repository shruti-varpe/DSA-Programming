#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex() {
        real = 0;
        imag = 0;
    }

    Complex(float r, float i) {
        real = r;
        imag = i;
    }

    ~Complex() {}

    void display() {
        cout << real << "+" << imag << "i" << endl;
    }

    Complex operator+(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator-(Complex c) {
        return Complex(real - c.real, imag - c.imag);
    }

    Complex operator*(Complex c) {
        float r = real * c.real - imag * c.imag;
        float i = real * c.imag + imag * c.real;
        return Complex(r, i);
    }
};

int main() {
    Complex c1(4, 5), c2(2, 3);

    cout << "\nfirst complex number :";
    c1.display();
    cout << "\nsecond complex number:";
    c2.display();

    Complex sum = c1 + c2;
    cout << "\nsum :";
    sum.display();

    Complex diff = c1 - c2;
    cout << "difference :";
    diff.display();

    Complex prod = c1 * c2;
    cout << "product:";
    prod.display();

    return 0;
}

/*

d:\DSA Programming>g++ 1Complex.cpp -o 1output

d:\DSA Programming>.\1output

first complex number :4+5i

second complex number:2+3i

sum :6+8i
difference :2+2i
product:-7+22i
*/