#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

namespace ariel{
    class NumberWithUnits
    {
    private:
        double num;
        string t;
    public:
        NumberWithUnits(double num,string t)
        {
            this->num=num;
            this->t=t;
        }
        ~NumberWithUnits(){}
    static void read_units(ifstream &units_file);

        double getn() const {
            return num;
        }
        std::string gett() const {
            return t;
        }


    
    friend NumberWithUnits operator+(const NumberWithUnits &a, const NumberWithUnits &b);
    friend bool operator==(const NumberWithUnits &a, const NumberWithUnits &b);
    friend std:: ostream& operator<< (ostream &out, const NumberWithUnits &n);
    friend std:: istream& operator>> (istream &in, NumberWithUnits &n);
   friend bool operator>(const NumberWithUnits& num, const NumberWithUnits& num1) ;
         friend NumberWithUnits operator-(const NumberWithUnits &a, const NumberWithUnits &b);    
   
    NumberWithUnits& operator+=(const NumberWithUnits& other) ;
        NumberWithUnits& operator-=(const NumberWithUnits& other) ;
        NumberWithUnits& operator*=(const NumberWithUnits& other) ;
  friend bool operator!=(const NumberWithUnits& num, const NumberWithUnits& num1);
  friend  bool operator<(const NumberWithUnits& num, const NumberWithUnits& num1);
    friend bool operator>(const NumberWithUnits& num, const NumberWithUnits& num1);
  friend  bool operator<=(const NumberWithUnits& num, const NumberWithUnits& num1);
   friend bool operator>=(const NumberWithUnits& num, const NumberWithUnits& num1);
  
         NumberWithUnits operator++(int x)
        {
        NumberWithUnits  temp =*this;
        num++;
        return temp;
        }
     NumberWithUnits operator--(int x) {
            NumberWithUnits temp = *this;
            num--;
            return temp;
        }
        friend const NumberWithUnits operator*(const NumberWithUnits& num, const double& copy) {
            return NumberWithUnits(num.num * copy, num.t);
        }
        friend const NumberWithUnits operator*(const double& copy, const NumberWithUnits& num) {
            return NumberWithUnits(num.num * copy, num.t);
        }
        const NumberWithUnits operator-() const {
            return NumberWithUnits(-num, t);
        }

          NumberWithUnits& operator++() 
          {
            num++;
            return *this;
         }

    };
}