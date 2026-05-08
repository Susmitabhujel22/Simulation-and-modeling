#include<iostream>
using namespace std;

int main()
{
    int n,i;
    
    cout<<"Enter number of 3 digit numbers: ";
    cin>>n;
    
    int pair=0, diff=0, three=0;
    
    for(i=0;i<n;i++)
    {
        int num;
        cin>>num;
        
        int a=num/100;
        int b=(num/10)%10;
        int c=num%10;
        
        if(a==b && b==c)
            three++;
        
        else if(a==b || b==c || a==c)
            pair++;
        
        else
            diff++;
    }
    
    cout<<"Three same = "<<three<<endl;
    cout<<"One pair = "<<pair<<endl;
    cout<<"All different = "<<diff;
}
