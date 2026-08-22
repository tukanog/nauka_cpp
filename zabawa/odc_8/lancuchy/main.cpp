#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string imie;
    cout << "Podaj imię: ";
    cin >> imie;

    int dlugosc = imie.size();
    if (imie[dlugosc - 1] == 'a')
        cout << "Wydaje mi się, że jesteś kobietą!" << endl;
    else
        cout << "Wydaje mi się, że jesteś facetem!" << endl;

    string sraka = "Ala ma kota";
    string nowasraka = sraka.substr(4, 7);
    cout << nowasraka << endl;

    string napisr = "Ala ma kota";
    napisr.replace(4, 2, "nie ma");
    cout << napisr << endl;

    string napiskkk = "Ala ma kota";
    napiskkk.insert(11, " Filemona");
    cout << napiskkk << endl;

    string napismufinek = "Ala ma kota";
    napismufinek.erase(3,3); // od indeksu 3 przez 3 znaki
    cout << napismufinek << endl;

    string napismufi = "Ala ma kota";
    string szukaj = "kot";
    size_t pozycja = napismufi.find(szukaj);
    if (pozycja != string::npos)
        cout << "Znaleziono na pozycji: " << pozycja << endl;
    else
        cout << "Nie znaleziono" << endl;

    string napishehe = "Ala ma kota";
    transform(napishehe.begin(), napishehe.end(), napishehe.begin(), ::toupper);
    cout << napishehe << endl;

    transform(napishehe.begin(), napishehe.end(), napishehe.begin(), ::tolower);
    cout << napishehe << endl;

    string jeden = "Ala ma ";
    string dwa = "kota";

    string trzy = jeden + dwa;
    cout << trzy << endl;

    char *napisC="Ala ma kota"; // to było w C
    cout << napisC << endl;

    napisC="kot";
    cout << napisC << endl;


    string napis = "Ala ma kota";
    cout << napis[3] << endl;



    string wyraz;
    cout << "Podaj wyraz: ";
    cin >> wyraz;

    for (int i = wyraz.length() - 1; i >= 0; i--) {
        cout << wyraz[i];
    }

    string napis2;
    cout << "Podaj napis: ";
    getline(cin, napis2);

    cout << napis2;
    return 0;
}
