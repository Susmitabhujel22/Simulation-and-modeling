#include<iostream>
using namespace std;

int main()
{
    int n,i,j,step;
    
    cout<<"Enter number of states: ";
    cin>>n;
    
    double p[10][10], state[10], newState[10];
    
    cout<<"Enter transition probability matrix:\n";
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>p[i][j];
    
    cout<<"Enter initial state probabilities:\n";
    for(i=0;i<n;i++)
        cin>>state[i];
    
    cout<<"Enter number of steps: ";
    cin>>step;
    
    for(int s=0;s<step;s++)
    {
        for(i=0;i<n;i++)
        {
            newState[i]=0;
            for(j=0;j<n;j++)
                newState[i]+=state[j]*p[j][i];
        }
        
        for(i=0;i<n;i++)
            state[i]=newState[i];
    }
    
    cout<<"Final state probabilities:\n";
    
    for(i=0;i<n;i++)
        cout<<state[i]<<" ";
}
