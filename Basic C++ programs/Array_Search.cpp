// CODE FOR SEARCH IN ARRAY

#include<iostream>
using namespace std;
int main(){
   int a[10],n,search;
    cout<<"Enter the number of elements you want to keep in the array: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element to be searched in the array: ";
    cin>>search;
    for(int i=0;i<n;i++){
    if(search==a[i])
    cout<<a[i];
    else
    cout<<"The element you entered is not Present in the given Array";
    }   
    return 0;
}    