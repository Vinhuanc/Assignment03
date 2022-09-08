//Assignment03-Program03 Huan Chen
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
