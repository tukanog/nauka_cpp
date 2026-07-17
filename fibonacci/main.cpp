#include <iostream>
#include <iomanip>

using namespace std;

long double fibonacci[100000]; int n;

int main()
{
    cout << "Ile liczb Fibonacciego mam wyznaczyć?: ";
    cin >> n;

    fibonacci[0] = 1;
    fibonacci[1] = 1;

    for (int i = 2; i <= n - 1; i++) {
        fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
    }

    cout << setprecision(10000);

    //for (int i = 0; i <= n - 1; i++) {
    //    cout << "Wyraz nr " << i + 1 << ": " << fibonacci[i] << endl;
    //}

    //cout << endl << fibonacci[n - 1];

    cout << "Złota liczba: " << fibonacci[n-1] / fibonacci[n - 2];

    return 0;
}
