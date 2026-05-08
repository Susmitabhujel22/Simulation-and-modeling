#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,i;
    
    cout<<"Enter number of classes: ";
    cin>>n;
    
    double O[20],E[20],chi=0;
    
    cout<<"Enter observed values:\n";
    
    for(i=0;i<n;i++)
        cin>>O[i];
    
    cout<<"Enter expected values:\n";
    
    for(i=0;i<n;i++)
        cin>>E[i];
    
    for(i=0;i<n;i++)
        chi+=pow(O[i]-E[i],2)/E[i];
    
    cout<<"Chi Square value = "<<chi;
}
