//2023111359 �ְ���
//Box.h
// include ����!!
class Box {
private:
	double height;
	double length;
	double width;
	bool space;
public:
	Box();
	Box(double, double, double, bool);
	void setHeight(double);
	void setLength(double);
	void setWidth(double);
	void print();
	/*double getHeight(); // optional
	double getLengthj(); // optional
	double getWidth(); // optional*/
	double getVolume();
};
