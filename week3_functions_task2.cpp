/*
Name: Tabitha Kimani
    Registration No: CT101/G/26591/25
    Course: BSc Computer Science
    */
#include <iostream>
using namespace std;
float calculateBill(float unitsconsumed,float rateperunit){return unitsconsumed*rateperunit;}
float applyDiscount(float unitsconsumed,float bill){if (unitsconsumed>=100)
{
	 return bill=unitsconsumed*0.1;
	 }
	 else{
		 return 0;
	 }
}
	 int main()
	 {
	string customer_name;
	float units_consumed;
	float rate_per_unit;
	float bill;
	float discount;
	float final_amount;
	
	
	cout<<"name:TABITHA KIMANI:"<<endl;
	cout<<"REG.NO:CT101/G/26591/25:"<<endl;
	
	
	
	

cout<<"enter the customer name:"<<endl;
cin>>customer_name;

cout<<"enter the units consumed:"<<endl;
cin>>units_consumed;

cout <<"========== WATER BILL =========="<<endl;
    cout << "Customer Name: " <<customer_name << endl;
    cout << "Units Consumed: " << units_consumed << endl;
    cout << "Bill Before Discount: " << bill << endl; 
    cout << "Discount: " << discount << endl;
    cout << "Final Amount Payable: " << final_amount << endl;
    cout << "================================"<<endl;
    
    return 0;
    
}
    