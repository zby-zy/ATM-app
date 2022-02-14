#include <iostream>
using namespace std;

void showMenu(){
    std::cout << "**********MENU********" << std::endl;
    std::cout << "1. Check Balance" << std::endl;
    std::cout << "2. Deposit" << std::endl;
    std::cout << "3. Withdraw" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cout << "**********************" << std::endl;

}

int main()
{
    int option;
    double balance = 500;


    do{
    showMenu();
    cout << "Option: ";
    cin >> option;
    system("cls");

    switch (option)
    {
    case 1:
        cout << "Balance is: " << balance << "$" << endl;
        break;
    case 2:
        cout << "Deposit amount:";
        double depositAmount;
        cin >> depositAmount;
        balance += depositAmount;
        break;
    case 3:
        cout << "Withdraw amount:";
        double withdrawAmount;
        cin >> withdrawAmount;
        if (withdrawAmount <= balance)
            balance -= withdrawAmount;
        else
            cout << "Not enough money" << endl;
        break;
    }
    }while(option!=4);


    system("pause>0");

}
