#ifndef WORDS_H                                                 //creation of input stream to be included
#define WORDS_H                                                 //WORDS_H is being defined
#include <vector>                                               //vector included to set up the c string style vector

using std :: vector;                                            //alternate way to include objects from 'namespace' individually
using std :: string;
class words                                                     //creation of a class to 
{
    public:
                            
        void addWords();
        void lookUp(string);
    
    
    private:
        vector <string> myWords;
};
#endif