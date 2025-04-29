#include <iostream>

using namespace std;

int main()
{
    // Structure if-else
    int hora;

    cout << "Digite uma hora do dia: ";
    cin >> hora;

    if (hora < 12) {
        cout << "Bom dia!";
    } else {
        cout << "Boa tarde!";
    }


    //Structure while
    int x, soma;

    soma = 0;
    cout << "Digite o primeiro numero: ";
    cin >> x;

    while (x != 0) {
        soma = soma + x;
        cout << "Digite outro numero: ";
        cin >> x;
    }

    cout << "SOMA = " << soma;

    return 0;


    //Structure for
    int N, i, x, soma;

    cout << "Quantos numeros serao digitados? ";
    cin >> N;

    soma = 0;

    for (i=1; i <= N; i++) {
        cout << "Digite um numero: ";
        cin >> x;
        soma = soma + x;
    }

    cout << "SOMA = " << soma << endl;

    return 0;
}
