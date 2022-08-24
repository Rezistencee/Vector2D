#ifndef __VECTOR_H__
#define __VECTOR_H__

#include "iostream"
#include "math.h"

#define PI 3.14

template <typename T>
class Vector2 {
    public:

    /* Constructor section */
    Vector2();
    Vector2(T x, T y);

    /*  Destructor section  */
    ~Vector2() = default;

    void operator + (const Vector2 &other); 
    void operator * (int factor); 
    void operator = (const Vector2 &other);
    
    static void Output(const Vector2 currentVec);
    Vector2<T> Rotate(float angle);
    static T Length(const Vector2 currentVec);
    static bool Equals(const Vector2 comparedObject1, const Vector2 comparedObject2);

    private: 

    T _x;
    T _y;
};


template <typename T>
Vector2<T>::Vector2()
{
    _x = 0;
    _y = 0;    
};

template<typename T>
Vector2<T>::Vector2(T x, T y)
{
    _x = x;
    _y = y;    
}

template<typename T>
void Vector2<T>::operator * (int factor)
{
    _x *= factor;
    _y *= factor;  
}

template<typename T>
void Vector2<T>::operator + (const Vector2 &other)
{
    _x += other._x;
    _y += other._y; 
}

template <typename T>
void Vector2<T>::operator = (const Vector2 &other)
{
    _x = other._x;
    _y = other._y;
}

template <typename T>
void Vector2<T>::Output(const Vector2 currentVec)
{
    std::cout << "Vector start: " + std::to_string(currentVec._x);
    std::cout << "\n";
    std::cout << "Vector end: " + std::to_string(currentVec._y) + "\n"; 
}

template <typename T> 
Vector2<T> Vector2<T>::Rotate(float angle) {
    angle = fmod(angle, 360.0);
    angle = ((angle) * PI / 180.0f);
    float sinAngle = sin(angle);
    float cosAngle = cos(angle);
    
    float temporaryX = (cosAngle * _x - sinAngle * _y);
    float temporaryY = (sinAngle * _x + cosAngle * _y);

    return Vector2<T>(temporaryX, temporaryY);
}

template <typename T> 
T Vector2<T>::Length(const Vector2 currentVec) {
    T result = 0;
    result = sqrt(pow(currentVec._x, 2) + pow(currentVec._y, 2));
    return result;
} 

template <typename T> 
bool Vector2<T>::Equals(const Vector2 comparedObject1, const Vector2 comparedObject2) {
    if (!((comparedObject1._x == comparedObject2._x) && (comparedObject1._y == comparedObject2._y))) return false;
    
    return true;
}

#endif // __VECTOR_H__