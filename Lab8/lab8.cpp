// Creator: Juan Lemus  
// Browne
// Date created: 9/21/16
// Pounds to Kilos/ Kilos to pounds
#include <iostream>
#include <string>
using namespace std;

void toKilos (float numPounds, float numKilos)
{
    numKilos = numPounds * (1/2.2);
    
    cout << "Kilos: " << numKilos << endl;
}

void toPounds (float numKilos, float numPounds)
{
    numPounds = numKilos * 2.2;
    
    cout << "Pounds: " << numPounds << endl;
}

int main()
{
    float numPounds = 0;
    float numKilos = 0;
    
    toPounds (2);
    toKilos (10);
}