#include <iostream>
using namespace std;

class Reservoir {
	string name;
	double width;
	double height;
	double maxDepth;
	static int Count;
public:
	//CONSTRUCTORS
	Reservoir() { Count++; }
	Reservoir(string name, double width, double height, double maxDepth)
	{
		this->name = name;
		this->width = width;
		this->height = height;
		this->maxDepth = maxDepth;
	}

	//METHODS
	double roughVolume();
	void compareSurfaces();

	//GETTERS
	string getName();
	double getWidth();
	double getHeight();
	double getMaxDepth();
	//SETTERS
	void setName(string new_name);
	void setWidth(double new_width);
	void setHeight(double new_height);
	void setMaxDepth(double new_maxDepth);
};

int main()
{
	//SHOWCASE ALL HERE
	return 0;
}