// Created by: Juan Lemus
// Date created: 8/29/16
// CSCI 20 
//Browne
#include <iostream>
#include <string>
using namespace std;
int main()
{
    
    char desGrade = 'a';
    float yrsSchool = 0.0;
    int numHours = 0;
    string userName = "";
    string genNoun = "";
    
    cout << "Choose a small number: ";
    cin >> yrsSchool;
    cout << "Choose a big number: ";
    cin >> numHours;
    cout << "Choose a noun: ";
    cin >> genNoun;
    cout << "Choose a name: ";
    cin >> userName;
    cout << "What is your desired grade in school: ";
    cin >> desGrade;
    
    cout << userName << " is " << yrsSchool << " years into college and wants an '" << desGrade << "' in his math class." << endl;
    cout << "The professor is willing to help if " << userName << " will do " << numHours << " hours of clown school." << endl;
    cout << "In addition to that, " << userName << "'s professor wants him to wear a " << genNoun <<" on his head for the rest of the semester." << endl;
    
    
}