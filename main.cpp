#include<iostream>
using namespace std;
class Pen {
public:
	string color;
};

int main() {
	
	cout << "Test N4_1" << endl;
	Pen pen;
	pen.color = "#FFFFFF";
	cout << "pen.color =" << pen.color << endl;
	return 0;
}
