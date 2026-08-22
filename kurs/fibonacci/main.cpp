#include <iostream>
#include <iomanip>

using namespace std;

int n;

int main()
{
    cout << "Ile liczb Fibonacciego mam wyznaczyć?: ";
    cin >> n;

    long double fibonacci[n]; // long double umożliwia zapisanie ogromnych liczb, ale w zapisie z tym e

    fibonacci[0] = 1;
    fibonacci[1] = 1;

    for (int i = 2; i <= n - 1; i++) {
        fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
    }

    cout << setprecision(10000); // to pozwala na zapisanie tych liczb z long double jako normalne liczby

    for (int i = 0; i <= n - 1; i++) {
        cout << "Wyraz nr " << i + 1 << ": " << fibonacci[i] << endl;
    }


    return 0;
}
