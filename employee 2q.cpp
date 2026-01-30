#include<iostream>
using namespace std;
class emp{
	public:
		int id,bsl,tsl=0;
		string name;
		void getEmployeeDetails() {
		cout<<"Employee ID:";
		cin>>id;
		cout<<"Name:";
		cin>>name;
		cout<<"Basic Salary:";
		cin>>bsl;}
		void calculateSalary(){
			tsl=bsl;
		}
		void displayEmployeeDetails(){
			cout<<"Employee Details\n"<<endl;
			cout<<"ID:"<<id<<endl;
			cout<<"Name:"<<name<<endl;
			cout<<"Basic salary:"<<bsl<<endl;
			cout<<"Total salary:"<<tsl<<endl;
		}
};
class manager: public emp{

	public:
		int allowance;
		void getManagerDetails(){
			cout<<"Allowance:";
			cin>>allowance;
		}
		void calculatesalary() {
			tsl=bsl+allowance;
		}
		void displayManagerDetails(){
			cout<<"Employee Details\n"<<endl;
			cout<<"ID:"<<id<<endl;
			cout<<"Name:"<<name<<endl;
			cout<<"Basic salary:"<<bsl<<endl;
			cout<<"Total salary:"<<tsl<<endl;
		}
};
int main()
    {
      manager m;
      m.getEmployeeDetails();
      m.getManagerDetails();
      m.calculatesalary();
      m.displayManagerDetails();
	}
