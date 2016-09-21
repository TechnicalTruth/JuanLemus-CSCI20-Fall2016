// Creator: Juan Lemus  
// Browne
// Date created: 9/19/16

#include <iostream>
using namespace std;

void VerseA(int carPart, int partAction)
{
  cin >> carPart;
  cin >> partAction; 
  cout <<"The " << carPart <<" on the bus go " << partAction << " and " << partAction << endl;
  cout << partAction <<" and " << partAction << endl;
  cout << partAction <<" and " << partAction << endl;
  cout <<"The " << carPart <<" on the bus go " << partAction << " and " << partAction << endl;
  cout << "All round the town"

}

void ChorusA (int carPart2, int partAction2)
{
    cin >> carPart2;
    cin >> partAction2;
    cout << "The " << carPart2 << " on the bus go " <<partAction2 <<", " << partAction2 << ", " << partAction2 << endl;
    cout << partAction2 <<", " << partAction2 <<", " << partAction2 << endl;
    cout << partAction2 <<", " << partAction2 <<", " << partAction2 << endl;
    cout << "The " << carPart2 << " on the bus go " <<partAction2 <<", " << partAction2 << ", " << partAction2 << endl;
    cout << "All round the town";
}

int main()
{
    VerseA();
    ChorusA();
    
    return 0;
    
}