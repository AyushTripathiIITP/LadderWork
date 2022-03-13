#include <iostream>
#include <string>

void firstname(std::string firstname, int age) {
    std::cout << "hello, " << firstname << " tripathi, you are  " << age << " old\n";
}
int main()
{
    firstname("ayush",19);
    firstname("ashutosh",41);
    firstname("anuradha",35);
    firstname("kshipra",25);
    return 0;
}
