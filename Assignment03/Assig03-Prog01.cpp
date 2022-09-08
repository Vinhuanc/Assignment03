//Huan Chen, assignment03- program 01
#include <iostream>
using namespace std;

int main(){
    double adultTicket, childTicket, grossProfit, netProfit, distributorPaid;
    string movieName;
    
    cout << "Please enter the movie name: ";
    cin >> movieName;
    
    cout << "Please enter the number of adult tickets sold: ";
    cin >> adultTicket;
    adultTicket = adultTicket * 10;
    
    cout << "Please enter the number of child tickets sold: ";
    cin >> childTicket;
    childTicket = childTicket * 6;
    
    cout << "Movie Name: " <<  movieName << "\n";
    
    grossProfit = adultTicket + childTicket;
    
    
    netProfit = grossProfit * 0.20;
    distributorPaid = grossProfit - netProfit;
    cout << "Adult Tickets Sold: " << adultTicket << "\n";
    cout << "Child Tickets Sold: " << childTicket << "\n";
    cout << "Gross Box Office Profit: $" << grossProfit << "\n";
    cout << "Net Box Office Profit: $" << netProfit << "\n";
    cout << "Amount Paid to Distributor: $" << distributorPaid << "\n";
    
    
    
    

}
