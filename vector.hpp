#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP
#include <array>












// vv<<<--- This is the Class Template
template<class T, unsigned int dimensions>
class vector3D
{
private:
    // Member variables
    std::array<T, dimensions> vectr;
public:
    // Constructors
    vector3D();
    // vector3D();
    // Overloading [] operator to access elements in array style
    // v<<-- Non-Const Version
    T &operator [](int  index);
    // v<<-- Const Version
    const T &operator [](int  index) const;
};
















// vv<<<----- This is for Non-Const Objects
// Implementation of [] operator.  This function must return
// a reference as array element can be put on left side
template<class T, unsigned int dimensions>
T &vector3D<T, dimensions>::operator [](int  index)
{
    return vectr[index];
}



















// vv<<<----- This is for Const Objects
template<class T, unsigned int dimensions>
const T &vector3D<T, dimensions>::operator [](int  index) const
{
    return vectr[index];
}






















// vv<<<---- Default Constructor definition
template<class T, unsigned int dimensions>
vector3D<T, dimensions>::vector3D()
{
    ;
}


















// vv<<<---- Constructor With Arguments definition
// template<class T, unsigned int dimensions>
// vector3D<T, dimensions>::vector3D()
// {
//     ;
// }
















#endif // MYVECTOR_HPP
