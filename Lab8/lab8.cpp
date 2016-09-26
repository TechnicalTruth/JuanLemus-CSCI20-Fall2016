// Creator: Juan Lemus  
// Browne
// Date created: 9/21/16
// Pounds to Kilos/ Kilos to pounds
#include <iostream>
#include <string>
using namespace std;

void toKilos (float numPounds, float numKilos)
{
    cout << "Enter weight in Pounds: ";
    cin >> numPounds;
    numKilos = numPounds * (1/2.2);
    
    cout << "Kilos: " << numKilos << endl;
}

void toPounds (float numKilos, float numPounds)
{
    cout << "Enter weight in Kilos: ";
    cin >> numKilos;
    numPounds = numKilos * 2.2;
    
    cout << "Pounds: " << numPounds << endl;
}

int main()
{

    toPounds (0,0);
    toKilos (0,0);
}