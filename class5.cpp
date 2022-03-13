// class5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class family {
public:
    int x;
    int y;
    family(int a, int b) {
        a = x;
        b = y;
    }
};
int main()
{
    family income1(775,8885);
    family income2(87884,87785);

    std::cout << "you have the following income"<< income1.x<<income1.y << "\n";
    std::cout << "you have the following income" << income2.x << income2.y;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
