#include <iostream>

using namespace std;

int main()
{
    int x, y, exchange, sum;

    cout << "Enter two numbers: " << endl;
    cin >> x >> y;

    if (x > y) {
        exchange = x;
        x = y;
        y = exchange;
    }

    sum = 0;
    for (int i = x+1; i < y; i++) {
        if (i % 2 != 0) {
            sum = sum + i;
        }
    }

    cout << "SUM OF THE ODD = " << sum << endl;

    return 0;
}
