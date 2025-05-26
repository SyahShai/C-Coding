#include <iostream>
#include <string>
using namespace std;
    
int main()
{
	cout<<"SEPTEMBER Promotion 2013 [from September 10 -30]"<<endl;
    cout<<"================================================"<<endl;
    cout<< "1. KL - Bali"<<endl;
    cout<< "2. KL - Perth"<<endl;
    cout<< "3. Kuching - Singapore"<<endl;
    cout<< "4. Kuching - Beijing"<<endl;
    cout<<"================================================="<<endl;
    
    
    string id , destination;
   	int code , adultTicket , childTicket;
	float adultFare , childFare , totalFare , tax , netFare ;

	
	
	cout<<"Enter Booking ID :";
    cin>>id;
    cout<<"Enter Destination code :";
    cin>> code;
    cout<<"Enter Number of Adults:";
	cin>>adultTicket;
    cout<<"Enter Number of Children:";
	cin>>childTicket;
	
	 if (code==1)
    {
    	adultFare= 105.00;
    	childFare= 50.00;
    	string destination = "KL - Bali";
	}
	else if (code==2)
	{
		adultFare= 250.00;
		childFare= 78.00;
		string destination = "KL - Perth";
	}
	else if (code==3)
	{
		adultFare= 59.00;
		childFare= 29.00;
		string destination = "Kuching - Singapore";
	}
	else if (code==4)
	{
		adultFare= 199.00;
		childFare= 109.00;
		string destination = "Kuching - Beijing";
	}
	
	totalFare=adultFare*adultTicket+childFare*childTicket;
    tax=totalFare*0.15;
    netFare=totalFare+tax;
		
	cout<<"\n Booking Information"<<endl;
    cout<<"================================================"<<endl;
    cout<<"Booking ID:"<<id<<endl;
    cout<<endl;
    cout<<"Number of Adults:"<<adultTicket<<endl;
    cout<<"Number of Children:"<<childTicket<<endl;
    cout<<endl;
    cout<<"Total Fare:RM"<<totalFare<<endl;
    cout<<"Tax :RM "<<tax<<endl;
    cout<<"Fare after tax:RM "<<netFare<<endl;

return 0;
}