#include <iostream>
using namespace std;

class group {
 public:
	string name;
	int roll;
	int standard;
	class group(std::string x, int y, int z) {
		name = x;
		roll = y;
		standard = z;
	 }
	  //attibutes of class specified
};
int main() {
	group student1("Ayush", 15, 7);
	group student2("Kshipra", 21, 9); //object specified

	//print command
	cout << " this student named " << student1.name << " of standard " << student1.standard << " roll no. " << student1.roll << " has been restricated\n";
	cout << " this student named " << student2.name << " of standard " << student2.standard << " roll no. " << student2.roll << " has been restricated\n";
}

