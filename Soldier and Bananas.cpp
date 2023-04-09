#include <iostream>
using namespace std;
int main()
{
    int k,n,w,s,o;
    cin>>k>>n>>w;
    s=0;
    for(int i=1;i<w+1;i++)
    {
        s=s+(i*k);
    }
    o=s-n;
    if (o<0)
        o=0;
    cout<<o;
    return 0;
}
