// Creator: Juan Lemus
// Date Created: 8/31/16
//CSCI 20
//Browne

#include <iostream>
using namespace std;
int main ()
{
    int numCent = 0;
    int numQuart = 0;
    int numDime = 0;
    int numNickl = 0;
    int numPenn = 0;
    double cashBack = 0.0;
    
    cout <<"Please deposit money now." <<endl;
    
    cin >> numCent;
    cout << "Total Money deposited: ";
    cout << numCent << " cents." <<endl;
    
    cout << "Number of quarters: ";
    numQuart = numCent / 25;
    cout << numQuart <<endl;
    
    cout << "Number of dimes: ";
    numDime = (numCent % (numQuart * 25)) / 10;
    cout << numDime << endl;
    
    cout << "Number of nickels: ";
    numNickl = (numCent % (numQuart * 25 + numDime * 10)) / 5;
    cout << numNickl << endl;
    
    cout << "Number of pennies: ";
    numPenn = (numCent % (numQuart * 25 + numDime * 10 + numNickl * 5)) / 1;
    cout << numPenn << endl;
    
    cout << "There will be a 10.9 percent fee applied" << endl;
    
    cashBack = numCent - (numCent * 0.109);
    
    cashBack /=  100.0;
    
    cout << "Your cash voucher will have a value of: $";
    cout << cashBack << endl;
    
    return 0;
}