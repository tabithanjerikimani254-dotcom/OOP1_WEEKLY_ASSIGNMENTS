#include<iostream>
using namespace std;
 int main(){
	 double balance;
	 double withdrawal;
	 
	 cout<<"name:TABITHA KIMANI:"<<endl;
	cout<<"REG.NO:CT101/G/26591/25:"<<endl;
	 
	 cout<<"enter the balance"<<endl;
	 cin>>balance;

	 
	 while (balance>0){
		 cout<<"enter withdrawal amount"<<endl;
		 cin>>withdrawal;
		 
		 if (withdrawal>balance){
			 cout<<"insufficient balance!"<<endl;
			 }
			 if(withdrawal <= 0){
        cout<<"Enter a valid withdrawal amount."<<endl;
    }
    	

    balance=balance-withdrawal;

    cout<<"Remaining balance:"<<balance<<endl;
    

    if(balance == 0){
        cout<<"Your balance is zero.Transaction ended"<< endl;
        break;
    }
}

return 0;
	 }
 