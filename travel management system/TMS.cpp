#include<iostream>
using namespace std;

void PrintInfo(string _name[],string _contact[],string _nic[],string _email[],int e, double f)
{
	cout<<"\t\t\t\tInvoice Generated"<<endl;
	cout<<"\t\t\t\tYOUR INFORMATION"<<endl;
	cout<<"\t\t\t\tTotal Number of Persons: "<<e<<endl;
	for(int x=0;x<e;x++)
	{	
		cout<<"Serial No. "<<x+1<<endl;
		cout<<"your name is:"<<_name[x]<<endl;
		cout<<"your contact is:"<<_contact[x]<<endl;
		cout<<"your nic is:"<<_nic[x]<<endl;
		cout<<"your email is:"<<_email[x]<<endl<<endl;
	}
		cout<<"Total Package Invoice Amount is:"<<f*e<<"/="<<endl;
		cout<<"\t\t\t\tYOUR FORM IS SUBMITTED"<<endl;				
}

void GetInfo(double pkgamount)
{
	
	int person; 
	cout << "\t\t\t\t=====================" << endl << endl << endl;
	cout<<"How Many Person Do You Want To Add"<<endl;
	cin>>person;
	string name[person], contact[person], nic[person], email[person];
	for(int i=0; i<person; i++)
	{
		cout<<"\t\t\t\t Serial No: ("<<i+1<<")"<<endl;
		cout<<"\t\t\t\t ENTER YOUR INFORMATION"<<endl;
		cout<<"ENTER NAME:"<<endl;
		cin>>name[i];
        cout<<"ENTER YOUR ACTIVE CONTACT NUMBER:"<<endl;
		cin>>contact[i];
        cout<<"ENTER YOUR NIC NUMBER:"<<endl;
		cin>>nic[i];
        cout<<"ENTER EMAIL:"<<endl;
		cin>>email[i];
    }
        PrintInfo(name, contact, nic, email, person, pkgamount);
				
}



main()
{
	cout << "\t\t\t\tTHIS PROGRAM IS MADE BY" << endl;
	cout << "\t\t\t\t=======================" << endl << endl;
	cout << "\t\t\t MUHAMMAD FURQAN NASIR   " << endl << endl;
	cout << "\t\t\t========================================" << endl;
	cout << "\t\t\tTITLE: \"TRAVEL AGENCY MANAGEMENT SYSTEM\"" << endl;
	cout << "\t\t\t**" << endl << endl;
    cout << endl << endl << endl << endl << endl << endl << endl;
	cout<<"\t\t\tWELCOME TO TRAVEL AGENCY MANEGMENT SYSTEM "<<endl;
	
	
	int opp;
	char x;
	double packageamount;	
	
	
	cout << "\t\t\t=========================================" << endl;
	cout<<"\t\t\t\tCHOOSE THE DESTINATION "<< endl << endl;
	cout<<"presss 1 for karachi to Nothern areas    "<<endl;
	cout<<"presss 2 for karachi to Dubai      "<<endl;
	cout<<"presss 3 for karachi to Turkey     "<<endl;
	
	cin>>opp;
	
	switch (opp)
	{
		case 1: 
		{
			cout<<"\t\t\t\t10 DAYS TOUR PACKAGE  " << endl << endl; 
			cout<<"presss a for business class   (Per Person RS 45000pkr)  "<<endl;
			cout<<"presss b for first class      (Per Person RS 33000pkr)  "<<endl;
			cout<<"presss c for economy class    (Per Person RS 25000pkr)  "<<endl;
			cin>>x;
				
			switch (x)
			{
				case 'a':
					{
						packageamount = 45000;
						cout<<"\t\t\t\tIN THE PACKAGE ALL OF THIS ARE INCLUDED " << endl << endl << endl << endl;
						cout << "\t\t\t\t========================================" << endl << endl;
						cout<<"Luxury Hotel  "<<endl;
						cout<<"Luxury Convence   "<<endl;
						cout<<"Luxury Dinner and BreakFast with Desserts   "<<endl;
						cout<<"Hicking with Safety    "<<endl;
						cout<<"Airport Pick and Drop    "<<endl;
						cout<< "==================================" << endl << endl;
						cout<<"\t\t\t\t\tDAYS PLANNING  " << endl << endl;
						cout<<"First Day Born Fire   "<<endl;
						cout<<"Second Day Swat      "<<endl;
						cout<<"Third Day Chitral    "<<endl;
						cout<<"Fourth Day Skardu   "<<endl;
						cout<<"Fiveth Day Gilgit   "<<endl;
						cout<<"Sixth Day Hunza    "<<endl;
						cout<<"Seventh Day Azad Jammu Kashmir    "<<endl;
						cout<<"Eighth Day Malam Jabba and Kalam    "<<endl;
						cout<<"Ninth Day Your Own Choice You Will Be Enjoy Shopping and Some Areas    "<<endl;
						cout<<"Last Day Back to Home   "<<endl;
						GetInfo(packageamount);
					break;
					}
					
				case 'b':
					{
						packageamount = 30000;
						cout<<"\t\t\t\t IN THE PACKAGE ALL OF THIS ARE INCLUDED " << endl << endl << endl << endl;
						cout << "\t\t\t==================================" << endl << endl;
						cout<<"Four Star Hotel  "<<endl;
						cout<<"Luxury Convence   "<<endl;
						cout<<"Dinner and BreakFast    "<<endl;
						cout<<"Hicking with Safety    "<<endl;
						cout << "==================================" << endl << endl;
						cout<<"\t\t\t\tDAYS PLANNING  " << endl << endl;
						cout<<"First Day Born Fire   "<<endl;
						cout<<"Second Day Swat      "<<endl;
						cout<<"Third Day Chitral    "<<endl;
						cout<<"Fourth Day Skardu   "<<endl;
						cout<<"Fiveth Day Gilgit   "<<endl;
						cout<<"Sixth Day Hunza    "<<endl;
						cout<<"Seventh Day Azad Jammu Kashmir    "<<endl;
						cout<<"Eighth Day Malam Jabba and Kalam    "<<endl;
						cout<<"Ninth Day Your Own Choice You Will Be Enjoy Shopping and Some Areas    "<<endl;
						cout<<"Last Day Back to Home   "<<endl;
						 
					GetInfo(packageamount);
					break;
					}
					
				case 'c':
					{
						packageamount = 20000;
						cout<<"\t\t\t\t IN THE PACKAGE ALL OF THIS ARE INCLUDED " << endl << endl << endl << endl;
						cout << "==================================" << endl << endl;
						cout<<"Hotel  "<<endl;
						cout<<"Convence   "<<endl;
						cout<<"Dinner and BreakFast   "<<endl;
						cout << "==================================" << endl << endl;
						cout<<"\t\t\t\tDAYS PLANNING  " << endl << endl;
						cout<<"First Day Born Fire   "<<endl;
						cout<<"Second Day Swat      "<<endl;
						cout<<"Third Day Chitral    "<<endl;
						cout<<"Fourth Day Skardu   "<<endl;
						cout<<"Fiveth Day Gilgit   "<<endl;
						cout<<"Sixth Day Hunza    "<<endl;
						cout<<"Seventh Day Azad Jammu Kashmir    "<<endl;
						cout<<"Eighth Day Malam Jabba and Kalam    "<<endl;
						cout<<"Ninth Day Your Own Choice You Will Be Enjoy Shopping and Some Areas    "<<endl;
						cout<<"Last Day Back to Home   "<<endl;
					GetInfo(packageamount); 
					break;
					}
			default:
   cout<<"Incorrect"<<endl;	
   
			}
		break;
	
			
		}
			case 2: 
		{
			cout<<"\t\t\t\t 10 DAYS TOUR PACKAGE  " << endl << endl; 
			cout<<"presss a for business class   (Per Person RS 300000pkr)     "<<endl;
			cout<<"presss b for first class      (Per Person RS 250000pkr) "<<endl;
			cout<<"presss c for economy class    (Per Person RS 200000pkr) "<<endl;
			cin>>x;
			
			switch (x)
			{
				case 'a':
					{
						packageamount = 300000;
						cout<<"\t\t\t\t IN THE PACKAGE ALL OF THIS ARE INCLUDED " << endl << endl << endl << endl;
						cout << "==================================" << endl << endl;
						cout<<"Luxury Hotel  "<<endl;
						cout<<"Luxury Convence   "<<endl;
						cout<<"Luxury Dinner and BreakFast with Desserts   "<<endl;
						cout<<"Airport Pick and Drop    "<<endl;
						cout << "==================================" << endl << endl;
						cout<<"\t\t\t\tDAYS PLANNING  " << endl << endl;
						cout<<"First Day Dubai Adventure Water Park    "<<endl;
						cout<<"Second Day Dubai Marina Yacht with breakfast and Bbq        "<<endl;
						cout<<"Third Day burj khalifa     "<<endl;
						cout<<"Fourth Day Desert and Camel Safari   "<<endl;
						cout<<"Fiveth Day Atlantis    "<<endl;
						cout<<"Sixth Day Dubai Aquarium and Underwater Zoo   "<<endl;
						cout<<"Seventh Day Miracle Garden    "<<endl;
						cout<<"Eighth Day La Perle By Dragone    "<<endl;
						cout<<"Ninth Day Your Own Choice You Will Be Enjoy Shopping and Some Areas    "<<endl;
						cout<<"Last Day Back to Home   "<<endl;
				GetInfo(packageamount);
					break;
					}
					case 'b':
					{
						packageamount = 250000;
						cout<<"\t\t\t\t IN THE PACKAGE ALL OF THIS ARE INCLUDED " << endl << endl << endl << endl;
						cout << "==================================" << endl << endl;
						cout<<"Four Star Hotel  "<<endl;
						cout<<"Luxury Convence   "<<endl;
						cout<<"Luxury Dinner and BreakFast    "<<endl;
						cout << "==================================" << endl << endl;
						cout<<"\t\t\t\tDAYS PLANNING  " << endl << endl;
						cout<<"First Day Dubai Adventure Water Park    "<<endl;
						cout<<"Second Day Dubai Marina Yacht with breakfast and Bbq        "<<endl;
						cout<<"Third Day burj khalifa     "<<endl;
						cout<<"Fourth Day Desert and Camel Safari   "<<endl;
						cout<<"Fiveth Day Atlantis    "<<endl;
						cout<<"Sixth Day Dubai Aquarium and Underwater Zoo   "<<endl;
						cout<<"Seventh Day Miracle Garden    "<<endl;
						cout<<"Eighth Day La Perle By Dragone    "<<endl;
						cout<<"Ninth Day Your Own Choice You Will Be Enjoy Shopping and Some Areas    "<<endl;
						cout<<"Last Day Back to Home   "<<endl;
				GetInfo(packageamount);
					break;
					}
					case 'c':
					{
						packageamount = 200000;
						cout<<"\t\t\t\t IN THE PACKAGE ALL OF THIS ARE INCLUDED " << endl << endl << endl << endl;
						cout << "==================================" << endl << endl;
						cout<<"Hotel  "<<endl;
						cout<<"Convence   "<<endl;
						cout<<"Dinner and BreakFast    "<<endl;
						cout << "==================================" << endl << endl;
						cout<<"\t\t\t\tDAYS PLANNING  " << endl << endl;
						cout<<"First Day Dubai Adventure Water Park    "<<endl;
						cout<<"Second Day Dubai Marina Yacht with breakfast and Bbq        "<<endl;
						cout<<"Third Day burj khalifa     "<<endl;
						cout<<"Fourth Day Desert and Camel Safari   "<<endl;
						cout<<"Fiveth Day Atlantis    "<<endl;
						cout<<"Sixth Day Dubai Aquarium and Underwater Zoo   "<<endl;
						cout<<"Seventh Day Miracle Garden    "<<endl;
						cout<<"Eighth Day La Perle By Dragone    "<<endl;
						cout<<"Ninth Day Your Own Choice You Will Be Enjoy Shopping and Some Areas    "<<endl;
						cout<<"Last Day Back to Home   "<<endl;
				GetInfo(packageamount);
					break;
					}
		
			
			default:
   cout<<"Incorrect"<<endl;	
   
		}
		
		
	break;	
   	}
    case 3: 
		{
			cout<<"\t\t\t\t 10 DAYS TOUR PACKAGE  " << endl << endl; 
			cout<<"presss a for business class   (Per Person RS 400000pkr)     "<<endl;
			cout<<"presss b for first class      (Per Person RS 350000pkr) "<<endl;
			cout<<"presss c for economy class    (Per Person RS 300000pkr) "<<endl;
			cin>>x;
			
			switch (x)
			{
				case 'a':
					{
						packageamount = 400000;
						cout<<"\t\t\t\t IN THE PACKAGE ALL OF THIS ARE INCLUDED " << endl << endl << endl << endl;
						cout << "==================================" << endl << endl;
						cout<<"Luxury Hotel  "<<endl;
						cout<<"Luxury Convence   "<<endl;
						cout<<"Luxury Dinner and BreakFast with Desserts   "<<endl;
						cout<<"Airport Pick and Drop    "<<endl;
						cout << "==================================" << endl << endl;
						cout<<"\t\t\t\tDAYS PLANNING  " << endl << endl;
						cout<<"First Day One Hour Hot Air Balloon and Bosphorus   "<<endl;
						cout<<"Second Day Pamukkale and Istanbul Museum       "<<endl;
						cout<<"Third Day Hagia Sophia and Rumeli Fortress    "<<endl;
						cout<<"Fourth Day Topkapi Place Museum and Antalya Aquarium  "<<endl;
						cout<<"Fiveth Day Mount Nemrut Butterfly Valley   "<<endl;
						cout<<"Sixth Day Patara Beach and Grand Bazaar  "<<endl;
						cout<<"Seventh Day The Blue Mosque and Galata Tower    "<<endl;
						cout<<"Eighth Day Soumela Monastery and Basilica Cistern    "<<endl;
						cout<<"Ninth Day Your Own Choice You Will Be Enjoy Shopping and Some Areas    "<<endl;
						cout<<"Last Day Back to Home   "<<endl;
					GetInfo(packageamount);
					break;
					}
					case 'b':
					{
						packageamount = 350000;
						cout<<"\t\t\t\t IN THE PACKAGE ALL OF THIS ARE INCLUDED " << endl << endl << endl << endl;
						cout << "==================================" << endl << endl;
						cout<<"Four Star Hotel  "<<endl;
						cout<<"Luxury Convence   "<<endl;
						cout<<"Luxury Dinner and BreakFast   "<<endl;
						
						cout << "==================================" << endl << endl;
						cout<<"\t\t\t\tDAYS PLANNING  " << endl << endl;
						cout<<"First Day One Hour Hot Air Balloon and Bosphorus   "<<endl;
						cout<<"Second Day Pamukkale and Istanbul Museum       "<<endl;
						cout<<"Third Day Hagia Sophia and Rumeli Fortress    "<<endl;
						cout<<"Fourth Day Topkapi Place Museum and Antalya Aquarium  "<<endl;
						cout<<"Fiveth Day Mount Nemrut Butterfly Valley   "<<endl;
						cout<<"Sixth Day Patara Beach and Grand Bazaar  "<<endl;
						cout<<"Seventh Day The Blue Mosque and Galata Tower    "<<endl;
						cout<<"Eighth Day Soumela Monastery and Basilica Cistern    "<<endl;
						cout<<"Ninth Day Your Own Choice You Will Be Enjoy Shopping and Some Areas    "<<endl;
						cout<<"Last Day Back to Home   "<<endl;
					GetInfo(packageamount);
					break;
					}
					case 'c':
					{
						packageamount = 300000;
						cout<<"\t\t\t\t IN THE PACKAGE ALL OF THIS ARE INCLUDED " << endl << endl << endl << endl;
						cout << "==================================" << endl << endl;
						cout<<"Hotel  "<<endl;
						cout<<"Convence   "<<endl;
						cout<<"Dinner and BreakFast   "<<endl;
						cout << "==================================" << endl << endl;
						cout<<"\t\t\t\tDAYS PLANNING  " << endl << endl;
						cout<<"First Day One Hour Hot Air Balloon and Bosphorus   "<<endl;
						cout<<"Second Day Pamukkale and Istanbul Museum       "<<endl;
						cout<<"Third Day Hagia Sophia and Rumeli Fortress    "<<endl;
						cout<<"Fourth Day Topkapi Place Museum and Antalya Aquarium  "<<endl;
						cout<<"Fiveth Day Mount Nemrut Butterfly Valley   "<<endl;
						cout<<"Sixth Day Patara Beach and Grand Bazaar  "<<endl;
						cout<<"Seventh Day The Blue Mosque and Galata Tower    "<<endl;
						cout<<"Eighth Day Soumela Monastery and Basilica Cistern    "<<endl;
						cout<<"Ninth Day Your Own Choice You Will Be Enjoy Shopping and Some Areas    "<<endl;
						cout<<"Last Day Back to Home   "<<endl;
					GetInfo(packageamount);
					break;
					}
		
			
		default:
   cout<<"Incorrect"<<endl;	
   	
		}
		
		
	break;	
	
   	}
   default:
   cout<<"Incorrect"<<endl;	
    
}
   
}
