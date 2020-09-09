//Arrays Introduction


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,N[10000];
    cin>>n;
    for( int i=0 ; i<=n ; i++)
    {
        cin>>N[i];
    }
    for( int i=n-1 ; i>=0 ; --i)
    {
        cout<<N[i];
        cout<<" ";
    }
    return 0;
}
