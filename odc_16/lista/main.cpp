#include <iostream>
#include <list>
#include <unistd.h>

using namespace std;

list <int> lista; //utworzenie listy przechowujacej liczby calkowite
int wybor;

//---------------------

void wyswietl()
{
    system("clear");
    cout<<" ZAWARTOSC LISTY: "<<endl;
    cout<<"---------------------------"<<endl;

    for(list<int>::iterator i=lista.begin(); i!= lista.end(); ++i)
       cout<<*i<<" ";

    cout<<endl;
    cout<<"---------------------------"<<endl<<endl;
}

//-------- 1 ------------

void push_front()
{
    int liczba;
    cout<<"Podaj jaka liczbe wstawic na pocz\245tek listy: ";
    cin>>liczba;
    lista.push_front(liczba);
}

//--------- 2 -----------

void push_back()
{
    int liczba;
    cout<<"Podaj jaka liczbe wstawic na koniec listy: ";
    cin>>liczba;
    lista.push_back(liczba);
}

//---------- 3 ---------

void pop_front()
{
    cout<<"Nast\245pi usuni\251cie liczby z pocz\245tku listy";
    sleep(2);
    lista.pop_front();
}

//---------- 4 ---------

void pop_back()
{
    cout<<"Nast\245pi usuni\251cie liczby z konca listy";
    sleep(2);
    lista.pop_back();
}

//---------- 5 ----------

void size()
{
    cout<<"Liczb na li\230cie: "<<lista.size();
    sleep(2);
}

//---------- 6 ----------

void max_size()
{
    cout<<"Max liczb na li\230cie: "<<lista.max_size();
    sleep(5);
}

//---------- 7 ----------

void empty()
{
    cout<<"Czy lista pusta? -> ";
    if (lista.empty()==1) cout<<"TRUE"; else cout<<"FALSE";
    sleep(2);
}

//---------- 8 ----------

void remove()
{
    int liczba;
    cout<<"Usun z listy wszystkie liczby rowne: ";
    cin>>liczba;
    lista.remove(liczba);
}

//---------- 9 ----------

void sort()
{
    cout<<"Nastapi posortowanie listy! ";
    lista.sort();
    sleep(2);
}

//---------- 10 ----------

void reverse()
{
    cout<<"Nastapi odwrocenie kolejnosci liczb!";
    lista.reverse();
    sleep(2);
}

//---------- 11 ----------

void exit()
{
    cout<<"Koniec programu!";
    sleep(2);
}
//------------------------

int main()
{

do
{

wyswietl();

cout << " MENU GLOWNE LISTY:"<<endl;
cout << "---------------------------"<<endl;
cout << "1.  push_front"<<endl;
cout << "2.  push_back"<<endl;
cout << "3.  pop_front"<<endl;
cout << "4.  pop_back"<<endl;
cout << "5.  size"<<endl;
cout << "6.  max_size"<<endl;
cout << "7.  empty"<<endl;
cout << "8.  remove"<<endl;
cout << "9.  sort"<<endl;
cout << "10. reverse"<<endl;
cout << "11. exit"<<endl;
cout << "---------------------------"<<endl;
cout << "Wybor: ";
cin >> wybor;

	switch (wybor)
	{
        case 1:  push_front(); break;
        case 2:  push_back();  break;
        case 3:  pop_front();  break;
        case 4:  pop_back();   break;
        case 5:  size();       break;
        case 6:  max_size();   break;
        case 7:  empty();      break;
        case 8:  remove();     break;
        case 9:  sort();       break;
        case 10: reverse();    break;
        case 11: exit();       break;

        default:
        cout<<"POMYLKA!";
        sleep(2);
        break;
	}

}
while(wybor!=11);

    return 0;
}
