#include <iostream>
using namespace std;

struct Point {
    float x;
    float y;
};

template <class T>
T sum(T a, T b) {
    T result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    return result;
}

int main() {
    Point a1 = {22.3, 44.47};
    Point a2 = {53.1, 15.8};
    Point a3 = sum<Point>(a1, a2);

    cout << "Sum of points: (" << a3.x << ", " << a3.y << ")\n";

    return 0;
}
