//Juan Lemus
//Lab Description:
//Date: 

#include <iostream>
using namespace std;

int main(){
    
    int i =0;
    double startTime;
    double endTime;
    int waitTime = 15;
    int print = 1;
    
    cout << "Please enter start time: " << endl;
    cin >> startTime;
    
    cout << "Please enter end time: " << endl;
    cin >> endTime;
    
    for(i = 0; startTime > i < endTime; ++i){               //ensures that we operate within the time frame given by user
        
        for(i = 0; i = waitTime; ++i){
        cout << print << endl;
        }
        
    }
        
    return 0;
}