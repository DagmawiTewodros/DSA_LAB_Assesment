
#include <iostream>
using namespace std;

namespace math
{
    int square(int x) { return x * x; }
}

namespace physics
{
    const double gravity = 9.81;
    double force(double mass) { return mass * gravity; }
}

int main() {
    cout << "Square of 4: " << math::square(4) << '\n';
    cout << "Force for 10 kg mass: " << physics::force(10) << '\n';
    cout << "Gravity constant: " << physics::gravity << '\n';
    return 0;
}