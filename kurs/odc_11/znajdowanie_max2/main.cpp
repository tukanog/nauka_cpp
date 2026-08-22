// sposób z kursu

#include <iostream>

using namespace std;

int a, b, c, m;

int main()
{
    cout << "Podaj trzy liczby rozdzielone spacjami: ";
    cin >> a >> b >> c;

    m = a;
    if (b > m) m = b;
    if (c > m) m = c;

    cout << "Największa liczba to " << m;

    return 0;
}
