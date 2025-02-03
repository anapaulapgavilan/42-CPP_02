#include "Fixed.hpp"

int main ( void ) {
    Fixed        a;
    Fixed const  b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;

    return 0;
}

/*
int main() {
    Fixed a;
    Fixed b(10);
    Fixed c(42.42f);
    Fixed d(b);

    std::cout << "Testing assignment operator:\n";
    a = Fixed(123.456f);
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "\nTesting comparison operators:\n";
    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "a < b: " << (a < b) << std::endl;
    std::cout << "a >= c: " << (a >= c) << std::endl;
    std::cout << "b <= c: " << (b <= c) << std::endl;
    std::cout << "b == d: " << (b == d) << std::endl;
    std::cout << "b != c: " << (b != c) << std::endl;

    std::cout << "\nTesting arithmetic operators:\n";
    Fixed result = a + c;
    std::cout << "a + c = " << result << std::endl;

    result = c - a;
    std::cout << "c - a = " << result << std::endl;

    result = b * c;
    std::cout << "b * c = " << result << std::endl;

    result = c / b;
    std::cout << "c / b = " << result << std::endl;

    std::cout << "\nTesting increment and decrement operators:\n";
    std::cout << "a is " << a << std::endl;
    std::cout << "++a is " << ++a << std::endl;
    std::cout << "a++ is " << a++ << std::endl;
    std::cout << "a is now " << a << std::endl;

    std::cout << "--a is " << --a << std::endl;
    std::cout << "a-- is " << a-- << std::endl;
    std::cout << "a is now " << a << std::endl;

    std::cout << "\nTesting min and max functions:\n";
    std::cout << "min(a, b) is " << Fixed::min(a, b) << std::endl;
    std::cout << "max(a, c) is " << Fixed::max(a, c) << std::endl;

    const Fixed e(3.14f);
    const Fixed f(2.71f);
    std::cout << "min(e, f) is " << Fixed::min(e, f) << " (const version)" << std::endl;
    std::cout << "max(e, f) is " << Fixed::max(e, f) << " (const version)" << std::endl;

    return 0;
}
*/
