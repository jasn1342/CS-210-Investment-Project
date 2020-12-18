/*
 * investment.cpp
 *
 *  Created on: Oct 7, 2020
 *      Author: 1858940_snhu
 */
#include <iomanip>
#include <iostream>
#include "investment.h"
using namespace std;

//Constructor with parameters
savings::savings(double investment, double monthDeposit,
    double rate, int years){
     this->initialDeposit = investment;
     this->monthlyDeposit = monthDeposit;
     this->interestRate = rate;
     this->numYears = years;
}

//Destructor
savings::~savings(){
}

//Prints report WITHOUT monthly deposit
void savings::reportNoMonthlyDeposits(){
    cout << "   Balance and Interest without additional Monthly Deposits" << endl;
    cout << "==========================================================================" << endl;
    cout << setw(10) << "Year"
    		<< setw(20) << "Year End Balance"
			<< setw(35) << "Year End Earned Interest Rate" << endl;
    cout << "--------------------------------------------------------------------------" << endl;

    //Iterate for years input by user and calculate interest earned
    int currentYear = 1;
    double yearEndBalance = this->initialDeposit;
    while(currentYear <= this->numYears){

        //Interest calculation
        double interestEarned = yearEndBalance * this->interestRate / 100;

        //Add it to year end balance
        yearEndBalance += interestEarned;

        //Print results for each year
        cout << right << setw(10) << currentYear << fixed << setprecision(2)
             << setw(20) << yearEndBalance
			 << setw(35) << interestEarned << endl;

        //Increase year by one
        currentYear++;
    }
}

//Prints report WITH monthly deposit
void savings::reportWithMonthlyDeposits(){
    cout << "   Balance and Interest without additional Monthly Deposits" << endl;
    cout << "==========================================================================" << endl;
    cout << setw(10) << "Year"
    		<< setw(20) << "Year End Balance"
			<< setw(35) << "Year End Earned Interest Rate" << endl;
    cout << "--------------------------------------------------------------------------" << endl;

    //Iterate for number of years input by user and calculate interest earned.
    int currentyear = 1;
    double yearendBalance = this->initialDeposit;
    while(currentyear <= this->numYears){

        //calculate interest monthly and find compound interest
        int month = 1;
        double interestearned = 0.0;
        double monthendbalance = yearendBalance;
        while(month <= 12){

            //Add monthly deposit
            monthendbalance += this->monthlyDeposit;

            //Calculate monthly interest
            double monthlyinterest = monthendbalance * this->interestRate / (100*12);

            //Add monthly interest to yearly interest earned
            interestearned += monthlyinterest;

            // add the interest to end balance
            monthendbalance += monthlyinterest;

            //Increase month by 1
            month++;
        }

        //After 12 months
        yearendBalance = monthendbalance;

        //Print the results
        cout << right << setw(10) << currentyear << fixed << setprecision(2)
            << setw(20) << yearendBalance
            << setw(35) << interestearned << endl;

        //Increase the year count by one
        currentyear++;
    }
}



