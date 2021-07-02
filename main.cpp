#include "vector.hpp"
#include <iostream>


int main()
{
    vector3D<double> vec1(3.3, 8.5, 7.7);
    vector3D<double> vec2;

    std::cout << vec1[0] << std::endl;
    std::cout << vec1[1] << std::endl;
    std::cout << vec1[2] << std::endl;

    std::cout << vec2[0] << std::endl;
    std::cout << vec2[1] << std::endl;
    std::cout << vec2[2] << std::endl;

    return 0;
}

