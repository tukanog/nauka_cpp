#include <iostream>
#include <time.h>

using namespace std;

int f(int n)
{
    if (n == 0) return 3;
    else return f(n - 1) + 2;
}

long int potegar(int p, int w)
{
    if (w == 0) return 1;
    else return p*potegar(p, w - 1);
}

long int potegaf(int p, int w)
{
    int wynik = 1;
    for (int i = 0; i < w; i++) {
        wynik *= p;
    }
    return wynik;
}

long int fibonacci(int n)
{
    if (n == 1 || n == 2) return 1;
    else return fibonacci(n - 1) + fibonacci(n - 2);
}

long int silnia(int n)
{
    if (n == 0 || n == 1) return 1;
    else return n * silnia(n - 1);
}

clock_t start, stop;
double czas;

int main()
{
    cout << f(3) << endl << endl;

    start = clock();
    cout << potegar(3, 4) << endl;
    stop = clock();
    czas = (double)(stop - start) / CLOCKS_PER_SEC;
    cout << "Czas rekurencji: " << czas << endl;

    start = clock();
    cout << potegaf(3, 4) << endl;
    stop = clock();
    czas = (double)(stop - start) / CLOCKS_PER_SEC;
    cout << "Czas pętli for: " << czas << endl << endl;

    cout << fibonacci(6) << endl;
    cout << silnia(6) << endl;

    return 0;
}
