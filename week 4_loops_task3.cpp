# include<iostream>
using namespace std;
string username;
string password;


int main(){
	string correctusername = "admin";
    string correctpassword = "12345";
    
    string username;
   string password;
   
   cout<<"name:TABITHA KIMANI:"<<endl;
	cout<<"REG.NO:CT101/G/26591/25:"<<endl;
 do{
	 cout<<"enter the username:"<<endl;
	 cin>>username;
	 
	 cout<<"enter the password:"<<endl;
	 cin>>password;
	 
	 if(username==correctusername&&correctpassword==password){
		 cout<<"access granted"<<endl;
	 }
	 else {
        cout<<"Incorrect credentials, try again."<< endl;
    }

} while (correctusername!=correctusername||correctpassword!=correctpassword);

return 0;

}
 	
