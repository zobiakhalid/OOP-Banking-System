#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Name;
class Date;
class Account_Holder;
class Balance_Inquiry;
class New_account;

/**********************************************************************************

**********************************************************************************/
class Name{                                 // Name Class Defining 
public:
	string First_Name;
	string Middle_Name;
	string Last_Name;
	Name(){
		First_Name = "";
		Middle_Name = "";
		Last_Name = "";
	};
public:
	void Set_Name(){
		cout << "Enter Your First Name " << endl;
		cin >> First_Name;
		cout << "Enter Your Middle Name " << endl;
		cin >> Middle_Name;
		cout << "Enter  Your Last Name " << endl;
		cin >> Last_Name;
	}
	void Display_Name(){
		cout << "Your Full Name is " << First_Name << " " << Middle_Name << " " << Last_Name << endl;
	}
};
/**********************************************************************************

**********************************************************************************/
class Dates{
	public:                                           //All funtions dates class data members defined 
		int date,b_date,with_date,dep_date,cr_date;
		string month,b_month,with_month,dep_month,cr_month;
		int yr,b_yr,with_yr,dep_yr,cr_yr;
/**********************************************************************************

**********************************************************************************/
		Dates(){                                                    // default constractor
			int date,b_date,with_date,dep_date,cr_date=0;
			string month,b_month,with_month,dep_month,cr_month="";
			int yr,b_yr,with_yr,dep_yr,cr_yr=0;
		}
/**********************************************************************************

**********************************************************************************/
	public:
		void set_date();
		void set_dob();
		void set_wdate();                    //Set of funtions Declaration 
		void set_depdate();
		void set_credate();
		void Display_date();
		void Display_dob();
		void Display_wdate();
		void Display_depdate();
		void Display_credate();
};                                          // set of Funtion Defining oustide the class with the help of scope operator
void Dates::set_date(){
	cout << "Enter Date ";
	cin >> date;
	cout << " Month ";
	cin >> month;
	cout << " Year "<<endl;
	cin >> yr;
}
void Dates::set_dob(){
	cout << "Enter Birth Date ";
	cin >> b_date;
	cout << "Enter Your Month ";
	cin >> b_month;
	cout << "Enter  Your Year " << endl;
	cin >> b_yr;
}
void Dates::set_wdate(){
	cout << "Enter Withdrawing Date ";
	cin >> with_date;
	cout << " Month ";
	cin >> with_month;
	cout << " Year " << endl;
	cin >> with_yr;
}
void Dates::set_depdate(){
	cout << "Enter Deposit Date ";
	cin >> dep_date;
	cout << " Month ";
	cin >> dep_month;
	cout << " Year " << endl;
	cin >> dep_yr;
}
void Dates::set_credate(){
	cout << "Enter Account Creation Date " << endl;
	cin >> cr_date;
	cout << " Month ";
	cin >> cr_month;
	cout << " Year " << endl;
	cin >> cr_yr;
}
/**********************************************************************************

**********************************************************************************/
void Dates::Display_date(){
	cout << "The Date is " << date << "/" << month << "/" << yr << endl;
}
void Dates::Display_dob(){
	cout << "The Date of Birth is on " << b_date << "/" << b_month << "/" << b_yr << endl;
}
void Dates::Display_wdate(){
	cout << "The Date of Withdraw is on " << with_date << "/" << with_month << "/" << with_yr << endl;
}
void Dates::Display_depdate(){
	cout << "The Date of Amount Deposit is on " << dep_date << "/" << dep_month << "/" << dep_yr << endl;
}
void Dates::Display_credate(){
	cout << "The Date of Account Created is on " << cr_date << "/" << cr_month << "/" << cr_yr << endl;
}
/**********************************************************************************

**********************************************************************************/

class Balance_Inquiry{
	public:
	    int amount;
	    Dates date;
		int bal_inq,deposit,time,withdraw,balance,gover_tax,service_charges,total_balance,total_remains,todays,wdate,total;
	public:
		Balance_Inquiry(){
			int bal_inq,deposit,time,withdraw,balance,gover_tax,service_charges,total_balance,total_remains,todays,wdate,total=0;
		}
	public:
		int Balance_deposit();
		void Display_deposit_amount();
		int Balance_withdraw();
		void Display_withdraw_amount();
		int Display_Balance_Inquiry();
		
};
/**********************************************************************************

**********************************************************************************/
int Balance_Inquiry:: Balance_deposit(){
	cout<<"Enter Amount You want to Deposit "<<endl;
	cin>>amount;
	date.set_depdate();                                                     // Deposit funtion that withdraws according to taxes, rules and charges
	return amount;
}
void Balance_Inquiry::Display_deposit_amount(){
		cout<<"Your Balance after Deposit Amount is "<<amount<<endl;
		date.Display_depdate();
		
	}
/**********************************************************************************

**********************************************************************************/
int Balance_Inquiry::Balance_withdraw(){
	cout<<"Enter Amount You want to Withdraw "<<endl;
	cin>>amount;
	date.set_wdate();
	cout<<"Enter Today's Date"<<endl;
	balance=total_remains;
	while(withdraw<=total_remains);
	if(withdraw>total_remains){
		cout<<"Iinsufficienr Ammount"<<endl;
		cout<<"your Total Balance is "<<total_remains<<endl;
	}                                                                              // Withdraw funtion that withdraws according to taxes, rules and charges
	if(withdraw>=50000){
	service_charges=50000*0.2/100;
	total_remains=(total_remains-withdraw)-service_charges; 
	}
	cout<<"How many times you are withdraw today"<<endl;
	cin>>time;
	if(withdraw>=50000 && time >=2){
		gover_tax=50000*2.5/100;
		total_remains=(total_remains-withdraw)-gover_tax;
	}
	total_remains=total_remains-withdraw;
	return total_remains;
}
/**********************************************************************************

**********************************************************************************/
void Balance_Inquiry::Display_withdraw_amount(){
		cout<<"Your Amount Withdraw "<<amount<<endl;
		date.Display_wdate();
		cout<<"your Totla Remaing Balance after Withdraw is "<<amount<<endl;
}
/**********************************************************************************

**********************************************************************************/
int Balance_Inquiry::Display_Balance_Inquiry(){
	amount=amount+total_remains;   
	return amount;                      // Total Balance deposit funtion +withdraws funtions results
}
/**********************************************************************************

**********************************************************************************/
class New_account{                               // Class for creation of new account in bank system

	public:
		int op;
		Name complete_name;
		string CNIC;
		Dates date;
		int phone_num;
		string Email;
		string Address;
		int account_num;
		int Employee_ID;
		int username;
		Balance_Inquiry bal;
		string password;
	    int amount;
	New_account(){
		int op=0;
		string CNIC="";
		string Email="";
		string Address="";
		int account_num=0;
		int Employee_ID=0;
		int username=0;
		string password="";
		int amount=0;
	}	
	public:
		void set_New_account();
		void display_New_account();
};
/**********************************************************************************

**********************************************************************************/

void New_account::set_New_account(){
	cout<<"Employee/Customer "<<endl;
	cout<<"1- Empployee "<<endl;
	cout<<"2- Customer "<<endl;
	cout<<"Enter your Choice"<<endl;
	cin>>op;
	while(op==1||op==2);
	if(op==1){
		cout<<"\n************************************************************************************************************************"<<endl;
		cout<< "\n\t                                        Employee Account  " <<endl;
		cout<<"\n\n************************************************************************************************************************"<<endl;
		cout<<" Create your Login ";
		cout<<"Login Your Employee ID "<<endl;
		cin>>Employee_ID;
		cout<<"Create Your Username"<<endl;
		cin>>username;
		cout<<"Create your Password"<<endl;
		cin>>password;
	}
	if(op==2){
		cout<<"\n************************************************************************************************************************"<<endl;
		cout<< "\n\t                                        Customer Account  " <<endl;
		cout<<"\n\n************************************************************************************************************************"<<endl;
		cout<<" Create your Login ";
		cout<<"Create Your Username"<<endl;
		cin>>username;
		cout<<"Create your Password"<<endl;
		cin>>password;
	}
		complete_name.Set_Name();
		cout << "Enter Your CNIC " << endl;
		cin >> CNIC;
		date.Display_dob();
		cout<<"Enter Your Phone Number "<<endl;
		cin>>phone_num;
		cout << "Enter Your Email " << endl;
		cin >> Email;
		cout << "Enter Your Address " << endl;
		cin >> Address;
		cout<<"Enter your desired Account Number"<<endl;
		cin>>account_num;
		date.set_credate();
}
/**********************************************************************************

**********************************************************************************/
void New_account::display_New_account(){
	complete_name.Display_Name();
	cout << "Your CNIC is "<< CNIC << endl;
	date.Display_dob();
	cout<<"your Hand Phone Number is "<<phone_num<<endl;
	cout << "Your Address is " << Address << endl;
	cout << "Your Email is " << Email << endl;
	cout<<"Your Account Type is no "<<op<<" type"<<endl;
	cout<<"Your account Number is "<<account_num<<endl;
	cout<<"Account Deposited "<<amount<<endl;
	date.Display_credate();
	date.Display_depdate();
}
/**********************************************************************************

**********************************************************************************/
class Saving_account : public New_account{
	public:
		int op, savings,deposits, ammo;
		Balance_Inquiry bal;
	Saving_account(){
		op, savings, deposits, ammo=0;
	}
	public:
		int set_Saving_account(){
	cout<<"\n************************************************************************************************************************"<<endl;
	cout<< "\n\t                                        Saving Account  " <<endl;
	cout<<"\n\n************************************************************************************************************************"<<endl;
	cout<<" Customer is paid 1% interest per month over the minimum balance maintained during that month ";
	cout<<"Your Saving Account will be created after while "<<endl;
	cout<<"Youe Need to fill the recquired details for Account creation"<<endl;
	cout<<"Deposite Amount atleast 5000 or more for account creation "<<endl;
		op=bal.Balance_deposit();
		while(op<=5000){
			cout<<"Atleast 5000 or more for account creation"<<endl;
			deposits=bal.Balance_deposit();
			ammo=op*0.2/100;
			deposits=deposits+ammo;
		}
		return deposits;
	}	
};

/**********************************************************************************

**********************************************************************************/
class checking_account : public New_account{
	public:
	int op;
	checking_account(){
		op=0;
	}
	public:
		int set_checking_account(){
	cout<<"\n************************************************************************************************************************"<<endl;
	cout<< "\n\t                                        Checking Account  " <<endl;
	cout<<"\n\n************************************************************************************************************************"<<endl;
	cout<<" Customer is not paid any interest "<<endl;
	cout<<" Customer is paid 1% interest per month over the minimum balance maintained during that month in Saving Accounts  "<<endl;
	cout<<" Its okay now you will also get bank different service and offers " <<endl;
	cout<<"Your Checking Account will be created after while "<<endl;
	cout<<"Youe Need to fill the recquired details for Account creation"<<endl;
	cout<<"Deposite Amount atleast 5000 or more for account creation "<<endl;
		op=bal.Balance_deposit();
		while(op<=5000){
			cout<<"Atleast 5000 or more for account creation"<<endl;
			bal.Balance_deposit();
		}
	}
};
/**********************************************************************************

**********************************************************************************/
class Account_Holder{
	public:
		int Employee_ID;
		int username;
		string password;
		int op;
		New_account new_acc;
		Balance_Inquiry bal;
	Account_Holder(){
		op=0;
	}
	public:
		void Set_Account_Holder();
		void Display_Account_Holder();
};
void Account_Holder::Set_Account_Holder(){
		cout<<"\n************************************************************************************************************************"<<endl;
		cout<< "\n\t                                        Login  " <<endl;
		cout<<"\n\n************************************************************************************************************************"<<endl;
		cout<< "\n\t                                        1-Employee Login  " <<endl;
		cout<< "\n\t                                        2-Customer Login  " <<endl;
		cout<<"Enter Your Login OPtion"<<endl;
		cin>>op;
		if(op==1){
			cout<<"Enter your Employee ID"<<endl;
			cin>>Employee_ID;
			cout<<"Enter Your Username"<<endl;
			cin>>username;
			cout<<"Enter your Password"<<endl;
			cin>>password;
		}
		if(op==2){
			cout<<"Enter your Customer ID"<<endl;
			cin>>username;
			cout<<"Enter your Password"<<endl;
			cin>>password;
		}
}
void Account_Holder::Display_Account_Holder(){
	new_acc.display_New_account();
	cout<<"Your Login Detail is "<<endl;
	cout<<"Username: "<<username <<endl;
	cout<<"Password: "<<password <<endl;
	bal.Balance_withdraw();
	bal.Display_withdraw_amount();
	bal.Display_Balance_Inquiry();
	bal.Balance_deposit();
	bal.Display_deposit_amount();
}

void write_account();	//function to write record in binary file
void display_sp(int);	//function to display account details given by user
void modify_account(int);	//function to modify record of file
void delete_account(int);	//function to delete record of file
void display_all();		//function to display all account details
void deposit_withdraw(int, int); // function to desposit/withdraw amount for given account
void intro();
int main(){
	Name N;
	Dates D;
	New_account Na;
    Account_Holder AH;
	Balance_Inquiry BI;
	char num;
	cout<<"\n************************************************************************************************************************"<<endl;
		cout<< "\n\t                                        Welcome To ABC Bank " <<endl;
		cout<< "\n\t                                 ABC Bank Ap kae Khuwabon ka Muhafiz " <<endl;
		cout<<"\n\n************************************************************************************************************************"<<endl;
		do {
			system("cls");
			cout<< "\n\t                                            Main Menu" <<endl;
			cout<< "\n\t                                      Press the desired Choice " <<endl;
			cout<< "\n\t                                        1- Create New Account " <<endl;
			cout<< "\n\t                                        2- Deposit Money " <<endl;
			cout<< "\n\t                                        3- Withdraw Money " <<endl;
			cout<< "\n\t                                        4- Balance Inquiry" <<endl;
			cout<< "\n\t                                        5- Account Holder " <<endl;
			cout<< "\n\t                                        6- Mini Statment " <<endl;
			cout<< "\n\t                                        7- All Accounts List " <<endl;
			cout<< "\n\t                                        7- Delete Account " <<endl;
			cout<< "\n\t                                        7- Exit " <<endl;
			cin>>num;
			system("cls");
		switch(num)
		{
		case '1':
			Na.set_New_account();
			break;
		case '2':
			cout<<"\n\n\tEnter The account No. : "; cin>>Na.account_num;
			BI.Balance_deposit();
			break;
		case '3':
			cout<<"\n\n\tEnter The account No. : "; cin>>Na.account_num;
			BI.Balance_withdraw();
			break;
		case '4': 
			cout<<"\n\n\tEnter The account No. : "; cin>>Na.account_num;
			BI.Display_Balance_Inquiry();
			break;
		case '5':
			AH.Set_Account_Holder();
			AH.Display_Account_Holder();
			break;
		 case '6':
			AH.Display_Account_Holder();
			break;
		case '7':
			display_all();
			break;
		case '8':
			cout<<"\n\n\tEnter The account No. : "; cin>>num;
			delete_account(num);
		break;
			case '9':
			cout<<"\n\n\tThanks for using bank managemnt system";
		break;
		 default :cout<<"\a";
		}
		cin.ignore();
		cin.get();
	}while(num!='9');
	system("pause");
	return 0;
}


void delete_account(int n)
{
	Account_Holder acc_hol;
	Balance_Inquiry balan;
	ifstream inFile;
	ofstream outFile;
	inFile.open("Account_Holder.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	outFile.open("Temp.dat",ios::binary);
	inFile.seekg(0,ios::beg);
	while(inFile.read(reinterpret_cast<char *> (&acc_hol), sizeof(Account_Holder)))
	{
		
			outFile.write(reinterpret_cast<char *> (&acc_hol), sizeof(Account_Holder));
		
	}
	inFile.close();
	outFile.close();
	remove("Account_Holder.dat");
	rename("Temp.dat","account.dat");
	cout<<"\n\n\tRecord Deleted ..";
}
void display_all()
{
	Account_Holder acc_hol;
	ifstream inFile;
	inFile.open("Account_Holder.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	cout<<"\n\n\t\tACCOUNT HOLDER LIST\n\n";
	cout<<"====================================================\n";
	cout<<"A/c no.      NAME           Type  Balance\n";
	cout<<"====================================================\n";
	while(inFile.read(reinterpret_cast<char *> (&acc_hol), sizeof(Account_Holder)))
	
	inFile.close();
}
