#include<bits/stdc++.h>
using namespace std;

class Fractional{
    public:
     int whole;
     float fraction;

     // default constructor
     Fractional(){ }

     //Parameterized constructor :- to Initialize the value
     Fractional(int w, float f): whole{w}, fraction{f} { }

     Fractional operator + (const Fractional &rhs);
};

Fractional Fractional :: operator+ (const Fractional &rhs){
    Fractional result;

        result.whole =     whole    +  rhs.whole;
        result.fraction =  fraction + rhs.fraction;
        return result;
}

int main(){
    Fractional f1(23, .5), f2 (24, .3);
    Fractional f3 = f1 + f2;
    cout<<"Whole number "<<f3.whole <<" Fractional number"<<f3.fraction<<endl;

    return 0;
}

/*

#include <iostream>
using namespace std;

class Fraction {
public:
	int num;
	float den;

public:
	Fraction(int n, float d): num{n}, den{d} { }

	// Conversion operator: return float value of fraction
	Fraction operator *( const Fraction &f2 ){
	    Fraction f3(0,0.0);
	    return Fraction( this->num + f2.num , this->den + f2.den);
	} 
};

int main(){
	Fraction f1(2, 0.4), f2(3, 0.1);
	Fraction f3 = f1 * f2;
	cout<< f3.num <<" "<<f3.den;
	return 0;
}


*/