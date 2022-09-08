//Huan Chen, assignment03- program 01
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
