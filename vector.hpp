#ifndef VECTOR_HPP
#define VECTOR_HPP
#include <array>












// vv<<<--- This is the Class Template
template<class T>
class vector3D
{
private:
    // Member variables
    std::array<T, 3> vectr;
public:
    // Constructors
    vector3D();
    vector3D(T a, T b, T c);
    // Overloading [] operator to access elements in array style
    // v<<-- Non-Const Version
    T &operator [](int  index);
    // v<<-- Const Version
    const T &operator [](int  index) const;
};
















// vv<<<----- This is for Non-Const Objects
// Implementation of [] operator.  This function must return
// a reference as array element can be put on left side
template<class T>
T &vector3D<T>::operator [](int  index)
{
    return vectr[index];
}



















// vv<<<----- This is for Const Objects
template<class T>
const T &vector3D<T>::operator [](int  index) const
{
    return vectr[index];
}






















// vv<<<---- Constructor definition
template<class T>
vector3D<T>::vector3D()
{
    vectr[0] = 0;
    vectr[1] = 0;
    vectr[2] = 0;
}


















// vv<<<---- Constructor With Arguments definition
template<class T>
vector3D<T>::vector3D(T a, T b, T c)
{
    vectr[0] = a;
    vectr[1] = b;
    vectr[2] = c;
}
















#endif // VECTOR_HPP
