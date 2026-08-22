#include <iostream>

using namespace std;

int main() 
{
    int t, suma = 0;
    cin >> t;

    int n;

    for (int i = 0; i < t; i++)
    {
        cin >> n;

        for (int j = 0; j < n; j++)
        {
            int liczba;
            cin >> liczba;
            suma += liczba;
        }
        cout << suma << endl;
        suma = 0;
    }

    return 0;
}