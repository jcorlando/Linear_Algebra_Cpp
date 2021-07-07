#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP
#include <array>
#include <initializer_list>
#include <iostream>












// vv<<<--- This is the Class Template
template<class T, unsigned int dimensions>
class myvector
{
private:
    // Member variables
    std::array<T, dimensions> vectr;
public:
    // Constructors
    myvector();
    myvector( std::initializer_list<T> list );
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
T &myvector<T, dimensions>::operator [](int  index)
{
    return vectr[index];
}



















// vv<<<----- This is for Const Objects
template<class T, unsigned int dimensions>
const T &myvector<T, dimensions>::operator [](int  index) const
{
    return vectr[index];
}






















// vv<<<---- Default Constructor definition
template<class T, unsigned int dimensions>
myvector<T, dimensions>::myvector()
{
    this->vectr.fill(0);
}






















// vv<<<---- Constructor With Arguments definition
template<class T, unsigned int dimensions>
myvector<T, dimensions>::myvector( std::initializer_list<T> list )
{
    for (auto it = list.begin(); it != list.end(); it++)
    {
        this->vectr[it - list.begin()] = *it;
    }
}
















#endif // MYVECTOR_HPP
