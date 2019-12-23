#include<iostream>
#include<string>
using namespace std;

class contact{
	private:
		string name;
		long long number;
		string email;
		string city;
			public:
				contact(){
			number=0;		
				}
		
			//Parametrized Constructer
			contact(string a, long long b, string c, string d){
				name=a;
				number=b;
				email=c;
				city=d;
			}
			//Settter and getter Functions 
		 setvalue(){
			cout<<"Enter Name\n";
			cin>>name;
			cout<<"Enter Number\n";
			cin>>number;
			cout<<"Enter Email\n";
			cin>>email;
			cout<<"Enter City\n";
			cin>>city;
		}
		
		string getdata_name(){
			string a=name;
			return a;
		}
		long long getdata_number(){
			return number;
		}
		string getdata_email(){
			return email;
		}
		string getdata_city(){
			return city;
		}
		
 void display(){
 	cout<<"Name of Person::"<<name<<endl;
 	cout<<"Phone Number ::"<<number<<endl;
 	cout<<"Email Address ::"<<email<<endl;
 	cout<<"Name of City :::"<<city<<endl;
 }		
 
 
};

class list{
	private:
	string checkname;
	public:
	contact array[10];
	contact array2[10];


//Addding Contacts		
void add_contact(){
	for(int a=0; a<10;a++){	
	int count=0;
	cout<<"Enter Details::\n";
	array[a].setvalue();
	cout<<endl;
	cout<<"Do you want to add more contacts??\n for Yes 0 and for No 1\n";
	cin>>count;
	if(count!=0){
		break;
	}
	}
}
//Removing Contacts
void remove_contact(int x){
	array[x]=array2[x];
	
	cout<<"Deleted Successfully!\n"<<endl;
}	
	//Displaying all contacts in the array
	void display_contacts(){
		for(int a=0;a<10;a++){
	array[a].display();
	cout<<endl;
	
		}
	}
	//Number of Contacts
	void num_of_contacts(){
		int num=0;
		for(int a=0;a<10;a++){
			if(array[a].getdata_number()!=0){
			num++;
			}
		}
		cout<<"\nNumber of Contacts in Array are:::"<<num<<endl;;
	}
	
	//Searching contacts by name
void search_contact(){
	cout<<"Enter the name of Contact that you want to search\n";
	cin>>checkname;
	for(int a=0; a<10;a++){
		if(array[a].getdata_name()==checkname){
			array[a].display();
			break;
		}
	}
}

//saving Contact at particular index 

void changeplace(){
	int index;
	cout<<"Enter the Index Number \n";
	cin>>index;
	if(array[index].getdata_number()==0){
		
			for(int a=0; a<10;a++){	
	cout<<"Enter Details::\n";
	array[a].setvalue();
	cout<<endl;
	}
		}
		else{
			for(int a=0;a<10;a++){
				if(array[a].getdata_number()!=0){
				array2[a].setvalue()==array[a].setvalue();
				cout<<"Enter Details::\n";
	         array[a].setvalue();
	           cout<<endl;
	           for(int a=0; a<10; a++){
	           	if(array[a].getdata_number()==0){
	           		array[a].setvalue()==array2[a].setvalue();
	           		break;
				   }
			   }
				}
		}
		} 

	
		}
	
};

int main() 
	{
	list add;
	int count=0, check=0, index, del,  stop=0, end=1;
	for(;;){
		cout<<"...........................................................................\n";
	cout<<"\n\nEnter what you want to do\n";
	cout<<"for adding contacts enter:: 0\n";
	cout<<"for remove contact on a specific index enter::1\n";
	cout<<"for checking the number of Contacts enter:: 2 \n";
	cout<<"for searching a  contact enter:: 3 \n";
	cout<<"for display all saved contacts enter:: 4 \n";
	cout<<"for adding contact at any index enter:: 5 \n";
	cout<<"for saving Contacts in a File enter:: 6 \n";
	cout<<"For loading contacts from the file:: 7 \n";
	cout<<"for stopping program enter :: 8 \n";
	cout<<"------------------------------------------------------------------------------\n";
	cin>>check;
	if (check==8){
		break;
	}
	switch(check){
		case 0:
			add.add_contact();
			break;
			case 1:
		cout<<"Enter the Index of Contact which you want to delete\n";
		cin>>del;
		add.remove_contact(del);
		break;
	case 4:
		cout<<"\nHere are the all contacts\n\n";
		add.display_contacts();
		break;
		case 2:
			add.num_of_contacts();
			break;
	case 5:
	add.search_contact();
	case 6:
	add.changeplace();	
}
}
return 0;
}
