#ifndef WORDS_H                                                
#define WORDS_H                                                 
#include <vector>                                               

using std :: string;
using std :: vector;                                          
class words                                                     
{
    public:
                            
        void addWords();
        void lookUp(string);
    
    
    private:
        vector <string> myWords;
};
#endif