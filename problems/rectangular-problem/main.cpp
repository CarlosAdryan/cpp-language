#include <bits/stdc++.h>

using namespace std;

int main()
{

    double base, height, area, perimeter, diagonal;

    cout << "Rectangular base: ";
    cin >> base;
    cout << "Rectangular height: ";
    cin >> height;

    area = base * height;
    perimeter = 2 * (base + height);
    diagonal = sqrt(pow(base, 2.0) + pow(height, 2.0));

    cout << fixed << setprecision(4);
    cout << "AREA = " << area << endl;
    cout << "PERIMETER = " << perimeter << endl;
    cout << "DIAGONAL = " << diagonal << endl;

    return 0;
}
