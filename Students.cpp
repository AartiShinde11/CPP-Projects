#include<bits/stdc++.h>
using namespace srd;

class User{
	private:
		string username,password;
		public:
			User(string name,string pass){
				username=name;
				password=pass;
				
			}
	
};

class UserManager{
	private:
		vector<User> users;
	
	public:
		void registerUser{
			string username,password;
			cout<<"Enter user Name: ";
			cin>>username;
			cout<<"Enter Password:";
			cin>>password;
			
			User newUser(username,password);
			users.push_back(username,password);
			
			cout<<"\t\t User Registration Successfully......"<<endl;
		
		}
	
};

main(){
	UserManager usermanage;
	int op;
	cout<<"\n\n\t\t1.Register User"<<endl;
	cout<<"\t\t2.Login"<<endl;
	cout<<"\t\t3.Show User List"<<endl;
	cout<<"\t\t4"
}

