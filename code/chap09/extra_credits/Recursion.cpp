#include <iostream>
#include <cassert>

using namespace std;
int x =0;
int *ptx = &x;
int recurs(int n)
{
 *ptx=x+1;   
    if (n>0)
    {
for(int i =0;i<x;i++)
cout<<" ";
cout<<"This was written by call number "<<x<<endl;
recurs(n-1);
for(int i =0;i<(x-n);i++)
cout<<" ";
cout<<"This was ALSO written by call number "<<x-n<<endl;



    }
}



int main()
{
recurs(4);

}