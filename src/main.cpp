/*
 * main.cpp
 *
 *  Created on: Oct 7, 2020
 *      Author: 1858940_snhu
 */

#include <iostream>
#include "investment.h"
using namespace std;

int main(){
    while(1)
    {
        //Print summary screen without user input
        cout << "*************************************" << endl;
        cout << "*************Data Input**************" << endl;
        cout << "Initial Investment Amount: " << endl;
        cout << "Monthly Deposit: " << endl;
        cout << "Annual Interest: " << endl;
        cout << "Number of years: " << endl;

        //Press any key to continue
        cout << "Press any key to continue...";
        std::cin.get();
        cout << endl;

        //Get the inputs from user
        cout << "*************************************" << endl;
        cout << "*************Data Input**************" << endl;
        cout << "Initial Investment Amount: $";

        double investment, monthlyDeposit, interestRate;
        int years;
        cin >> investment;
        cout << "Monthly Deposit: $";
        cin >> monthlyDeposit;
        cout << "Annual Interest: %";
        cin >> interestRate;
        cout << "Number of years: ";
        cin >> years;

        //Press any key to continue
        cout << "Press any key to continue...";
        std::cin.get();

        //Create savings object using the given inputs
        savings mysavings = savings(investment, monthlyDeposit, interestRate, years);
        cout << endl;

        //Invoke the report methods
        mysavings.reportNoMonthlyDeposits();
        cout << endl;

        //call monthly deposit report. The monthly deposit must be greater than 0 to work.
        if(monthlyDeposit > 0){
            mysavings.reportWithMonthlyDeposits();
        }
    }
    return 0;
}



