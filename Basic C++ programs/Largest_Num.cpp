// CODE FOR LARGEST NUMBER IN AN ARRAY
#include<iostream>
using namespace std;
int main(){
    int a[10],n;
    cout<<"Enter the number of elements you want to keep in the array: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<n;i++)
    {
        if(a[0]<a[i])
        {
            a[0]=a[i];
        }
    }
    cout<<a[0];
    
    return 0;
}     