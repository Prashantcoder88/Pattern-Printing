#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int i = 1;
    int n;
    cout<<"enter any no."<<endl;
    cin>>n;
    
    while(i<=n)
    {
        int j = 1;
        while(j<=i)
        {
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}
