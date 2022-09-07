#include <iostream>

using namespace std;

int main()
{
    int a[100],size,i,max;
  
    cout<<"Enter the size of array : "<<endl;
    cin>>size;
    
    cout<<"Enter the value in array : "<<endl;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    max=a[0];
     for(i=0;i<size;i++)
     {
         if(a[i]>max)
         {
             max=a[i];
         }
     }
     cout<<"Maximum value of array is "<<max;
     
    return 0;
}


