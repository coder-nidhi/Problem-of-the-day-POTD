#include <iostream>

using namespace std;

int main()
{
    int a, b;
    
    cout<<"Enter the first number : ";
    cin>>a;
    
    cout<<"Enter the second number : ";
    cin>>b;
    
    if(a>b)
    {
        cout<<"Greater number is : "<<a;
    }
    else
    {
        cout<<"Greater number is : "<<b;
    }
    return 0;
}
