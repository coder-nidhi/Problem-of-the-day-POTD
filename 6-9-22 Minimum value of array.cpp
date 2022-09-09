#include <iostream>

using namespace std;

int main()
{
    int a[100],size,i,min;
  
    cout<<"Enter the size of array : "<<endl;
    cin>>size;
    
    cout<<"Enter the value in array : "<<endl;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    min=a[0];
     for(i=0;i<size;i++)
     {
         if(a[i]<min)
         {
             min=a[i];
         }
     }
     cout<<"Minimum value of array is "<<min;
     
    return 0;
}
