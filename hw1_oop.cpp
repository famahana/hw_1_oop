#include <iostream>
using namespace std;

class Rectangle
{
private:
	int x;
	int y;
	int height;
	int width;
public:
	int getX()
	{
		cout << "Enter X: ";
		cin >> x;
		return x;
	}
	int getY()
	{
		cout << "Enter Y: ";
		cin >> y;
		return y;
	}
	int getHeight()
	{
		cout << "Enter Height: ";
		cin >> height;
		return height;
	}
	int getWidth()
	{
		cout << "Enter Width: ";
		cin >> width;
		return width;
	}
	void setX(int n)
	{
		x = n;
	}
	void setY(int n)
	{
		y = n;
	}
	void setHeight(int n)
	{
		height = n;
	}
	void setWidth(int n)
	{
		width = n;
	}
	void show()
	{
		cout << "SETTERS:" << endl;
		cout << "X: " << x << " Y: " << y << " Height: " << height << " Width: " << width << endl;
		cout << "GETTERS:" << endl;
		cout << "X: " << getX() << " Y: " << getY() << " Height: " << getHeight() << " Width: " << getWidth() << endl;
	}
};

int main()
{
	Rectangle r1;
	r1.setX(100);
	r1.setY(200);
	r1.setHeight(1000);
	r1.setWidth(500);
	r1.show();

	return 0;
}