//Huan Chen, assignment03- program 01
// Program #1
// A movie theater only keeps a percentage of the revenue earned from ticket sales. The remainder goes to the movie distributor. Write a program that calculates a theater’s gross and net box office profit for a night. The program should ask for the name of the movie, and how many adult and child tickets were sold. (The price of an adult ticket is $10.00 and a child’s ticket is $6.00).
// • Use constants for values that aren’t supplied by the user (such as the prices and profit margin)
// Sample Execution:
// Please enter the movie name: St. Patrick's Revenge
// Please enter the number of adult tickets sold: 5621
// Please enter the number of child tickets sold: 125
// Movie Name:
// Adult Tickets Sold:
// Child Tickets Sold:
// Gross Box Office Profit:
// Net Box Office Profit:
// Amount Paid to Distributor:
// Press any key to continue . . .
// Things to Test/verify:
// "St. Patrick's Revenge"
//       5621
//        125
// $ 56960.00
// $ 11392.00
// $ 45568.00
// - What happens if the movie name is more than a single word?
// - Are your outputs formatted for their units?
// - Did you use constants as specified?
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double adultTicket, childTicket;
    string movieName;
    double adultTicket1, childTicket1;
    
    cout << "Please enter the movie name: ";

    getline(cin, movieName);
    
 
        cout << "Please enter the number of adult tickets sold: ";
        cin >> adultTicket1;
   
    adultTicket = adultTicket1 * 10;
        
        cout << "Please enter the number of child tickets sold: ";
        cin >> childTicket1;
        childTicket = childTicket1 * 6;
        
        cout << "Movie Name: " << "\"" << movieName << "\"" << "\n";
    
        const double grossProfit = adultTicket + childTicket;
        
        
        const double netProfit = grossProfit * 0.20;
        const double distributorPaid = grossProfit - netProfit;
        cout << "Adult Tickets Sold: " << adultTicket1 << "\n";
        cout << "Child Tickets Sold: " << childTicket1 << "\n";
        cout << "Gross Box Office Profit: $" << setprecision(2) << fixed << grossProfit << "\n";
        cout << "Net Box Office Profit: $" << netProfit << "\n";
        cout << "Amount Paid to Distributor: $" << distributorPaid << "\n";
        
}
