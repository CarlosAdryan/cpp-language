#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cout << "Enter two numbers: " << endl;
    cin >> x >> y;

    while (x != y) {
        if (x > y) {
            cout << "DECREASING!" << endl;
        } else {
            cout << "GROWING!" << endl;
        }
        cout << "Enter two other numbers: " << endl;
        cin >> x >> y;
    }

    return 0;
}
