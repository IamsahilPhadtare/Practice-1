#include <bits/stdc++.h>
using namespace std;
class Complex{
    int a,b;
    public:
        Complex(void);
        // setNumber(int n1, int n2){
        //     a= n1;
        //     b= n2;
        // }
        void printNumber(){
            cout<<"Complex Number is "<<a<<" + "<<b<<" i "<<endl;
        }
        
};
Complex :: Complex(void){
    cout<<"enter your Real number Value =  "<<endl;
    cin>>a;
    cout<<"Enter your Imaginary number Value = "<<endl;
    cin>>b;
    // a=10;
    // b=23;
}
int main(){
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}