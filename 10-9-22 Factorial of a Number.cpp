#include <iostream>

using namespace std;

int main()
{
    int num,fact=1;
    
    cout<<"Enter number : ";
    cin>>num;
    
    if(num<0)
    {
        cout<<"Not Possible!";    
    }
    else
    {
        for(int i = 1;i<=num;i++)
        {
            fact = fact*i;
        }
    }
    cout<<"Factorial of "<<num<<" is : "<<fact;
}
