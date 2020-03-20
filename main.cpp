#include <iostream>
#include <math.h>
using namespace std;
class Numar_Complex{
double re,im;
public:
    Numar_Complex(double x=0, double y=0)
    {
        re=x;
        im=y;
    }
    Numar_Complex(const Numar_Complex& z)
    { this->re=z.re;
      this->im=z.im;

    }
    double getRe()
    {return this->re;

    }
    void setRe(double x)
    {
        this->re=x;
    }
    double getIm()
    {return this->im;

    }
    void setIm(double x)
    { this->im=x;

    }

    Numar_Complex operator + (Numar_Complex const &obj) {
         Numar_Complex res;
         res.re = re + obj.re;
         res.im = im + obj.im;
         return res;
    }
    Numar_Complex operator - (Numar_Complex const &obj) {
         Numar_Complex res;
         res.re = re - obj.re;
         res.im = im - obj.im;
         return res;
    }
    Numar_Complex operator * (Numar_Complex const &obj) {
         Numar_Complex res;
         res.re = re * obj.re;
         res.im = im * obj.im;
         return res;
    }
    Numar_Complex operator / (Numar_Complex const &obj) {
         Numar_Complex res;
         res.re = re / obj.re;
         res.im = im / obj.im;
         return res;
    }
    void afisare()
    { if(re==0)
        if(im>0)
            cout<<"i*"<<im;
        else
           cout<<"-i*"<<-1*im;
      else
         if(im==1)
            if(re<0)
               cout<<"-i*"<<-1*re;
            else
                cout<<"i*"<<re;
        else
            if (im==0)
            cout<<re;
            else
            if (re>0)
                cout<<re<<"+i*"<<im;
            else
                cout<<re<<"-i*"<<im;
    }
    double modul()
    {
        return sqrt(re*re+im*im);
    }
    Numar_Complex radical()
    { Numar_Complex a;
      a.re=sqrt((this->re+this->modul())/2);
      a.im=sqrt(-1*(this->im+this->modul())/2);
      return a;
    }
    ~Numar_Complex()
    {

    }
};
int main()
{Numar_Complex x,y,z,delta,s1,s2,constanta,const1,const2;
double a,b,c,d,e,f;
cin>>a>>b>>c>>d>>e>>f;
x.setRe(a);
x.setIm(b);
y.setRe(c);
y.setIm(d);
z.setRe(e);
z.setIm(f);
constanta.setRe(4);
constanta.setIm(0);
const1.setRe(-1);
const1.setIm(0);
const2.setRe(2);
const2.setIm(0);
delta=y*y-constanta*x*z;
s1=(const1*y+delta.radical())/(const2*x);
s2=(const1*y-delta.radical())/(const2*x);
s1.afisare();
cout<<'\n';
s2.afisare();
    return 0;
}
