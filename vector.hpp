#ifndef VECTOR_HPP
#define VECTOR_HPP
#include <array>


template<class T>
class vector3D
{
private:
    std::array<T, 3> vectr;
public:
    vector3D() = default;
    vector3D(T a, T b, T c);
};

template<class T>
vector3D<T>::vector3D(T a, T b, T c)
{
    vectr[0] = a;
    vectr[1] = b;
    vectr[2] = c;
}


#endif // VECTOR_HPP
