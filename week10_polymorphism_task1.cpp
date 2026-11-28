# include <iostream>
using namespace std;

 cout<<"name:TABITHA KIMANI:"<<endl;
	cout<<"REG.NO:CT101/G/26591/25:"<<endl;
class Payment{
	public:
		 void processPayment(int amount){
			 cout<<"cash payment:KSH"<<amount<<endl;
			 cout<<"final amount:KSH"<<amount<<endl;
		 }
		

      void processPayment(double amount,double fee){
	double total=amount+fee;
	cout<<"card payment"<<endl;
	cout<<"final amount:ksh"<<total<<endl;
}
   void processPayment(double amount,double fee,double discount){
	   double total=amount+fee-discount;
	   cout<<"mobile payment"<<endl;
	   cout<<"final amount"<<total<<endl;
   }
   
};
int main(){
	Payment p;
	p.processPayment(1000);
	p.processPayment(2000.0,50.0);
	p.processPayment(3000.0,100.0,200.0);
	return 0;
}