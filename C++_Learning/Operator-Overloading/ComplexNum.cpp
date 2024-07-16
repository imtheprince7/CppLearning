#include<bits/stdc++.h>
using namespace std;

class Complex{
    public:
        int real, img;
        //Default constructor
        Complex(){ }
        
        //Parameterized constructor
        Complex(int r, int i): real{r}, img{i} { }


        // Complex Number Addition:
        Complex operator + (const Complex &rhs){
            Complex result;
                result.real = real + rhs.real;
                result.img = img + rhs.img;
            return result;
        }

        // Complex Number Subtraction:
         Complex operator - (const Complex &rhs){
            Complex result;
                result.real = real - rhs.real;
                result.img = img - rhs.img;
            return result;
        }
};

int main(){
    Complex c1(38,45), c2(22, 35);
    Complex c3 = c1 + c2;    
    Complex c4 = c1 - c2;
    
    cout<<c3.real <<" + "<<c3.img<<" i"<<endl;
    cout<<c4.real <<" - "<<c4.img<<" i"<<endl;

    return 0;
}