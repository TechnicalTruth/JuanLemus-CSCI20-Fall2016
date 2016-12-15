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
    menuItem [0] = "Apple";
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
        cout << i+1 << ") " << menuItem[i] << endl;
    cout << "Choose product (1-10)"<< endl;
    while(cin>>menuItemDef ){
        
       
       
        
        cout << menuItem[menuItemDef-1] << endl;
        int num = numItem[menuItemDef-1];
        ++num;
        numItem[menuItemDef-1] = num;
        cout << "Do you want to continue?(y/n): ";
        char answer;
        cin >> answer;
        if(answer == 'n')
            break;
        
        
    }
    for(int i = 0; i < 10; ++i){
        cout << menuItem[i] << ": " << numItem[i] << endl;
    
    }
    
    return 0;
}
