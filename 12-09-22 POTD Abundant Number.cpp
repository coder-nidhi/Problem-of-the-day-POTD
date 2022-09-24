#include <iostream>
using namespace std;

int main ()
{
    int n, sum = 0;
    
    cout<<"Enter a number : ";
    cin>>n;
    
    for(int i = 1; i < n; i++) 
    { 
        if(n % i == 0) sum = sum + i; 
        
    } 
    if(sum > n){ 
    cout << n << " is an abundant number\n"; 
    cout << "The abundance is: " << (sum-n);
 }  else 
    cout << n << " is not an abundant number\n"; 
} 
