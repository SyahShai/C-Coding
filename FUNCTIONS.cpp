#include <iostream>
using namespace std;

float getDiscount(int creditP)
{
    switch(creditP)
    {
        case 250:
            return 5*0.01;
            break;
        case 500:
            return 8*0.01;
            break; 
        case 1000:
            return 10*0.01;
            break;
        case 2500:
            return 12*0.01;
            break;
        case 5000:
            return 15*0.01;
            break;
        case 8000:
            return 20*0.01;
            break;
        default:
            return 0;
            break;
    }
    return 0;
}
float calPayment(float discount, int total)
{
    float price=(1-discount)*total;
    return price;
}
int main()
{
    int total;
    int points;
    cout<<"Enter total purchase: RM ";
    cin>>total;
    points=total;
    float discount=getDiscount(points);
    
    
    cout<<"\nAmeba Couture Payment Receipt\n";
   	cout<<"\n--------------------------------------\n";
    cout<<"Total Purchase: RM "<<total<<endl;
    cout<<"Point Earn: "<<points<<endl;
    cout<<"Discount: "<<discount<<endl;
    cout<<"Total Purchase after Discount: RM "<<calPayment(discount,total)<<endl;

    return 0;
}
