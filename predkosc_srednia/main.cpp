#include <iostream>

using namespace std;

int ile, n = 0;

int main()
{
    cin >> ile;
    if (ile < 0 || ile > 1000)
        return 0;

    int predkosci[ile * 2];
    int srednie[ile];

    for (int i = 0; i < (ile * 2); i+=2) {
        cin >> predkosci[ile] >> predkosci[ile + 1];
        if (predkosci[ile] < 0 || predkosci[ile + 1] < 0 || predkosci[ile] > 10000 || predkosci[ile + 1] > 10000)
            return 0;
        srednie[n] = (2 * predkosci[ile] * predkosci[ile + 1]) / (predkosci[ile] + predkosci[ile + 1]);
        n++;
    }

    for (int i = 0; i < ile; i++) {
        cout << srednie[i] << endl;
    }

    return 0;
}
