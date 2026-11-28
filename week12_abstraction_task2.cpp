# include <iostream>
using namespace std;

class shape{
	public:
		virtual double calculateArea()=0;
};

class circle:public shape{
	private:
		double radius;
		
		public:
			circle(double r){
				radius=r;
			}
			
			double calculateArea(){
				return 3.142*radius*radius;
			}
		};
		
		class Rectangle:public shape{
			
			private:
				double length;
				double width;
				
				public:
					Rectangle(double l, double w){
					length=l;
					width=w;
		}
		double calculateArea()
    {
        return length * width;
    }
};

int main()
{
    circle c(7);
    Rectangle r(10, 5);

    shape *ptr;

    ptr = &c;

    cout<<"Area of Circle:"<<ptr->calculateArea()<< endl;

    
    ptr = &r;

    cout<<"Area of Rectangle:"<< ptr->calculateArea() << endl;

    return 0;
}