#include "vector.hpp"


int main()
{
    // v<<-- Initialized Using An Initializer List Must Use
    // v<<-- Bracket "{}" Syntax With Argument Constructor;
    myvector<double, 4> vec1( {3.3, 8.5, 7.7, 8.6} );
    myvector<double, 3> vec2;
    

    return 0;
}

