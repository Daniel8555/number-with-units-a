#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "doctest.h"
using namespace std;
#include "NumberWithUnits.hpp"
using namespace ariel;
ifstream units_file{"units.txt"};

TEST_CASE("first")
{
    NumberWithUnits::read_units(units_file);
    NumberWithUnits a{2,"km"};
    NumberWithUnits b{3,"km"};
    CHECK(a+b == NumberWithUnits{5,"km"});
    CHECK(a+b == NumberWithUnits{5,"km"});
    CHECK(a*5 == NumberWithUnits{10,"km"});
    CHECK(a*2 == NumberWithUnits{4,"km"});
    CHECK(a*3 == NumberWithUnits{6,"km"});
    CHECK(a*4 == NumberWithUnits{8,"km"});
    CHECK(a*5 == NumberWithUnits{10,"km"});
    CHECK(a*6 == NumberWithUnits{12,"km"});
    CHECK(a*7 == NumberWithUnits{14,"km"});
    CHECK(a*8 == NumberWithUnits{16,"km"});
    CHECK(a*9 == NumberWithUnits{18,"km"});
    CHECK(a*10 == NumberWithUnits{20,"km"});
    CHECK(a*11 == NumberWithUnits{22,"km"});
    CHECK(a*12 == NumberWithUnits{24,"km"});
    CHECK(a*13 == NumberWithUnits{26,"km"});
    CHECK(a*14 == NumberWithUnits{28,"km"});
    CHECK(a*15 == NumberWithUnits{30,"km"});
    CHECK(a*16 == NumberWithUnits{32,"km"});
    CHECK(a*17 == NumberWithUnits{34,"km"});
    CHECK(a*18 == NumberWithUnits{36,"km"});


    
}