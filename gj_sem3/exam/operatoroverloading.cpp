#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int real; 
    int img;

public:
    Complex()
    {
        real = img = 0;
    }
    Complex(int a,int b)
    {
        real = a;
        img = b;
    }
    string to_string()
    {
        stringstream ss;
        if (img >= 0)
            ss << "(" << real << " + " << img << "i"<<")";
        else
            ss << "(" << real << " - " << img << "i"<<")";
        return ss.str();
    }
    Complex operator+(Complex c2){
        Complex ret;
        ret.real =real+c2.real;
        ret.img =img+c2.img;
        return ret;
    }
    Complex operator*(Complex c3){
        Complex prod;
        prod.real=(real*c3.real)-(img*c3.img);
        prod.img=(real*c3.img)+(img*c3.real);
        return prod;
    }
};
int main()
{
    Complex c1(10,20),c2(30,20);
    Complex ret;
    Complex ret2;
    ret= c1 + c2 ;
    ret2= c1*c2;
    cout<<ret.to_string()<<endl;
    cout<<ret2.to_string()<<endl;
    return 0;
}