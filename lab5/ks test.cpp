#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    int n,i;
    
    cout<<"Enter number of values: ";
    cin>>n;
    
    double r[50];
    
    cout<<"Enter random numbers:\n";
    
    for(i=0;i<n;i++)
        cin>>r[i];
    
    sort(r,r+n);
    
    double D=0;
    
    for(i=0;i<n;i++)
    {
        double Fo=(i+1)/(double)n;
        double Fe=r[i];
        
        double diff=fabs(Fo-Fe);
        
        if(diff>D)
            D=diff;
    }
    
    cout<<"D value = "<<D;
}
