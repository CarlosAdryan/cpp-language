#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "First value: ";
    cin >> a;
    cout << "Second value: ";
    cin >> b;
    cout << "Third value: ";
    cin >> c;

    if (a < b && a < c) {
        cout << "MINOR = " << a << endl;
    } else if (b < a && b < c) {
        cout << "MINOR = " << b << endl;
    } else {
        cout << "MINOR = " << c << endl;
    }


    return 0;
}
