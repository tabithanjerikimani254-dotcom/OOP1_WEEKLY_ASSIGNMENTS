# include<iostream>
using namespace std;
int main(){
	string name;
	double basicsalary;
	double bonus;
	double totalsalary;
	 for(int i=1; i<=5; i++){
	 	
	 	cout<<"name:TABITHA KIMANI:"<<endl;
	cout<<"REG.NO:CT101/G/26591/25:"<<endl;
		 cout<<"enter the employee details:"<<i<<endl;
		 
		 cout<<"enter the employee name:"<<endl;
		 cin>>name;
		 cout<<"enter the basic salary:"<<endl;
		 cin>>basicsalary;
		   bonus=0.05*basicsalary;
		   totalsalary=basicsalary+bonus;
		   
		   
		   
    cout<<"----- EMPLOYEE REPORT -----"<<endl;
    cout<<"Employee Name:"<<name<<endl;
    cout<<"Basic Salary:"<<basicsalary<< endl;
    cout<<"Bonus:"<<bonus<<endl;
    cout<<"Total Salary:"<<totalsalary<< endl;
	 } 
	 
	 return 0;

}