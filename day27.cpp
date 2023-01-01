#include <iostream>
using namespace std;
class complex;
class clac{
    public:
    int sumcomplex(complex o1, complex o2);
    int sumcomplexc(complex o1, complex o2);
};
class complex{
    int a, b;
    //friend int clac::sumcomplex(complex , complex );
    //friend int clac::sumcomplexc(complex , complex );
      friend class clac;
public:
    void setdata(int v1, int v2){
        a = v1;
        b = v2;
    }
};
int clac:: sumcomplex(complex o1, complex o2){
        cout << "the sum of real part of complex numbers is:" << endl;
        return (o1.a + o2.a);
    }
int clac:: sumcomplexc(complex o1, complex o2){
        cout << "the sum of complex part of complex numbers is:" << endl;
        return (o1.b + o2.b);
    }
int main(){
    complex c1, c2;
    c1.setdata(2, 6);
    c2.setdata(4, 8);
    clac o3,o4;
    int result = o3.sumcomplex(c1, c2);
    cout << result<<endl;
    int resultc = o4.sumcomplexc(c1, c2);
    cout << resultc;
    return 0;
}