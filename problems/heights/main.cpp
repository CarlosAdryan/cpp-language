#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, cont;
    double sum, average, percentage;

    cout << "How many people will be typed? ";
    cin >> N;

    string name[N];
    int ages[N];
    double heights[N];

    for (int i=0; i < N; i++) {
        cout << "Data from the " << i + 1 << "st person:" << endl;
        cout << "Name: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, name[i]);
        cout << "Age: ";
        cin >> ages[i];
        cout << "Height: ";
        cin >> heights[i];
    }

        for (int i=0; i < N; i++) {
            sum = sum + heights[i];
        }
        average = sum / N;

        cout << fixed << setprecision(2);
        cout << endl << "Average height: " << average << endl;

        cont = 0;
        for (int i=0; i < N; i++) {
            if (ages[i] < 16) {
                cont++;
            }
        }
        percentage = (double)cont * 100.0 / N;

        cout << fixed << setprecision(1);
        cout << "People under 16 years: " << percentage << "%" << endl;

        for (int i=0; i < N; i++) {
            if (ages[i] < 16) {
                cout << name[i] << endl;
            }
        }
    return 0;
}
