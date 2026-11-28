
#include <iostream>
using namespace std;
cout<<"name:TABITHA KIMANI:"<<endl;
	cout<<"REG.NO:CT101/G/26591/25:"<<endl;


class medicalStaff
{
protected:
    string staffname;
    int staffID;

public:
    medicalStaff(string name, int id)
    {
        staffname = name;
        staffID = id;
	}
    virtual double calculateSalary() = 0;

    void displayDetails()
    {
        cout<<"Staff Name:"<<staffname<<endl;
        cout<<"Staff ID:"<<staffID<<endl;
    }
};


class Doctor:public medicalStaff
{
private:
    double basicSalary;
    double allowance;

public:
    Doctor(string name, int id, double basic, double allow)
        : medicalStaff(name, id)
    {
        basicSalary = basic;
        allowance = allow;
    }

    double calculateSalary()
    {
        return basicSalary + allowance;
    }
};


class Nurse:public medicalStaff
{
private:
    double basicSalary;
    double overtimePay;

public:
    Nurse(string name, int id, double basic, double overtime)
        : medicalStaff(name, id)
    {
        basicSalary = basic;
        overtimePay = overtime;
    }

    double calculateSalary() 
    {
        return basicSalary + overtimePay;
    }
};
     
int main()
{
    Doctor d("Joseph", 200, 95000, 45000);
    Nurse n("Jeremy", 201, 90000, 2500);

    medicalStaff *ptr;

    
    ptr = &d;

    cout<<"DOCTOR DETAILS"<< endl;
    ptr->displayDetails();
    cout<< "Salary:"<<ptr->calculateSalary()<< endl;

    cout<<endl;

    ptr=&n;

    cout<<"NURSE DETAILS"<<endl;
    ptr->displayDetails();
    cout<<"Salary:"<<ptr->calculateSalary()<< endl;

    return 0;
}
 