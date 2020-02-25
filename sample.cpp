#include <iostream>

using namespace std;

void modulo() {
    int a = 7;
    int b = 3;
    cout << "divide: " << (a / b) << "    modulo: " << (a % b) << endl;
    // divide: 2    modulo: 1

    a = 7;
    b = -3;
    cout << "divide: " << (a / b) << "    modulo: " << (a % b) << endl;
    // divide: -2    modulo: 1

    a = -7;
    b = 3;
    cout << "divide: " << (a / b) << "    modulo: " << (a % b) << endl;
    // divide: -2    modulo: -1

    a = -7;
    b = -3;
    cout << "divide: " << (a / b) << "    modulo: " << (a % b) << endl;
    // divide: 2    modulo: -1

    cout << endl;
}

void twosComplement() {
    // Eight-bit signed integers
    int8_t int0 = 0;            // 00000000
    int8_t int1 = 1;            // 00000001
    int8_t int127 = 127;        // 01111111
    int8_t intMinus128 = -128;  // 10000000
    int8_t intMinus127 = -127;  // 10000001
    int8_t intMinus1 = -1;      // 11111111

    cout << bitset<8>(int0) << endl;
    cout << bitset<8>(int1) << endl;
    cout << bitset<8>(int127) << endl;
    cout << bitset<8>(intMinus128) << endl;
    cout << bitset<8>(intMinus127) << endl;
    cout << bitset<8>(intMinus1) << endl;

    cout << endl;
}

void shiftOperator() {
    int8_t a = 33;
    int8_t b = -33;

    int8_t c = a;
    int8_t d = b;
    cout << int(c) << " : " << bitset<8>(c) << "    " << int(d) << " : " << bitset<8>(d) << endl;
    // 33 : 00100001    -33 : 11011111

    c = a << 1;
    d = b << 1;
    cout << int(c) << " : " << bitset<8>(c) << "    " << int(d) << " : " << bitset<8>(d) << endl;
    // 66 : 01000010    -66 : 10111110

    c = a >> 1;
    d = b >> 1;
    cout << int(c) << " : " << bitset<8>(c) << "    " << int(d) << " : " << bitset<8>(d) << endl;
    // 16 : 00010000    -17 : 11101111

    cout << endl;
}

void bitwiseOperation() {
    int8_t a = 12;      // 00001100
    int8_t b = 5;       // 00000101

    int8_t c = ~a;      // 11110011   bitwise NOT
    int8_t d = a & b;   // 00000100   bitwise AND
    int8_t e = a | b;   // 00001101   bitwise OR
    int8_t f = a ^ b;   // 00001001   bitwise XOR

    cout << "  "  << int(a) << " : " << bitset<8>(a) << endl;
    cout << "   " << int(b) << " : " << bitset<8>(b) << endl;

    cout << " "   << int(c) << " : " << bitset<8>(c) << endl;
    cout << "   " << int(d) << " : " << bitset<8>(d) << endl;
    cout << "  "  << int(e) << " : " << bitset<8>(e) << endl;
    cout << "   " << int(f) << " : " << bitset<8>(f) << endl;

    cout << endl;
}

void constDeclare() {
    // Tip: Read it backwards
    // Ref. https://stackoverflow.com/questions/1143262/what-is-the-difference-between-const-int-const-int-const-and-int-const

    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;

    cout << "a: " << a << "    b: " << b << "    c: " << c << "    d: " << d << endl;

    int *pointerX = &a;                 // pointer to int	
    *pointerX = -1;
    cout << "a: " << a << "    b: " << b << "    c: " << c << "    d: " << d << endl;

    pointerX = &b;
    *pointerX = -2;
    cout << "a: " << a << "    b: " << b << "    c: " << c << "    d: " << d << endl;

    int const *pointerY = &b;           // pointer to const int, equal to: const int *
    // *pointerY = -3;  // error!!
    pointerY = &c;      // OK

    int * const pointerZ = &c;          // const pointer to int
    *pointerZ = -4;     // OK
    // pointerZ = &d;   // error!!
    cout << "a: " << a << "    b: " << b << "    c: " << c << "    d: " << d << endl;

    int const * const pointerW = &d;    // const pointer to const
    // *pointerW = -5;  // error!!
    // pointerW = &a;   // error!!

    cout << endl;
}

int main() {
    modulo();
    twosComplement();
    shiftOperator();
    bitwiseOperation();
    constDeclare();

    return 0;
}
