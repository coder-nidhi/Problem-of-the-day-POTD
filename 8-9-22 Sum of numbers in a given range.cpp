#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    
    cout<<"Enter the first number : ";
    cin>>num1;
    
    cout<<"Enter the second number : ";
    cin>>num2;
    
    int sum = 0;
    
    for(int i = num1; i<=num2; i++)
    {
        sum = sum + i;
    }
    cout<<"The sum between "<<num1<<" and "<<num2<<" is "<<sum;

    return 0;
}
