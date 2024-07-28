//  Program to convert Nepalese Currency (Rupees and Paisa) to US 
// Currency (Dollar and Cents). (Rs. 98.51=1$)

#include<iostream>
using namespace std;

class US_DOLLOR{
    int dollors,cents;
    public:
        US_DOLLOR(int d , int c):dollors(d),cents(c){}

        void showDollors()
        {
            cout<<dollors<<" dollors "<<cents<<" cents"<<endl;
        }

};
class NP_CURRENCY{
    int rupees,paisa;
    public:
       NP_CURRENCY(int r = 0, int p = 0):rupees(r),paisa(p){}

       void getNP()
       {
        cout<<"Enter the nepalese currency in Rupees and paisa : "<<endl;
        cin>>rupees>>paisa;
       }
       
       operator US_DOLLOR()
       {
          float totalRupees = rupees + paisa/100.0;
          int totalDollors = totalRupees/133.6;
          int totalCents = (totalRupees/133.6 - totalDollors) * 100;
          US_DOLLOR temp(totalDollors,totalCents);
          return temp;
       }
};

int main()
{
    NP_CURRENCY n;
    n.getNP();
    US_DOLLOR d = n;
    d.showDollors();

    return 0;
}