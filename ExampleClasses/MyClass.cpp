#include "MyClass.h"

std::string MyClass::getMyString()
{
    return myString;
}

int main(){
    MyClass classObj;
    classObj.myNum = 10;
    classObj.myString = "Hello";
    std::cout << "myNum is " << classObj.myNum << std::endl;
    std::cout << "myString is " << classObj.getMyString() << std::endl;
    return 0;
}