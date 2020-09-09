//Variable Sized Arrays
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   
    int a, b;
    cin >> a >> b;

    int *mtr[a];

    for(int i=0; i<a; i++)
    {
        int s;
        cin >> s;
        mtr[i] = new int[s];
        for(int j=0; j<s; j++)
        {
            cin>>mtr[i][j];
        }          
    }

    for(int i=0; i<b; i++){
        int r, c;
        cin >> r;
        cin >> c;
        cout << mtr[r][c]<<endl;
    }
    
    return 0;
}
