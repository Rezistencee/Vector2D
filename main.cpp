#include "libs/Vector.h"
#include "libs/Logger.h"

#include "iostream"
#include "conio.h"

int main() {
    Logger log;
    std::string message;
    
    Vector2<int> vec(20, 40);
    Vector2<int> vec2(10, 20);

    Vector2<int> temp;

    message = "Vector1 : \n";
    log.ConsoleLog(DEBUG, message);

    Vector2<int>::Output(vec);

    message = "Vector2 : \n";
    log.ConsoleLog(DEBUG, message);

    Vector2<int>::Output(vec2);

    temp = vec;

    temp + vec2;

    message = "Vector1 [+] operation (vector1 + vector2): \n";

    log.ConsoleLog(DEBUG, message);

    Vector2<int>::Output(temp);
    
    temp = vec2;

    temp * 4;

    message = "Vector2 [*] operation (vector2 * 4): \n";
    log.ConsoleLog(DEBUG, message);
    
    Vector2<int>::Output(temp);

    std::cout << "\n\n";

    Vector2<float> floatVec(12.6, 25.7);

    Vector2<float>::Output(floatVec);

    float length = Vector2<float>::Length(floatVec);

    message = "Vector length: " + std::to_string(length);
    
    log.ConsoleLog(DEBUG, message);

    bool equal = Vector2<float>::Equals(floatVec, floatVec);

    message = "Vector (12.6, 25.7) and vector (12.6, 25.7) are " + (equal ? std::string("equal") : std::string("no equal"));

    log.ConsoleLog(INFO, message);

    Vector2<float> tempFloat(11.4, 34.7);

    equal = Vector2<float>::Equals(floatVec, tempFloat);

    message = "Vector (12.6, 25.7) and vector (11.4, 34.7) are " + (equal ? std::string("equal") : std::string("no equal"));

    log.ConsoleLog(INFO, message);
    
    getch();
}