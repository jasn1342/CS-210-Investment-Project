/*
 * investment.h
 *
 *  Created on: Oct 7, 2020
 *      Author: 1858940_snhu
 */

#ifndef INVESTMENT_H_
#define INVESTMENT_H_

class savings{
    public:
        savings(double investment, double monthDeposit, double rate, int years);
        virtual ~savings();
        void reportNoMonthlyDeposits();
        void reportWithMonthlyDeposits();

    private:
        double initialDeposit;
        double monthlyDeposit;
        double interestRate;
        int numYears;
};



#endif /* INVESTMENT_H_ */
