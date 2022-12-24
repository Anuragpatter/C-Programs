#include <iostream>
#include<iomanip>  //header file used to define functions like setprecision & fixed to specify number of decimal places in c++
using namespace std;

int main() {
    int n;      //32 bit integer
    long a;     //64 bit integer
    char ch;    //character type
    float m;    //32 bit real value
    double d;   //64 bit real value  
    cin>>n>>a>>ch>>m>>d;
    cout<<n<<endl;
    cout<<a<<endl;
    cout<<ch<<endl;
    cout<<setprecision(3)<<fixed<<m<<endl;
    cout<<setprecision(9)<<fixed<<d<<endl;
    return 0;
}