
#include <iostream>
#include <iomanip>

using namespace std;
int main(){
	//declare variables
	double rent,uprent;
    string fname,lname, building,building2, vacant, street, state, city, zipcode , doorsign, doorsign2;
	int option,number, tenant;


	char choice;

	tenant = 250; //default amount

	do
	{
		cout <<"\n\t******************MENU********************";
		cout <<"\n\t*                                        *";
		cout <<"\n\t*      1. Add tenant                     *"; 
		cout <<"\n\t*      2. New tenant address details     *"; 
		cout <<"\n\t*      3. Move a tenant                  *";
		cout <<"\n\t*      4. Remove tenant                  *";
		cout <<"\n\t*      5. Update rent for vacant unit    *";
		cout <<"\n\t*      6. Exit                           *";
		cout <<"\n\t*                                        *";
		cout << "\n\t*****************************************";
		cout << "\n\t  Please choose an option: ";
		cin>> option;

		switch (option){
		
		case 1: cout << "\n\tAdd number of new tenants:";
                        cin>> number;
                        tenant += number;
                        cout<<"\n\t Your current amount of tenants is:"<<tenant<<endl;
			     break;

		case 2: cout << "\n\t Enter tenant details. Start with first name followed by last name with a space between them:";
			    cin>>fname>>lname;
				cout << "Enter in this order: Building number, Street, Zipcode, city, and State(abbreviated for exple:PA for Pennsylvania) Start with building number :";
				cin>>building;
                cout<< "Enter the street:"<<endl;
				cin>>street;
				cout<< "Enter the zipcode:"<<endl;
				cin>>zipcode;
				cout<< "Enter the city:"<<endl;
				cin>>city;
				cout<< "Enter the state:"<<endl;
				cin>>state;
                cout<< "Apt letter or number:"<<endl;
				cin>>doorsign;
				cout<< "Enter your rent:(omit $ sign)"<<endl;
				cin>>rent;
				cout<<"YOUR NEW TENANT'S DETAILS ARE:"<<endl;
				cout<<"Name:"<<fname +" " + lname <<endl;
				cout<<"Adress:"<<building + ","+ street +" "+ zipcode+","+ city+","+state+"." << "Apt:" " "<< doorsign <<endl;
				cout<<"Rent:"<<"$"<<rent<<endl;
				break;

		case 3:  cout<< "\n\t Transfer tenant to new unit, Enter name, old and new building. Start with first and last name and put a space between them:";
             cin>>fname>>lname;
			 cout<<"Enter Old building number:"<<endl;
             cin>>building;
			 cout<<"Enter Old Apt letter/number:"<<endl;
			 cin>>doorsign;
            cout<<"New building:"<<endl;
             cin>> building2;
			 cout<< "New Apt letter/number"<<endl;
			 cin>>doorsign2;
                 cout<<fname + lname<<" " "changed building from:" << "Building:" <<building +" " + doorsign<<"," "to"<< " " "Building:" " "<<building2 +" "+ doorsign2<<endl;
	
		cout<< "Do you wish to update the full adress? Enter Y/N"<<endl;
		cin>>choice;
		if(choice == 'Y' || choice == 'y'){
			cout << "Enter values in this order: Street, Zipcode, city, and State(abbreviated form exple:PA for Pennsylvania) Start with the street:";
			cin>>street;
			cout<< "Enter the zipcode:"<<endl;
			cin>>zipcode;
			cout<< "Enter the city:"<<endl;
			cin>>city;
			cout<< "Enter the state:"<<endl;
			cin>>state;

			cout <<"Tenant:" << fname +" " + lname << " " "new address is:" <<building2 + ","+ street +","+ zipcode+","+ city+","+state+"." << "Apt:" " "<< doorsign2 <<endl;
		}
		if(choice == 'N' || choice == 'n')
		       {
            cout<<"Task complete";
		} 
	
		break;
             
			 case 4: cout<<"\n\tEnter the name and building of the tenant you wish to remove. Start with first name followed by last name:";
			cin>>fname>>lname;
			cout<<"Building:"<<endl;
			cin>>building;
			cout<<"Apt number/letter"<<endl;
			cin>>doorsign;

			cout<<"\n\t Tenant:" <<fname +" "+ lname << "," "in building:" " "<< building<< " " "in Apt:"<< doorsign<< " " "was removed from the list with its full address." <<endl;
            tenant-= 1;
            cout<<"\n\t Your updated number of tenants is:"<<tenant<<endl;
             break;
			
		case 5: cout<<"\n\t Start by entering the full adress of the Vacant Unit.Type Building ,Street, Zipcode, City, State(in abbreviated form PA for Pennsylvania) Start with the building number:";
               cin>>building;
			   cout<<"Enter your street:"<<endl;
			   cin>>street;
			   cout<<"Enter your zipcode:"<<endl;
			   cin>>zipcode;
			   cout<<"Enter your city:"<<endl;
			   cin>>city;
			   cout<<"Enter your state:"<<endl;
			   cin>>state;
			   cout<< "Enter Apt letter/number"<<endl;
			   cin>>doorsign;
			   cout<< "Update price for listing:(omit $ sign)"<<endl;
			   cin>>uprent;
       cout<<"NEW AVAILAIBLE UNIT:" <<building + ","+ street +","+ zipcode+","+ city+","+state+"." << "Apt:" " "<< doorsign <<endl;
	   cout<< "Rent price for this vacant unit is:"<< "$"<< uprent;
	    break;

		default: if(option != 6)
					 cout<< "\n\tInvalid option. Please try again" <<endl;;
			break;
		}

	} while (option != 6);
	system("pause");
	return 0;
}

