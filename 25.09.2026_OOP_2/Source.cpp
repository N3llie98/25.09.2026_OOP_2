#include <iostream>
using namespace std;

class Reservoir {
	string name;
	double width;
	double length;
	double maxDepth;
	static int Count;
public:
	//CONSTRUCTORS
	Reservoir()
	{
		name = "";
		width = 0;
		length = 0;
		maxDepth = 0;
		Count++;
	}
	Reservoir(string name, double width, double length, double maxDepth)
	{
		this->name = name;
		this->width = width;
		this->length = length;
		this->maxDepth = maxDepth;
		Count++;
	}

	//METHODS
	double roughVolume()
	{
		return width * length * maxDepth;
	}
	void compareSurfaces(Reservoir second)
	{
		if (width * length > second.getWidth() * second.getLength()) {
			cout << name << "'s surface is bigger than " << second.getName() << "'s\n\n";
		}
		else if (width * length < second.getWidth() * second.getLength()) {
			cout << second.getName() << "'s surface is bigger than " << name << "'s\n\n";
		}
		else {
			cout << name << "'s surface is equal to " << second.getName() << "'s\n\n";
		}
	}
	void printAll()
	{
		cout << "Name: " << name << "\nWidth: " << width
			<< "\nLength: " << length << "\nMax depth: " << maxDepth
			<< "\nTotal number of objects of this class: " << Count << endl << endl;
	}

	//GETTERS
	string getName() { return name; }
	double getWidth() { return width; }
	double getLength() { return length; }
	double getMaxDepth() { return maxDepth; }
	//SETTERS
	void setName(string new_name) { name = new_name; }
	void setWidth(double new_width) { width = new_width; }
	void setLength(double new_length) { length = new_length; }
	void setMaxDepth(double new_maxDepth) { maxDepth = new_maxDepth; }
};

//STATIC COUNT
int Reservoir::Count = 0;


int main()
{
	Reservoir r1;
	r1.printAll();
	r1.setName("NAME");
	r1.setWidth(10);
	r1.setLength(20);
	r1.setMaxDepth(15);
	r1.printAll();

	Reservoir r2("SECOND name", 30, 15, 25);
	r2.printAll();
	r2.compareSurfaces(r1);
	cout << r2.getName() << endl << r2.getWidth() << endl << r2.getLength() << endl << r2.getMaxDepth() << endl << endl;

	Reservoir r3("THIRD name", 10, 20, 40);
	r3.printAll();
	r3.compareSurfaces(r1);
	r3.compareSurfaces(r2);
	cout << "Rough volume of " << r3.getName() << ": " << r3.roughVolume() << endl << endl;
	return 0;
}