#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int n, liczba, k;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> liczba;
        if (liczba == 0 || liczba == 1) cout << "NIE" << endl;
        else if (liczba == 2 || liczba == 3) cout << "TAK" << endl;
        else 
        {
            k = 1;

            for (int j = 2; j <= sqrt(liczba); j++)
            {
                // cout << "j: " << j << endl;
                k++;
                // cout << "k: " << k << endl;
                if (liczba % j == 0) 
                {
                    cout << "NIE" << endl;
                    break;
                } 
                
            }
            if (liczba % k != 0)
                {
                    cout << "TAK" << endl;
                }
        }
    }

    return 0;
}