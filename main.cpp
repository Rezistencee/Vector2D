#include "libs/Vector.h"
#include "libs/Logger.h"

#include "iostream"
#include "conio.h"

int main() {
    Logger log;
    Vector2<int> vec(20, 40);
    Vector2<int> vec2(10, 20);

    Vector2<int> temp;

    std::cout << "Vector1 : " << "\n";
    Vector2<int>::Output(vec);

    std::cout << "Vector2 : " << "\n";
    Vector2<int>::Output(vec2);

    temp = vec;

    temp + vec2;

    std::cout << "\n\n\n" << "Vector1 [+] operation (vector1 + vector2): " << "\n";

    Vector2<int>::Output(temp);
    
    temp = vec2;

    temp * 4;

    std::cout << "Vector2 [*] operation (vector2 * 4): " << "\n";
    Vector2<int>::Output(temp);

    std::cout << "\n\n";

    Vector2<float> floatVec(12.6, 25.7);

    Vector2<float>::Output(floatVec);

    float length = Vector2<float>::Length(floatVec);
    
    std::cout << "\n\n" << "Vector length: " << length;

    bool equal = Vector2<float>::Equals(floatVec, floatVec);

    std::cout << "\n\n" << (equal ? "Equal" : "No equal");

    Vector2<float> tempFloat(11.4, 34.7);

    equal = Vector2<float>::Equals(floatVec, tempFloat);

    std::cout << "\n\n" << (equal ? "Equal" : "No equal");

    log.ConsoleLog(INFO, "Test string!");
    
    getch();
}