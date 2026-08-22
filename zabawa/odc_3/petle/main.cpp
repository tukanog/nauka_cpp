#include <iostream>
#include <unistd.h>
#include <cstdlib>

using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    for (int i = 4; i >= -1; i--) {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    for (int i = 15; i >= 0; i--) {
        sleep(1);
        system("clear");
        cout << i << endl;
    }
    cout << "JEBUT!" << endl;

    return 0;
}
