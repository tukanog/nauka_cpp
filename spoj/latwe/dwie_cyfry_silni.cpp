#include <iostream>
#include <string>

using namespace std;

int main()
{
    int D;
    cin >> D;

    for (int i = 0; i < D; i++)
    {
        int n, iloczyn = 1;
        cin >> n;

        if (n >= 10) cout << "0 0" << endl;
        else 
        {
            for (int i = 1; i <= n; i++) 
            {
                iloczyn *= i;
            }

            cout << (iloczyn / 10) % 10 << " " << iloczyn % 10 << endl;
        }
    }
    return 0;
}