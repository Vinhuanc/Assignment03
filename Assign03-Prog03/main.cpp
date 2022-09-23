//Assignment03-Program03 Huan Chen
// Program #3
// Assuming there are no deposits other than the original investment, the balance in a savings account after one year may be calculated as: Amount = Principal * (1 + (Rate/T))^T. Principal is the balance in the savings account, Rate is the interest rate, and T is the number of times the interest is compounded during a year (T is 4 if the interest is compounded quarterly). Write a program that asks for the principal, the interest rate, and the number of times the interest is compounded.
// Sample Execution:
// Please enter the Principal Balance: $30284
// Please enter the interest rate (as a decimal): 0.03
// Please enter the number of times interest is compounded: 120
// Interest Rate:
// Times Compounded:
// Principal:
// Interest:
// Amount in Savings:
// Press any key to continue . . .
//         3%
//        120
// $ 30284.00
// $   922.17
// $ 31206.17
// Things to Test/verify:
// - Are your outputs formatted for their units?
// - What happens if the interest rate is a fractional (real) number?
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main(){
    double principal, interestRate, interests, updatedSavings;
    int interestCompoundRate;
    
    cout << "Please enter the Principal Balance: $" ;
    cin >> principal;
        
    cout << "Please enter the interest rate (as a decimal) : ";
    cin >> interestRate;
 
    
    
    cout << "Please enter the number of times interest is compounded: " ;
    cin >> interestCompoundRate;

    cout << "Interest Rate: " << interestRate * 100 << "%" <<"\n";

    cout << "Times Compounded: " << interestCompoundRate <<"\n";

    cout << "Principal: $" << setprecision(2) << fixed << principal <<"\n" ;

    interests = interestRate * principal;
    updatedSavings = principal * pow((1+(interestRate/interestCompoundRate)),interestCompoundRate);

    cout << "Interest: $" << setprecision(2) << fixed << updatedSavings - principal  <<"\n";


    cout << "Amount in Savings: $" << setprecision(2) << fixed << updatedSavings <<"\n" ;
}
