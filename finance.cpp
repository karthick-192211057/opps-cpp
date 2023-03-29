#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float p,r,t,ci;

    cout<<"Enter Principle (Amount) :: ";
    cin>>p;
    cout<<"\nEnter Rate of Interest :: ";
    cin>>r;
    cout<<"\nEnter Time Period :: ";
    cin>>t;

    ci = p*pow((1+r/100),t);

    cout<<"\nThe Calculated Compound Interest is = "<<ci<<"\n";

    return 0;
}
Enter Principle (Amount) :: 385000

Enter Rate of Interest :: 13.89

Enter Time Period :: 4

The Calculated Compound Interest is = 647744

Process returned 0

