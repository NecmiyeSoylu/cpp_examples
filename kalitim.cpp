#include <iostream>
#define pi 3.14
using namespace std;
class cokgen
{
    public:
        int h, l;
    public:
    class ucgen//: public cokgen
    {
        /*protected:
        int h, l;
        public:
        void atama(int h_input, int l_input)
        {
            h=h_input;
            l=l_input;
        }
        */public:
            float alan()
            {
                return (h*l*0.5);
            }
    };
    public:
        void atama(int h_input, int l_input)
        {
            h=h_input;
            l=l_input;
        }
};

class dikdortgen: public cokgen
{

    public:
        float alan()
        {
            return (h*l);
        }
};
class silindir: public cokgen
{
    public:
        float hacim()
        {
            return (pi*l*l*h);
        }
};
int main()
{
    dikdortgen dik;
    cokgen::ucgen uc;
    silindir sil;
    dik.atama(3,4);
    uc.atama(3,4);
    sil.atama(3,4);
    cout<<"\n "<<dik.alan();
    cout<<"\n "<<uc.alan();
    cout<<"\n "<<sil.hacim();
}