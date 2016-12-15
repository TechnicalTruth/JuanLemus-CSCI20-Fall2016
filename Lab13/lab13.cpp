//Juan Lemus
//Lab Description:
//Date: 

#include <iostream>
using namespace std;

int main(){
    
    int i = 0;
    double startTime;
    double endTime;
    int print;
    
    cout << "Please enter start time: " << endl;
    cin >> startTime;
    
    cout << "Please enter end time: " << endl;
    cin >> endTime;
    
    while(startTime > i < endTime){                 //ensures that we operate within the time frame given by user
        
        cout << print << endl;
        
        ++i;
    }
        
    return 0;
}