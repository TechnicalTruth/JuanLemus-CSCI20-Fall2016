// Creator: Juan Lemus
// Date Created: 9/7/16
//Browne

#include <iostream>
#include <string>
using namespace std;
 
 struct Monster {
        
        string Name;
        string Head;
        string Eyes;
        string Ears;
        string Nose;
        string Mouth;
        
    }Monsterone, monstertwo, monsterthree, monsterfour 
    
int main () {
    cout << "Choose name for your monster: ";
    cin >> monsterone.name;
    cout << "Choose head type for your monster: ";
    cin >> monsterone.head;
    cout << "Choose eye type for your monster: ";
    cin >> monsterone.eyes;
    cout <<"Choose what kind of ears your monster has: ";
    cin >> monsterone.ears;
    cout << "Choose nose type for your monster: ";
    cin >> monsterone.nose;
    cout << "Choose mouth type for your monster: ";
    cin >> monsterone.mouth;
    cout << "Monster name: " << monsterone.name << " Head type: " << monsterone.head << " Eye type: " << monsterone.eyes << " Nose type: " << monsterone.nose << " Mouth type: " << monsterone.mouth << endl;
    
    monstertwo.name = "Craig";
    monstertwo.head = "Sombra";
    monstertwo.eyes = "Focused";
    monstertwo.ears = "Floppy";
    monstertwo.nose = "triangular";
    monstertwo.mouth = "Holy";
    
    cout << "Monster name: " << monstertwo.name << " Head type: " << monstertwo.head << " Eye type: " << monstertwo.eyes << " Nose type: " << monstertwo.nose << " Mouth type: " << monstertwo.mouth << endl;
    
    monsterthree.name = "Paul";
    monsterthree.head = "Zombus";
    monsterthree.eyes = "Dreamy";
    monsterthree.ears = "Riggid";
    monsterthree.nose = "Rotten";
    monsterthree.mouth = "Wackus";
    
    cout << "Monster name: " << monsterthree.name << " Head type: " << monsterthree.head << " Eye type: " << monsterthree.eyes << " Nose type: " << monsterthree.nose << " Mouth type: " << monsterthree.mouth << endl;
    
    monsterfour.name = "Greg";
    monsterfour.head = "Frankensteinish";
    monsterfour.eyes = "Spritem";
    monsterfour.ears = "Triangular";
    monsterfour.nose = "None";
    monsterfour.mouth = "Wackus";
    
     cout << "Monster name: " << monsterfour.name << " Head type: " << monsterfour.head << " Eye type: " << monsterfour.eyes << " Nose type: " << monsterfour.nose << " Mouth type: " << monsterfour.mouth << endl;
     
     return 0;
}