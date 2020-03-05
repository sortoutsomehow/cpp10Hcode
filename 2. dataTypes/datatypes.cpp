#include <iostream>
#include <climits>
using std::cout;


int main(){

//integral data types
    //number
    //every integers reservse one bit for sign ('-' :which will be represented by 1 for signed number and 0 for not signed)
    short a;//max 16bit min 8bit
    int b;//max 32bit min 16bit
    long c;//max 64bit min 32bit
    long long d;//64 bit unconditioanll
    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;
    cout<<sizeof(short)<<'\n';
    cout<<SHRT_MAX<<'\n';
    cout<<USHRT_MAX<<'\n';
    cout<<INT_MAX<<'\n';
    cout<<UINT_MAX<<'\n';
    cout<<LONG_MAX<<'\n';
    cout<<ULONG_MAX<<'\n';
    cout<<LLONG_MAX<<'\n';
    cout<<ULLONG_MAX<<'\n';



    cout<<SHRT_MIN<<'\n';
    cout<<INT_MIN<<'\n';
    cout<<LONG_MIN<<'\n';
    cout<<LLONG_MIN<<'\n';

    //char
    //can be used to store charectors and numbers 
    //it is 8bit in storage

    char x = 'a';
    cout<< x<< '\n';
    cout<< (int) x<<'\n';
    char y = 127;//it is 8bit data type so the max number it can epresent is 127
    cout<<(int) y<<'\n';
    char y2 = 128;//so when you asign a bigger number you will encounter something called overflowign 
    cout<<(int) y2<<'\n';//which means the counter will return to the lowest posible number wich is -128 in this case and start counting up
    // char z = 257;
    // cout<<(int) z<<'\n';

//BOOLIAN
    bool ali = true;
    cout <<ali<<'\n';
    cout<<std::boolalpha<<ali<<'\n';//usign this method you can get the literal value of boolians
    //this is a comment
}