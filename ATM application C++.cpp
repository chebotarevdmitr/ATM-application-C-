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
    double  balance = 500;

    do {
        show_menu();
        cout << "Option : ";
        cin >> option;

        switch (option)
        {
        case 1:
            cout << " Balance is: " << balance << "$" << endl; break;
        case 2:
            cout << " Deposit amount: ";
            double deposit_amount;
            cin >> deposit_amount;
            balance += deposit_amount;
            break;
        case 3:
            cout << " withdraw  amount: ";
            double  withdraw_amount;
            cin >> withdraw_amount;
            if (withdraw_amount <= balance) balance -= withdraw_amount;
            else
                cout << " Not enough money " << endl;
            break;
        }
    } while (option != 4);
    system("pause>0");
}

