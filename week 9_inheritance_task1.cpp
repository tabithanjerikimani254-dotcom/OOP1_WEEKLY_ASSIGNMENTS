# include <iostream>
using namespace std;

class Person{
	protected:
		string name;
		int age;
	
		
		public:
			void inputPerson(){
				cout<<"enter Name:"<<endl;
				cin>>name;
				
				cout<<"enter the age:"<<endl;
				cin>>age;
				}
				 void displayPerson(){
					 cout<<"name:"<<name<<endl;
					 cout<<"age:"<<age<<endl;
          }
          };
          
          class Student:public Person{
			  private:
			  	string admNumber,studClass;
			  	
			  	public:
			  		void inputStudent(){
						  inputPerson();
						  cin.ignore();

    cout<<"Enter Admission Number: ";
    cin>>admNumber;

    cout << "Enter Class: ";
    cin>>studClass;
}


void displayStudent() {
    displayPerson();

    cout<<"Admission Number:"<< admNumber << endl;
    cout<<"Class:"<< studClass<< endl;
}

};
	
		

int main() {
Student s1;

cout << "===== SCHOOL MANAGEMENT SYSTEM ====="<< endl;

s1.inputStudent();

cout<<"===== STUDENT DETAILS ====="<< endl;

s1.displayStudent();

return 0;

};
					  
		  
