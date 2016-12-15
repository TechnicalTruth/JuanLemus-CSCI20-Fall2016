//Juan Lemus
//Lab Description: If/Else statements
//Date: 10/5/16

#include <iostream>
#include <string>

using namespace std;

class EstimatedIncomeTax{
    public:
    
        void userGrossWage();
        

    private:
    
        double userWage;
        double taxAGI;
        double adjGrossIncome;
        double userTips;
        double taxWitheld;
        string userName;
        string userStatus;
};


int main(){

    
    cout << "Name: ";
    
    string userName;
    getline (cin, userName);
    
    cout << "Filing status (Single or Married): ";
    
    string userStatus;
    getline (cin, userStatus);
    
    cout << "Wage: ";
    cin >> userWage;
    
    cout << "Tips: ";
    cin >> userTips;
    
    cout << "Withheld: ";
    cin >> taxWitheld;
   
    
    
    void userGrossWage (double userWage, double  userTips, double taxWitheld);
    
    
if(userStatus != "Married"){
        
        double adjGrossIncome;
        
        adjGrossIncome = adjGrossIncome - (3900 + 6100);
        
        
    }
    else{ 
        
        adjGrossIncome = adjGrossIncome - (2 * (3900 + 6100));
        
        
    }
    
    
    

if(adjGrossIncome >= 0 && adjGrossIncome < 8926 && userStatus != "Married"){
        
        
        taxAGI = adjGrossIncome + (adjGrossIncome * 0.10);
         

        
    }
    
    
    else if(adjGrossIncome >= 8926 && adjGrossIncome < 36251 && userStatus != "Married"){
        
        taxAGI = adjGrossIncome + (892.50 + (adjGrossIncome * 0.15));
        
      
        
    }
    
    
    else if(adjGrossIncome >= 3651 && adjGrossIncome < 87851 && userStatus != "Married"){
        
        taxAGI = adjGrossIncome + (4991.25 + (adjGrossIncome * 0.25));

    }
    
    
    else if(adjGrossIncome >= 87851 && userStatus != "Married"){
        
        taxAGI = adjGrossIncome + (17891.25 + (adjGrossIncome * 0.28));
        
    }
    
    
    else if( adjGrossIncome >= 0 && adjGrossIncome < 17851 && userStatus == "Married"){
        
        taxAGI = adjGrossIncome + (adjGrossIncome * 0.10);
        
        
    }


    else if(adjGrossIncome >= 17851 && adjGrossIncome < 72501 && userStatus == "Married" ){
        
        taxAGI = adjGrossIncome + (1785 + (adjGrossIncome * 0.15));
        
        
    }
    
    
    else if(adjGrossIncome >= 72501 && userStatus == "Married"){
        
        taxAGI = adjGrossIncome + (9982.50 + (adjGrossIncome * 0.28));
        
        
    }
    else{
            
        taxAGI = 0;
    }
    
    cout << "Your tax return is: $" << taxAGI;
    
    return 0;
}

  void EstimatedIncomeTax :: userGrossWage(){
    
    double adjGrossIncome = 0.0;
    
  adjGrossIncome = userWage + userTips + taxWitheld;
  
  }