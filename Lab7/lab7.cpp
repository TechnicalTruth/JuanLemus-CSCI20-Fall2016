// Creator: Juan Lemus  
// Browne
// Date created: 9/19/16
// Wheels on the Bus Nursery Ryhme
#include <iostream>
#include <string>
using namespace std;

void verseA(string carPart, string partAction)
{
    
  cout <<"The " << carPart <<" on the bus go " << partAction << " and " << partAction << endl;
  cout << partAction <<" and " << partAction << endl;
  cout << partAction <<" and " << partAction << endl;
  cout <<"The " << carPart <<" on the bus go " << partAction << " and " << partAction << endl;
  cout << "All round the town" <<endl;

}

void chorusA (string carPart2, string partAction2)
{

    cout << "The " << carPart2 << " on the bus go " <<partAction2 <<", " << partAction2 << ", " << partAction2 << endl;
    cout << partAction2 <<", " << partAction2 <<", " << partAction2 << endl;
    cout << partAction2 <<", " << partAction2 <<", " << partAction2 << endl;
    cout << "The " << carPart2 << " on the bus go " <<partAction2 <<", " << partAction2 << ", " << partAction2 << endl;
    cout << "All round the town" << endl;
}

int main()
{
    verseA("wheels", "round");
    chorusA("wipers", "swish");
    
    return 0;
    
}