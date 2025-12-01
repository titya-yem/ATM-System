#include <iostream>
using namespace std;

int main()
{
    system("cls");

    while (true)
    {
        cout << "Do you have an account ?" << endl;
        cout << "Press 1 for Yes, 2 for No: ";
        short choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Welcome to Le Fang ATM Service" << endl;
            cout << "Please enter your PIN (4 digits): ";
            short pin;
            cin >> pin;
            // check pin
            cout << pin;
            break;
        case 2:
            cout << "Please create an account with us" << endl;
            short createAcc;
            cin >> createAcc;
            switch (createAcc)
            {
            case 1:
                cout << "Account created successfully" << endl;
                break;
            case 2:
                cout << "Thank you for visiting Le Fang ATM Service";
                break;
            }
            break;
        };
        break;
    };
    return 0;
};