#include <iostream>
#include <string>

class directory {
public:
    std::string name;
    int roll;
    int phone;
    class directory(std::string x, int y, int z) {
        name = x;
        roll = y;
        phone = z;
    }
};

int main()
{
    directory student1("ayush", 15,  9415);
    directory student2("shruti",15 , 5555);
    directory student3("plaksha",15, 5555);

    //print command
    std::cout << "  name     " << "roll number     " << "phone number\n";
    std::cout <<"1.   "<< student1.name << "       " << student1.roll << "             " << student1.phone << "\n";
    std::cout << "2.  "<<student2.name << "      " << student2.roll << "             " << student2.phone << "\n";
    std::cout << "3. "<<student3.name << "     " << student3.roll << "             " << student3.phone << "\n";
    return 0;
}