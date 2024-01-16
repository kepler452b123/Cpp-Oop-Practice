#include <string>
#include <iostream>
class MyClass
{
    public:
    int myNum;
    std::string myString; 
};

int main(){
    MyClass classObj;
    classObj.myNum = 10;
    classObj.myString = "Hello";
    std::cout << "myNum is " << classObj.myNum << std::endl;
    std::cout << "myString is " << classObj.myString << std::endl;
    return 0;
}