#include <iostream>
using std::cout;
using std::cin;

double pow(double base, int exponent){
    double power = 1;
    for(int i=0 ; i<exponent ; i++){
        power = base*power;
    }
    return power;
}

void print_resault(double base, int exponent){
    double myPower = pow(base, exponent);
    cout<<base<<" raised to the "<<exponent<<" power is "<<myPower<<"\n";
}

int main(){
    double base;
    int exponent;
    cout<<"What is the base: ";
    cin>>base;
    cout<<"What is the exponent: ";
    cin>>exponent;
    print_resault(base, exponent);
    
}
//this is a comment
