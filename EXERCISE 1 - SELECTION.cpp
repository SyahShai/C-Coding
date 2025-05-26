#include <iostream>
using namespace std;
 int main()
 {
 	float quiz1,quiz2,quiz3,quiz4,mid1,mid2,final;
 	cout<<("===========Quizzes=============\n");
    cout<<("Enter the score earned on quiz one: ");
    cin>>quiz1;
    
    cout<<("Enter the score earned on quiz two: ");	
	cin>>quiz2;
	
	cout<<("Enter the score earned on quiz three: ");	
	cin>>quiz3;
	
	cout<<("Enter the score earned on quiz four: ");	
	cin>>quiz4;
	
	cout<<("===========MIDTERN=============\n");
	cout<<("Enter the score earned on midtern one: ");
    cin>>mid1;
    
    cout<<("Enter the score earned on midtern two: ");
    cin>>mid2;
    
    cout<<("===========FINAL=============\n");
    cout<<("Enter the score earned on the final: ");
    cin>>final;
    
    float total,midtotal,quizpercent,midpercent,finalpercent,totalpercent;
    total=quiz1+quiz2+quiz3+quiz4;
    midtotal=mid1+mid2;
    quizpercent=(total/4)*(0.3);
    midpercent=(midtotal/2)*(0.4);
    finalpercent=(final/1)*(0.3);
    totalpercent=quizpercent+midpercent+finalpercent;
    
    cout<<"First Quiz"<<"     "<<quiz1<<endl;
    cout<<"Second Quiz"<<"    "<<quiz2<<endl;
    cout<<"Third Quiz"<<"     "<<quiz3<<endl;
    cout<<"Fourth Quiz"<<"    "<<quiz4<<endl;
    cout<<"Quiz total"<<"     "<<total<<endl;
    
    cout<<"\nFirst midterm"<<"     "<<mid1<<endl;
    cout<<"Second midterm"<<"     "<<mid2<<endl;
	cout<<"Total midterm"<<"     "<<midtotal<<endl;
   
    cout<<"Final"<<"    "<<final<<endl;
	
	
	cout<<"Quiz"<<"  ";
	cout<<("Quiz:\n",quizpercent)<<"%"<<endl;
	
	cout<<"Midterm"<<"  ";
    cout<<("Midterm:\n",midpercent)<<"%"<<endl;
    
    cout<<"Final"<<"  ";
    cout<<("Final:\n",finalpercent)<<"%"<<endl;
    
    cout<<("--------------------------\n");
    
    cout<<"Total"<<"     ";
    cout<<("Total:",totalpercent)<<"%";
    
    return 0;
 }