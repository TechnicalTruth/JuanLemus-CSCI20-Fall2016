// Creator: Juan Lemus
// Date Created: 9/7/16
//Browne

#include <iostream>
#include <string>
using namespace std;
 
 struct Monster {
        
        string name;
        string head;
        string eyes;
        string ears;
        string nose;
        string mouth;
        
    };
    
    int main ()
    {
     Monster monsterOne;
 
    cout << "Choose name for your monster: ";
    cin >> monsterOne.name;
    cout << "Choose head type for your monster: ";
    cin >> monsterOne.head;
    cout << "Choose eye type for your monster: ";
    cin >> monsterOne.eyes;
    cout <<"Choose what kind of ears your monster has: ";
    cin >> monsterOne.ears;
    cout << "Choose nose type for your monster: ";
    cin >> monsterOne.nose;
    cout << "Choose mouth type for your monster: ";
    cin >> monsterOne.mouth;
    cout << "Monster name: " << monsterOne.name << " Head type: " << monsterOne.head << " Eye type: " << monsterOne.eyes << " Nose type: " << monsterOne.nose << " Mouth type: " << monsterOne.mouth << endl;
    
    Monster monsterTwo;
    
    monsterTwo.name = "Craig";
    monsterTwo.head = "Sombra";
    monsterTwo.eyes = "Focused";
    monsterTwo.ears = "Floppy";
    monsterTwo.nose = "triangular";
    monsterTwo.mouth = "Holy";
    
    cout << "Monster name: " << monsterTwo.name << " Head type: " << monsterTwo.head << " Eye type: " << monsterTwo.eyes << " Nose type: " << monsterTwo.nose << " Mouth type: " << monsterTwo.mouth << endl;
    
    Monster monsterThree;
    
    monsterThree.name = "Paul";
    monsterThree.head = "Zombus";
    monsterThree.eyes = "Dreamy";
    monsterThree.ears = "Riggid";
    monsterThree.nose = "Rotten";
    monsterThree.mouth = "Wackus";
    
    cout << "Monster name: " << monsterThree.name << " Head type: " << monsterThree.head << " Eye type: " << monsterThree.eyes << " Nose type: " << monsterThree.nose << " Mouth type: " << monsterThree.mouth << endl;
    
    Monster monsterFour;
    
    monsterFour.name = "Greg";
    monsterFour.head = "Frankensteinish";
    monsterFour.eyes = "Spritem";
    monsterFour.ears = "Triangular";
    monsterFour.nose = "None";
    monsterFour.mouth = "Wackus";
    
    cout << "Monster name: " << monsterFour.name << " Head type: " << monsterFour.head << " Eye type: " << monsterFour.eyes << " Nose type: " << monsterFour.nose << " Mouth type: " << monsterFour.mouth << endl;
     
     return 0;
}