#include <iostream>
using namespace std;



class Vehicle {
protected:
    string brand;
    int yearOfManufacture;

public:
    void inputVehicle() {
cout <<"Enter Vehicle Brand: ";
 cin>>brand;

    cout<<"Enter Year of Manufacture: ";
    cin>> yearOfManufacture;
}

void displayVehicle() {
    cout<<"Brand: " << brand << endl;
    cout<<"Year of Manufacture:"<<yearOfManufacture<< endl;
}

};

class Car : public Vehicle {
private:
    int numberOfDoors;
    double engineCapacity;

public:
void inputCar() {
inputVehicle();

    cout << "Enter Number of Doors: ";
    cin >> numberOfDoors;

    cout << "Enter Engine Capacity: ";
    cin >> engineCapacity;
}

void displayCar() {
    displayVehicle();

    cout<<"Number of Doors:"<<numberOfDoors << endl;
    cout<<"Engine Capacity:"<<engineCapacity<<" CC" << endl;
}

};
int main() {

Car c1;

cout << "===== VEHICLE MANAGEMENT SYSTEM =====" << endl;

c1.inputCar();

cout << "===== CAR DETAILS =====" << endl;

c1.displayCar();

return 0;

};

