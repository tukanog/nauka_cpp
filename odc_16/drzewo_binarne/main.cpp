#include <iostream>
#include <unistd.h>
#include <thread>
#include <chrono>

using namespace std;

//---------------------- ZMIENNE GLOBALNE----------------------------
int wybor;
int *korzen;
int dane[16];
bool pusty[16];

//-------- VOID USTAWIAJACY KURSOR W MIEJSCU X,Y NA EKRANIE --------
void gotoxy(int x, int y)
{
    // Sekwencja ANSI do ustawiania kursora w terminalu (pozycja 1-based)
    cout << "\033[" << y << ";" << x << "H" << flush;
}

// Interfejs pauzy zgodny z Linux/C++11
void czekaj(int sekundy)
{
    this_thread::sleep_for(chrono::seconds(sekundy));
}

//----------------------- WYSWIETLANIE DRZEWA -----------------------
void wyswietl_drzewo()
{
    system("clear");

    gotoxy(40,1);  if (pusty[1]) cout<<"_"; else cout<<dane[1];
    gotoxy(20,4);  if (pusty[2]) cout<<"_"; else cout<<dane[2];
    gotoxy(60,4);  if (pusty[3]) cout<<"_"; else cout<<dane[3];
    gotoxy(10,6);  if (pusty[4]) cout<<"_"; else cout<<dane[4];
    gotoxy(30,6);  if (pusty[5]) cout<<"_"; else cout<<dane[5];
    gotoxy(50,6);  if (pusty[6]) cout<<"_"; else cout<<dane[6];
    gotoxy(70,6);  if (pusty[7]) cout<<"_"; else cout<<dane[7];
    gotoxy(5,10);  if (pusty[8]) cout<<"_"; else cout<<dane[8];
    gotoxy(15,10); if (pusty[9]) cout<<"_"; else cout<<dane[9];
    gotoxy(25,10); if (pusty[10]) cout<<"_"; else cout<<dane[10];
    gotoxy(35,10); if (pusty[11]) cout<<"_"; else cout<<dane[11];
    gotoxy(45,10); if (pusty[12]) cout<<"_"; else cout<<dane[12];
    gotoxy(55,10); if (pusty[13]) cout<<"_"; else cout<<dane[13];
    gotoxy(65,10); if (pusty[14]) cout<<"_"; else cout<<dane[14];
    gotoxy(75,10); if (pusty[15]) cout<<"_"; else cout<<dane[15];

    // Przejście pod drzewo przed wyświetleniem menu
    gotoxy(1, 12);
}

//------------------- DODAJ LICZBE DO DRZEWA ------------------------
void add()
{
    int liczba;
    cout << "Jaka liczbe dodac do drzewa: ";
    cin >> liczba;

    if (pusty[1] == true)
    {
        korzen = &dane[1];
        *korzen = liczba;
        pusty[1] = false;
    }
    else
    {
        bool znalazlem_miejsce = false;
        int wezel = 1;

        while (!znalazlem_miejsce)
        {
            if (pusty[wezel] == true)
            {
                znalazlem_miejsce = true;
                dane[wezel] = liczba;
                pusty[wezel] = false;
            }
            else if (liczba < dane[wezel])
            {
                wezel = 2 * wezel;
            }
            else
            {
                wezel = 2 * wezel + 1;
            }

            if (wezel > 15)
            {
                cout << "Potrzebne byloby wieksze drzewo!";
                cout.flush();
                czekaj(3);
                znalazlem_miejsce = true;
            }
        }
    }
}

//------------------- SZUKAJ LICZBY W DRZEWIE ------------------------
void find()
{
    int liczba;
    cout << "Jaka liczbe znalezc w drzewie: ";
    cin >> liczba;

    bool znalazlem = false;
    int wezel = 1;

    while (!znalazlem)
    {
        if (pusty[wezel] == true)
        {
            cout << "Nie znaleziono!";
            cout.flush();
            czekaj(3);
            znalazlem = true;
        }
        else if (liczba == dane[wezel])
        {
            cout << "Znaleziono liczbe w wezle nr: " << wezel;
            cout.flush();
            czekaj(3);
            znalazlem = true;
        }
        else if (liczba < dane[wezel])
        {
            wezel = 2 * wezel;
        }
        else
        {
            wezel = 2 * wezel + 1;
        }

        if (wezel > 15 && !znalazlem)
        {
            cout << "Nie znaleziono!";
            cout.flush();
            czekaj(3);
            znalazlem = true;
        }
    }
}

//----------------------- GLOWNY PROGRAM ----------------------------
int main()
{
    for (int i = 1; i <= 15; i++)
    {
        pusty[i] = true;
    }
    korzen = nullptr;

    do
    {
        wyswietl_drzewo();

        cout << "----------------------------------" << endl;
        cout << "    EMULATOR DRZEWA BINARNEGO " << endl;
        cout << "----------------------------------" << endl;
        cout << "1. ADD (dodaje element do drzewa)" << endl;
        cout << "2. FIND (szuka elementu w drzewie)" << endl;
        cout << "3. EXIT (zakonczy ten program)" << endl;
        cout << "----------------------------------" << endl;
        cout << "    WYBOR: ";
        cin >> wybor;
        cout << endl;

        switch (wybor)
        {
            case 1: add(); break;
            case 2: find(); break;
        }

    } while (wybor != 3);

    return 0;
}
