#include <iostream>
using namespace std;

int main() {
    float min, km, d;
    cout << "Enter the time in minutes spent during the trip: ";
    cin >> min;
    km = 50;
    d = (min / 60) * km;
    cout << "Distance the car has traveled is " << d << " km/h" << endl;
    return 0;
}