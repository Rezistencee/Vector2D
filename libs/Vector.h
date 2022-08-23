#ifndef __VECTOR_H__
#define __VECTOR_H__

#include "iostream"

template <typename T>
class Vector2 {
    public:

    Vector2();
    Vector2(T x, T y);

    void operator + (const Vector2 &other); 
    void operator * (int factor); 
    void operator = (const Vector2 &other);
    
    static void Output(const Vector2 currentVec);

    private: 

    T _a;
    T _b;
};


template <typename T>
Vector2<T>::Vector2()
{
    _a = 0;
    _b = 0;    
};

template<typename T>
Vector2<T>::Vector2(T x, T y)
{
    _a = x;
    _b = y;    
}

template<typename T>
void Vector2<T>::operator * (int factor)
{
    _a *= factor;
    _b *= factor;  
}

template<typename T>
void Vector2<T>::operator + (const Vector2 &other)
{
    _a += other._a;
    _b += other._b; 
}

template <typename T>
void Vector2<T>::operator = (const Vector2 &other)
{
    _a = other._a;
    _b = other._b;
}

template <typename T>
void Vector2<T>::Output(const Vector2 currentVec)
{
    std::cout << "Vector start: " + std::to_string(currentVec._a);
    std::cout << "\n";
    std::cout << "Vector end: " + std::to_string(currentVec._b) + "\n"; 
}

#endif // __VECTOR_H__