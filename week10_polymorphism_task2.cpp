# include <iostream>
using namespace std;

class shape{
	public:
		virtual void draw(){
			cout<<"drawing shape"<<endl;
		}
};

class circle:public shape{
	
	public:
		void draw(){
			cout<<"Drawing circle"<<endl;
		}
};

class Rectangle:public shape{
	
   public:
    void draw()
    {
        cout <<"Drawing Rectangle"<< endl;
    }
};


class triangle:public shape{
	public:
		void draw(){
			cout<<"drawing triangle"<<endl;
		}
};

int main(){
	shape*ptr;
	circle c;
	Rectangle r;
	triangle t;
	 ptr = &c;
    ptr->draw();

    ptr = &r;
    ptr->draw();

    ptr = &t;
    ptr->draw();

    return 0;
}
	
