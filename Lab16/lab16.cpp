//Juan Lemus
//Parallel Arrays: create a product price lookup.
//Date: 11/1/16
 #include <iostream>
using namespace std;

int main()
{
    string menuItem[10];
    double price_stock[1][10];
    int numItem[10];
    int menuItemDef;
    double cart = 0;
    for(int i = 0; i < 10;++i){
       
        
    }
    for(int i = 0; i < 20;i++){
        if(i < 10)
            price_stock[0][i] = 1+(i*.75);
        else
            price_stock[1][i-10] = 10.; 
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
    
    while(cin >> menuItemDef){
        
        price_stock[1][menuItemDef-1] -=1;
        
        if(price_stock[1][menuItemDef-1] >0 ){
            
            cout << menuItem[menuItemDef-1] << " costs $" << price_stock[0][menuItemDef-1]<< " with " << price_stock[1][menuItemDef-1] << " left" << endl;
            
            int num = numItem[menuItemDef-1];
            cart += price_stock[0][menuItemDef-1];
            ++num;
            
            
            menuItem[menuItemDef-1] = num;
        }
        else
            cout << "No more left in stock" << endl;
            cout << "Do you want to continue?(y/n): ";
        
        char answer;
        
        cin >> answer;
        
        if(answer == 'n')
            break;
        
        
    }
    cout << "Total: " << cart << endl;
            
    
    return 0;
    
}
