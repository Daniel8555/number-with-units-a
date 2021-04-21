#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

#include "NumberWithUnits.hpp"

using namespace ariel;
    void NumberWithUnits::read_units(ifstream &units_file){

    }
    

    NumberWithUnits ariel::operator+(const NumberWithUnits &a, const NumberWithUnits &b){
        return NumberWithUnits(a.getn() +b.getn() , a.gett());

    }
       NumberWithUnits ariel::operator-(const NumberWithUnits &a, const NumberWithUnits &b){
        return NumberWithUnits(a.getn() -b.getn() , a.gett());

    }

    NumberWithUnits& NumberWithUnits::operator+=(const NumberWithUnits& other) {
    return *this;
    }
        NumberWithUnits& NumberWithUnits::operator-=(const NumberWithUnits& other) {
    return *this;
    }
        NumberWithUnits& NumberWithUnits::operator*=(const NumberWithUnits& other) {
          return *this;
    }
    bool ariel::operator<(const NumberWithUnits& num, const NumberWithUnits& num1) {
    return !(num >= num1);
    
}
bool ariel::operator>(const NumberWithUnits& num, const NumberWithUnits& num1) {
    return !(num >= num1);

}
    bool ariel::operator!=(const NumberWithUnits& num, const NumberWithUnits& num1) {
    return !(num == num1);
    }
bool ariel::operator<=(const NumberWithUnits& num, const NumberWithUnits& num1) {
    return false;
    }
    bool ariel::operator>=(const NumberWithUnits& num, const NumberWithUnits& num1) {
    return false;
    }


    
    bool ariel::operator==(const NumberWithUnits &a, const NumberWithUnits &b){
        return true;
    }
    ostream& ariel::operator<< (ostream &out, const NumberWithUnits &n){
        out<<"number is:"<<n.getn()<<"type is:" <<n.gett()<< endl;
        return out;
    }
    istream& ariel::operator>> (istream &in, NumberWithUnits &n){
        string a;
        return in;
    }
