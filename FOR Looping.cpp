#include <iostream>

using namespace std;

int main()
{
    char category, again; 
    int year,ccless,ccmiddle,ccmore;
    
    cout<<"Enter the category of the car A or B: "; 
    cin>>category;
    
    for (int i = 0; i < 10; i++)
	{
    if(category == 'A')
	{
        cout<<"Enter the year registered : "; 
        cin>>year; 
        if(year > 1995) 
		{
            break;
        }
        cout<<"How many cars for engine capacity 1000 or less : ";
        cin>>ccless;
        cout<<"How many cars for engine capacity between 1001-2000 : ";
        cin>>ccmiddle;
        cout<<"How many cars for engine capacity more than 2000 : ";
        cin>>ccmore;
        cout<<"Total payment of road tax of category A and engine capacity 1000 or less : "<<50*ccless<<endl; 
        cout<<"Total payment of road tax of category A and engine capacity 1000-2000 : "<<70*ccmiddle<<endl; 
        cout<<"Total payment of road tax of category A and engine capacity more than 2000 : "<<90*ccmore<<endl; 
    }
		else
	{
        cout<<"Enter the year registered : ";
        cin>>year;
        cout<<"How many cars for engine capacity 1500 or less : ";
        cin>>ccless;
        cout<<"How many cars for engine capacity more than 1500 : ";
        cin>>ccmore;
        cout<<"Total payment of road tax of category B and engine capacity 1500 or less : "<<150*ccless<<endl;
        cout<<"Total payment of road tax of category B and engine capacity more than 1500 : "<<300*ccmore<<endl;
    }
    cout<<"Invalid input";
    cout<<endl<<endl;
	}
}