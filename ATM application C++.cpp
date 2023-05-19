#include <iostream>
using namespace std;

void show_menu() {
    cout << " ****** MENU ********** " << endl;
    cout << " 1. Check balance " << endl;
    cout << " 2. Deposit " << endl;
    cout << " 3. withdraw " << endl;
    cout << " *********************** " << endl;
}


int main()
{
   // check balance, (proverka balansa) deposit,(vnesti dengi na schet) withdraw(snimat dengi)
   //show menu,(pokazat menu)
    int option;
    show_menu();
    cout << "Option : ";
    cin >> option;

    system("pause>0");
}

