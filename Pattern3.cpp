#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
 int i =1;
 int n;
 int count = 1;
 cout<<"Enter any no. : "<<endl;
 cin>>n;
 
 while(i<=n)
 {
     int j= 1;
     while(j<=i)
     {
         cout<<count <<" ";
         count = count +1;
         j = j+1;
         
     }
     cout<<endl;
     i = i+1;
     
 }
    return 0;
}
