#include <iostream>

using namespace std ;



class AccountHolder{
	char name[20] ;
	char type[20] ;
	int balance ;
	int acc_no ;
	
	public:
	void getDetails(){
		cout << "\nEnter Name: " ;
		cin >> name ;
		
		cout << "\nEnter account Number: " ;
		cin >> acc_no ;	
		
		cout << "\nEnter Account Type: " ;
		cin >> type ;
		
		cout << "\nEnter Account Balance: " ;
		cin >> balance ;
		
		cout << "\n Taking Data of " << name << " Completed." ;
	} 
	
	void showDetails(){
		cout << "\nShowing Details: " ;
		cout << "\nName: "<< name << "\nAccount Number: "<< acc_no << "\nBalance: "<< balance << "\nAccount Type: " << type ;
	}
	
	void deposit( int amount ){
		if(amount >= 0){
			balance += amount ;
			cout << "\n Deposited Rs." << amount << " in " << name << "'s Account." ;
		}else{
			cout << "\nError Depositing amount." ;
		}
	}
	
	void withdraw( int amount ){
		if(amount >= 0 ){
			if(amount < balance){
				balance -= amount ;
				cout << "\nWithdrew Rs." << amount << " from " << name << "'s Account." ;
			}else{
				cout << "\nError Withdrawing: Cannot withdraw more than Rs." << balance << " from " << name << "'s Account.";
			}
		}else{
			cout << "\nAmount must be positive." ;
		}
	}
};

main(){
	AccountHolder Arjun ;
	Arjun.getDetails();
	Arjun.deposit(34) ;
	Arjun.showDetails() ;
	Arjun.withdraw(100000) ;
	Arjun.showDetails() ;
}
