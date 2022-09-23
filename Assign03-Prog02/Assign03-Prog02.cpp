//Huan Chen, assignment03- program 01
// Program #2
// A retail company must file a monthly sales tax report listing the sales for the month and the amount of sales tax collected. Write a program that asks for the month, the year, and the total amount collected at the cash register (that is, sales plus sales tax). Assume the state sales tax is 4 percent and the county sales tax is 2 percent.
// If the total amount collected is known and the total sales tax is 6 percent, the amount of product sales may be calculated as: S = (T/1.06). S is the product sales and T is the total income.
// • Display the year next to the month as shown in the example below
// • Use const for the tax rates
// Sample Execution:
// Please enter the Month: January
// Please enter the year: 2017
// Please enter the total amount collected: $482
// Month: January 2017
// --------------------
// Total Collected:        $482.00
// Sales:                  $454.72
// County Sales Tax:       $9.09
// State Sales Tax:        $18.19
// Total Sales Tax:        $27.28
// Press any key to continue . . .
// Things to Test/verify:
// - What happens if the month name is more than a single word?
// - What happens if the year is not entered as an integer?
// - Are your outputs formatted for their units?
// - Did you use constants as specified?
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    string month;
    string year;
    double sales, totalCollected, totalTax;
    
    cout << "Please enter the Month: " ;
    getline(cin, month);
    
    cout << "Please enter the year: " ;
    getline(cin, year);

    cout << "Please enter the total amount collected: $" ;
    cin >> totalCollected;
    
    cout << "Month: " << month << " "<< year << "\n";;
    cout << "-------------------"  << "\n";
    
    cout << "Total Collected: $" << setprecision(2) << fixed << totalCollected << "\n";
    
    sales = totalCollected / 1.06;
    cout << "Sales: $" << setprecision(2) << fixed << sales << "\n";
    
    const double countyTax = sales * 0.02;
    cout << "County Sales Tax: $" << setprecision(2) << fixed << countyTax << "\n";
    
    const double stateTax = sales * 0.04;
    cout << "State Sales Tax: $" << setprecision(2) << fixed << stateTax << "\n";
    
    totalTax = countyTax + stateTax;
    cout << "Total Sales Tax: $"  << setprecision(2) << fixed << totalTax << "\n";
    
    
}
