#include<iostream>
using namespace std;
int PrintNto1(int n)
{
    if(n==0)
    return 0;
    cout<<n<<" ";
    PrintNto1(n-1);
}
int main()
{  int n = 7;
PrintNto1(n);
return 0;
}