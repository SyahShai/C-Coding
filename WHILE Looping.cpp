#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	while (true)
	{
		  cout<<"\n*************MENU****************\n";
  		  cout<<"(K) Kids meal \t: [RM 10.50] ";
  		  cout<<"\n(S) Snack   \t: [RM 15.50] ";
  		  cout<<"\n(C) Combo   \t: [RM 18] ";  
			  
    	char order;
        cout<<"\nYour choice: ";    
        cin>>order;
       
       	string menu;
       	
        if(order!='k' && order!='K' && order!='s' && order!='S' && order!='c' && order!='C')    
		    {
            cout<<"Please choose correct option\n";
        	}
        
    cout<<"Enter Quantity: ";
    int qty;
    cin>>qty;
    
    
    cout<<"Customer pay : ";
    double money;
    cin>>money;
    
    cout<<endl;
    cout<< "\nWELCOME TO UPIN Cafe";
    cout<<"\n*********************************\n";
    
    double bal=0;    
    if(order=='k' || order=='K'){
        bal=10.5*qty;
        cout<<"Type of menu :"<<"       "<<" Kids Meal\n"<<menu;
        cout<<"Item Price: "<<setw(10)<<"RM"<<fixed<<setw(7)<<setprecision(2)<<10.5;
    }
    if(order=='s' || order=='S'){
        bal=15.5*qty;
        cout<<"Type of menu :"<<"       "<<"Snack\n"<<menu;
        cout<<"Item Price: "<<setw(10)<<"RM"<<fixed<<setw(7)<<setprecision(2)<<15.5;
    }
    if(order=='c' || order=='C'){
        bal=18*qty;
        cout<<"Type of menu :"<<"       "<<"Combo\n"<<menu;
        cout<<"Item Price: "<<setw(10)<<"RM"<<fixed<<setw(7)<<setprecision(2)<<18.0;
    }
    
   
    cout<<menu<<endl;
    cout<<"\nQty: "<<setw(24)<<qty;
   
    cout<<"\nTotal: "<<setw(15)<<"RM"<<fixed<<setw(7)<<setprecision(2)<<bal;
   
    double tax=bal*.05;
    cout<<"\n\nTax(5%): "<<setw(13)<<"RM"<<fixed<<setw(7)<<setprecision(2)<<tax;
    
    bal+=tax;
 	
    
    cout<<"\nItem Total: "<<setw(10)<<"RM"<<fixed<<setw(7)<<setprecision(2)<<bal;
    
    cout<<"\n\nPayment: "<<setw(13)<<"RM"<<fixed<<setw(7)<<setprecision(2)<<money;
  
    cout<<"\nBalance: "<<setw(13)<<"RM"<<fixed<<setw(7)<<setprecision(2)<<(money-bal);
    cout<<endl;
	cout<<"Thank you.Please come again"<<endl;
	cout<<"**********************************"<<endl<<endl;
	cout<<endl;
	
	double totalCust;
    double totalSale;
	totalCust++;
    totalSale += bal;
	cout << "\tTotal Customer: " << totalCust << endl;
    cout << "\tTotal Sale Collection: " << fixed << setprecision(2) << totalSale << endl;
    cout<<endl<<endl;

}
	return 0;
}