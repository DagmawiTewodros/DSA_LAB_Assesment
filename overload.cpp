#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

double add(double a, double b) {
    return a + b;
}

double add(double a, double b, double c) {
    return a + b + c;
}

int main() {
    cout << "Sum of 5 and 4 (int): " << add(2, 3) << endl;
    cout << "Sum of 2, 3, and 4 (int): " << add(2, 3, 4) << endl;
    cout << "Sum of 2.34 and 3.533 (double): " << add(2.5, 3.5) << endl;
    cout << "Sum of 2.34, 3.533, and 4.51 (double): " << add(2.34 , 3.533 , 4.51) << endl;

    return 0;
}