#include <iostream>
#include <algorithm>

using namespace std;

int metal = 0, krysztal = 0, deuter = 0;

int main()
{
    cout << "Podaj ilosc metalu: ";
    cin >> metal;
    cout << "Podaj ilosc krysztalu: ";
    cin >> krysztal;
    cout << "Podaj ilosc deuteru: ";
    cin >> deuter;

    if (metal < 0 || krysztal < 0 || deuter < 0) 
        cout << "Nie można podać ujemnej ilości surowców!" << endl;
    else if (metal < 20000 || krysztal < 7000 || deuter < 2000) 
        cout << "Nie stać cię na ten statek kosmiczny!" << endl;
    else 
    {
        int ile_z_metalu = 0, ile_z_krysztalu = 0, ile_z_deuteru = 0;
        ile_z_metalu = metal / 20000;
        ile_z_krysztalu = krysztal / 7000;
        ile_z_deuteru = deuter / 2000;
        if (min({ile_z_metalu, ile_z_krysztalu, ile_z_deuteru}) == 1) cout << "Możesz zbudować " << min({ile_z_metalu, ile_z_krysztalu, ile_z_deuteru}) << " statek kosmiczny!" << endl;
        else cout << "Możesz zbudować " << min({ile_z_metalu, ile_z_krysztalu, ile_z_deuteru}) << " statków kosmicznych!" << endl;
    }
}