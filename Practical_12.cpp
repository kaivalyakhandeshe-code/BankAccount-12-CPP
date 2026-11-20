
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int choice;

    do
    {
        cout << "\n===== BANK ACCOUNT MANAGEMENT =====" << endl;
        cout << "1. Implicit Type Casting" << endl;
        cout << "2. Explicit Type Casting" << endl;
        cout << "3. Calculate Simple Interest" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int balance;
            double convertedBalance;

            cout << "\nEnter account balance (integer): ";
            cin >> balance;

            // Implicit type casting
            convertedBalance = balance;

            cout << "Original Integer Balance: "
                 << balance << endl;

            cout << fixed << setprecision(2);
            cout << "Converted Double Balance: Rs. "
                 << convertedBalance << endl;
        }
        else if (choice == 2)
        {
            double balance;
            int convertedBalance;

            cout << "\nEnter account balance (decimal): ";
            cin >> balance;

            // Explicit type casting
            convertedBalance = static_cast<int>(balance);

            cout << fixed << setprecision(2);
            cout << "Original Double Balance: Rs. "
                 << balance << endl;

            cout << "Converted Integer Balance: Rs. "
                 << convertedBalance << endl;
        }
        else if (choice == 3)
        {
            int principal, years;
            float rate;
            double interest, totalAmount;

            cout << "\nEnter principal amount: ";
            cin >> principal;

            cout << "Enter annual interest rate: ";
            cin >> rate;

            cout << "Enter time in years: ";
            cin >> years;

            // Calculation involving different data types
            interest = principal * rate * years / 100.0;
            totalAmount = principal + interest;

            cout << fixed << setprecision(2);
            cout << "\nPrincipal Amount: Rs. "
                 << principal << endl;

            cout << "Interest Rate: "
                 << rate << "%" << endl;

            cout << "Time: " << years << " years" << endl;

            cout << "Simple Interest: Rs. "
                 << interest << endl;

            cout << "Total Amount: Rs. "
                 << totalAmount << endl;
        }
        else if (choice == 4)
        {
            cout << "\nExiting Program..." << endl;
        }
        else
        {
            cout << "\nInvalid Choice! Please try again."
                 << endl;
        }

    } while (choice != 4);

    return 0;
}

