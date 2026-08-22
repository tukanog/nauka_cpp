#include <iostream>

using namespace std;

int wiek;

int main()
{
    cout << "Ile masz lat?: ";
    cin >> wiek;

    if (wiek < 18) {
        cout << "Nie jesteś pełnoletni i nie możesz zostać prezydentem.";
    }
    else if (wiek >= 18 && wiek < 35) {
        cout << "Jesteś pełnoletni, ale nie możesz zostać prezydentem.";
    }
    else {
        cout << "Jesteś pełnoletni i możesz zostać prezydentem.";
    }

    return 0;
}
