#include <iostream>
#include <fstream>
#include "words.h"
#include <string>
#include <algorithm>

using std :: cout;                                                
using std :: cin;
using std :: endl;
using std :: ifstream;
using std :: sort;                                                               
using std :: next_permutation;
using std :: vector;


int main(){
    
    words mywords;                                              

    mywords.addWords();                                         
    
    string target; 
    
    cout << "Please enter a 5 letter word (no caps):" << endl;
    
    cin >> target;                                              
    
    cout << "Your Words are: " << endl; 
    
    mywords.lookUp(target);                                   
    
   
    return 0;
} 



void words :: addWords(){
    
     ifstream inf;                                      
    
    inf.open("words.txt");                                      
    
    string word;                                                
    
    
    while( inf >> word)                                            
         myWords.push_back(word);                               
   
    inf.close();                                                
    
}  
void words :: lookUp (string target){
  
   
    vector <string> repeats;
    bool found;
    sort(myWords.begin(),myWords.end());                    
        const char* Target = target.c_str();
         while(next_permutation(target.begin(),target.end())){  
        
        for(unsigned int j = 0; j < myWords.size(); ++ j){       
            
            string word = myWords[j];                           
            int len = word.length();
            const char* Word = word.c_str();                    
            
            if((Target[0] == Word[0] && Target[1] == Word[1]) && len == 2){
               
                found = true;
                //cout << Word << endl;
            }
           else if((Target[0] == Word[0] && (Target[1] == Word[1]) && Target[2] == Word[2]) && len == 3){
                
                found = true;
                //cout << Word << endl;
            }
           else if ((Target[0] == Word[0] && Target[1] == Word[1]) && (Target[2] == Word[2] && Target[3] == Word[3]) && len == 4){
                found = true;
                //cout << Word << endl;
            }
           else if ((Target[0] == Word[0] && Target[1] == Word[1]) && (Target[2] == Word[2] && Target[3] == Word[3]) &&  Target[4] == Word[4] && len == 5){
                
                found = true;
                //cout << Word << endl;
            }
            else{
                found = false;
            
            }
            bool print = true;
            if(found == true){
                
                for(int i = 0; i < repeats.size(); ++i){
                    if(repeats[i] != word){
                        print = true;
                       
                    }
                    else{
                        print = false;
                        break;
                    }
                }
                    if(print == true){
                        repeats.push_back(word);
                        cout << word << endl;
                    }
                
                
            }
                
            
        }
    }
    
}