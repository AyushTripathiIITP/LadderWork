// class7.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

 class ve {
public:
    std::string brand="maruti suzuki";
    void honks()
    {
        std::cout << "tut,tut \n";
    };
        
    class car2 {
        public:
            std::string model = "wagonr";

};
    int main()
    {
        car2 mycar;
        honks();
        std::cout << mycar.model << "  " << brand;
        return 0;
    }