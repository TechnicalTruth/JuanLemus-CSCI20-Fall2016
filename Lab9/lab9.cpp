//Juan Lemus
//Temperature conversions
//9/28/16

#include <iostream>
using namespace std;

class TemperatureConverter {
    public:
        void SetTempFromKelvin (double kelvin); //Temp converted from kelvin
        void SetTempFromCelsius (double celsius); //Temp converted from celsius
        void SetTempFromFahrenheit (double fahrenheit); //Temp converted from Fahrenheit
        void PrintTemperatures (double kelvin, double celsius, double fahrenheit);
        double GetTempFromKelvin ();
        double GetTempAsCelsius ();
        double GetTempAsFahrenheit ();
    private: 
        double kelvin_ ;
        
};
    void TemperatureConverter::SetTempFromKelvin(double kelvin){
        kelvin_ = kelvin;
        return;
        
}
    void TemperatureConverter::SetTempFromCelsius(double celsius){
        kelvin_ = celsius + 273.15;
        return;
}
    void TemperatureConverter::SetTempFromFahrenheit(double fahrenheit){
        kelvin_ = (5 * (fahrenheit - 32)/9) + 273.15;
        return;
}
    double TemperatureConverter::GetTempAsCelsius() const {
        return kelvin_ - 273.5;
}
    double TemperatureConverter::GetTempAsFahrenheit() const {
        return  (((SetTempFromFahrenheit(double fahrenheit)) * 9) / 5 + 32);
}
    void TemperatureConverter::PrintTemperatures();{
        
    }
int main() 
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;
}