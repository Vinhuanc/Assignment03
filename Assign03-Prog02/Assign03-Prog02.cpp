//Huan Chen, assignment03- program 01
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
