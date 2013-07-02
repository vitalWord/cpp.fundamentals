/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* The Kingdom of Neutronia, where the unit of currency is the tvarp */
/* has the following income tax code:                                */
/*                                                                   */
/*     First 5,000 tvarps: 0% tax                                    */
/*     Next 10,000 tvarps: 10% tax                                   */
/*     Next 20,000 tvarps:15% tax                                    */
/*     Tvarps after 35,000:20% tax                                   */
/*                                                                   */
/* For example, someone earning 38,000 tvarps would owe              */
/* 5000*0.00 + 10000*0.10 + 20000*0.15 + 3000*0.20, or 4,600 tvarps. */
/*                                                                   */
/* Write a program that uses a loop to solicit incomes and to report */
/* tax owed. The loop should terminate when the user enters a        */
/* negative number or non-numeric input.                             */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

# include <iostream>

int main()
{
    const double T05K = 5000;
    const double T10K = 10000;
    const double T20K = 20000;
    double income;
    double tax;

    std::cout << "Please specify the income: ";
    while (std::cin >> income)
    {
        tax = 0.0;
        if (income - T05K > 0.0) 
        {
            income -= T05K;

            if (income - T10K > 0.0) 
            {
                income -= T10K;
                tax += T10K * 0.1;

                if (income - T20K > 0.0)
                {
                    income -= T20K;
                    tax += T20K * 0.15 + income * 0.2;
                }
                else
                    tax += income * 0.15;
            }
            else
                tax += income * 0.1;
        };
        std::cout << std::endl << "The tax owed is " << tax << std::endl;
    };

    return 0;
}

