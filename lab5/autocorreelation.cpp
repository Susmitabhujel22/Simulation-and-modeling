#include<iostream>
using namespace std;

int main()
{
    int n,k,i;
    
    cout<<"Enter number of values: ";
    cin>>n;
    
    double x[50];
    
    cout<<"Enter values:\n";
    
    for(i=0;i<n;i++)
        cin>>x[i];
    
    cout<<"Enter lag value k: ";
    cin>>k;
    
    double mean=0;
    
    for(i=0;i<n;i++)
        mean+=x[i];
    
    mean=mean/n;
    
    double num=0,den=0;
    
    for(i=0;i<n-k;i++)
        num+=(x[i]-mean)*(x[i+k]-mean);
    
    for(i=0;i<n;i++)
        den+=(x[i]-mean)*(x[i]-mean);
    
    double r=num/den;
    
    cout<<"Autocorrelation = "<<r;
}
