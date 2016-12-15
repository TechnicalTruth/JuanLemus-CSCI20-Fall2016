//Juan Lemus
//Lab Description:
//Date: 

#include <iostream>
using namespace std;

int main()
{
    string menuItem [10];
    int numItem[10];
    int menuItemDef;
    for(int i = 0; i < 10;++i){
        numItem[i] = 0;
    }
    menuItem [0] = "Apple";             //Menu created within array
    menuItem [1] = "Bannana";
    menuItem [2] = "Orange";
    menuItem [3] = "Pineapple";
    menuItem [4] = "Kiwi";
    menuItem [5] = "Pear";
    menuItem [6] = "Strawberry";
    menuItem [7] = "Raspberry";
    menuItem [8] = "Blueberry";
    menuItem [9] = "Blackberry";
    for(int i = 0; i < 10;++i)
    
        cout << i+1 << ") " << menuItem[i] << endl;     //print menu for users to see
        cout << "Choose product (1-10)"<< endl;
    
    while(cin >> menuItemDef ){                         //while loop for every user entry
        
        cout << menuItem[menuItemDef-1] << endl;
        
    int num = numItem[menuItemDef-1];                   //keeps track of stock of products chosen by user
    
        ++num;
    
        numItem[menuItemDef-1] = num;
    
    
    
        cout << "Do you want to continue?(y/n): ";
        char answer;                                    //allows user to quit inside of interface
    
        cin >> answer;
    
        if(answer == 'n')                               //if statement to verify answer from previous statement
    
            break;
        
    }
    
    for(int i = 0; i < 10; ++i){
    
        cout << menuItem[i] << ": " << numItem[i] << endl;
    }
    
    return 0;
}
