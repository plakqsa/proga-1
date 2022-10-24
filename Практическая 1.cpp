#include <iostream>
using namespace std;
int task1();
int task2();
int task3();
int task4();

int main() {
    setlocale(0, "");
    task1();
    task2();
    task3();
    task4();
    return 0;
}
int task1() {
    cout << "int: " << sizeof(int) << endl << "short int: " << sizeof(short int) << endl << "long int: " << sizeof(long int) << endl << "float: " <<
        sizeof(float) << endl << "double: " << sizeof(double) << endl << "long double: " << sizeof(long double) << endl << "char: " << sizeof(char) << endl << "bool: " <<
        sizeof(bool) << endl << endl;
    return 0;

}

int task2() {
    int x;
    cout << "Введите целое число для представления в двоичной системе счисления: ";
    cin >> x;
    int m = 1;
    m <<= 31;
    for (int i = 0; i < 32; i++) {
        cout << ((x & m) ? 1 : 0);
        x <<= 1;
        if (i == 0) {
            cout << " ";
        }
    }
    cout << endl << endl;
    return 0;
}
int task3() {
    union {
        float xfloat;
        int x3;
    };

    cout << "Введите число типа float для представления в двоичной системе счисления: ";
    cin >> xfloat;
    int m = 1;
    m <<= 31;
    for (int i = 0; i < 32; i++) {
        cout << ((x3 & m) ? 1 : 0);
        x3 <<= 1;
        if (i == 0) {
            cout << " ";
        }
        if (i == 8) {
            cout << " ";
        }
    }
    cout << endl << endl;
    return 0;
}
int task4() {
    union {
        int x4[2];
        double xdouble;
    };
    cout << "Введите число типа double для представления в двоичной системе счисления: ";
    cin >> xdouble;
    int m = 1;
    m <<= 31;
    for (int i = 0; i < 32; i++) {
        cout << ((x4[1] & m) ? 1 : 0);
        x4[1] <<= 1;
        if (i == 0) {
            cout << " ";
        }
        if (i == 11) {
            cout << " ";
        }
    }
    for (int i = 0; i < 32; i++) {
        cout << ((x4[0] & m) ? 1 : 0);
        x4[0] <<= 1;
    }
    cout << endl;
    return 0;
}